#!/usr/bin/env python3
"""Compile the decompiled C of this project to prove it compiles.

This is a non-matching scaffold (docs/new-project.md in romwright): there is no
byte-identical build. `src/` holds romwright's decompiled C, one function per
unit, each marked NON_MATCHING; this script compiles every unit with the pinned
clang (see config/toolchain.json) for the platform's target and writes
build/compile_report.json. A unit that does not compile is reported, not fatal,
unless --strict is given.

    python3 build.py [-j N] [--strict] [--clang PATH] [--only SUBSTR]
    python3 build.py build/obj/<module>/<shard>/<name>.o     (what objdiff runs)
    python3 build.py fetch                                   (download the pinned clang and objdiff-cli)
    python3 build.py report                                  (objdiff-cli report -> build/report.json)

Standard library only.
"""
import argparse
import concurrent.futures
import glob
import json
import os
import shlex
import shutil
import subprocess
import sys
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parent
PROJECT = json.loads((ROOT / "config" / "project.json").read_text())
BUILD = ROOT / "build"


def find_clang(explicit):
    """--clang, $CLANG, the toolchain profile, the pinned download, then PATH."""
    candidates = [explicit, os.environ.get("CLANG")]
    local = ROOT / "config" / "toolchain.local.json"
    if local.exists():
        candidates.append(json.loads(local.read_text()).get("clang"))
    tool_id = PROJECT["compiler"]["tool"]
    for name in ("clang", "clang.exe"):
        candidates += sorted(glob.glob(str(BUILD / "tools" / tool_id / "*" / "bin" / name)))
    candidates.append(shutil.which("clang"))
    for candidate in candidates:
        if candidate and (Path(candidate).exists() or shutil.which(candidate)):
            return candidate
    raise SystemExit(
        f"no clang found. Run `python3 build.py fetch` to download the pinned {tool_id}, "
        "or pass --clang PATH / set $CLANG / put {\"clang\": \"PATH\"} in config/toolchain.local.json."
    )


def clang_version(clang):
    out = subprocess.run([clang, "--version"], capture_output=True, text=True).stdout
    return out.splitlines()[0] if out else "unknown"


def headers_mtime():
    newest = 0.0
    for path in (ROOT / "include").rglob("*.h"):
        newest = max(newest, path.stat().st_mtime)
    return newest


def command(clang, unit, source, obj):
    compiler = PROJECT["compiler"]
    mode = []
    if "thumb" in unit:  # ARM: compile each function in the mode it was decoded in
        mode = ["-mthumb" if unit["thumb"] else "-marm"]
    return (
        [clang, f"--target={compiler['target']}"]
        + compiler["cflags"]
        + mode
        + ["-I", str(ROOT / "include"), "-c", str(source), "-o", str(obj)]
    )


def compile_unit(clang, unit, newest_header, force):
    source = ROOT / unit["source"]
    obj = ROOT / unit["object"]
    if not force and obj.exists() and obj.stat().st_mtime >= max(source.stat().st_mtime, newest_header):
        return unit, "cached", ""
    obj.parent.mkdir(parents=True, exist_ok=True)
    done = subprocess.run(command(clang, unit, source, obj), capture_output=True, text=True, cwd=ROOT)
    if done.returncode == 0:
        return unit, "ok", ""
    if obj.exists():
        obj.unlink()
    first = next((line for line in done.stderr.splitlines() if "error:" in line), done.stderr.strip()[:200])
    return unit, "failed", first.strip()


def units_present():
    return [unit for unit in PROJECT["units"] if (ROOT / unit["source"]).exists()]


def build(args):
    clang = find_clang(args.clang)
    units = units_present()
    wanted = [a for a in args.paths]
    if wanted:
        by_object = {unit["object"]: unit for unit in units}
        relative = (Path(os.path.relpath(Path(w).resolve(), ROOT)).as_posix() for w in wanted)
        units = [by_object[w] for w in relative if w in by_object]
    if args.only:
        units = [unit for unit in units if args.only in unit["source"]]
    if not units:
        raise SystemExit("no units to build (src/ is empty or nothing matched)")
    newest_header = headers_mtime()
    started = time.time()
    results = {"ok": 0, "cached": 0, "failed": 0}
    failures = []
    with concurrent.futures.ThreadPoolExecutor(max_workers=args.jobs) as pool:
        futures = [pool.submit(compile_unit, clang, unit, newest_header, args.force) for unit in units]
        for index, future in enumerate(concurrent.futures.as_completed(futures), 1):
            unit, status, message = future.result()
            results[status] += 1
            if status == "failed":
                failures.append({"function": unit["function"], "source": unit["source"], "first_error": message})
            if len(units) > 200 and index % 1000 == 0:
                print(f"  {index}/{len(units)}", flush=True)
    compiled = results["ok"] + results["cached"]
    report = {
        "compiler": clang_version(clang),
        "pinned": PROJECT["compiler"]["tool"],
        "target": PROJECT["compiler"]["target"],
        "units": len(units),
        "compiled": compiled,
        "failed": results["failed"],
        "seconds": round(time.time() - started, 1),
        "failures": sorted(failures, key=lambda f: f["source"]),
    }
    if not args.paths:
        BUILD.mkdir(exist_ok=True)
        (BUILD / "compile_report.json").write_text(json.dumps(report, indent=2) + "\n")
    print(
        f"compiled {compiled}/{len(units)} units with {report['compiler']} "
        f"({results['failed']} failed{', see build/compile_report.json' if not args.paths else ''})"
    )
    for failure in failures[:10]:
        print(f"  FAIL {failure['source']}: {failure['first_error']}")
    if len(failures) > 10:
        print(f"  ... {len(failures) - 10} more in build/compile_report.json")
    if args.paths and failures:
        return 1
    return 1 if args.strict and failures else 0


def fetch():
    tools = [PROJECT["compiler"]["tool"], "objdiff-cli"]
    manifest = ROOT / "config" / "toolchain.json"
    known = {t["id"] for t in json.loads(manifest.read_text())["tools"]}
    ids = [t for t in tools if t in known]
    return subprocess.call([sys.executable, str(ROOT / "tools" / "download_tool.py"), *ids])


def text_size(path):
    """Size of the `.text` section of an ELF object, 0 when there is none or the file is missing."""
    import struct

    try:
        data = Path(path).read_bytes()
    except OSError:
        return 0
    if data[:4] != b"\x7fELF":
        return 0
    big = data[5] == 2
    order = ">" if big else "<"
    if data[4] == 2:
        shoff, = struct.unpack_from(order + "Q", data, 0x28)
        shentsize, shnum, shstrndx = struct.unpack_from(order + "HHH", data, 0x3A)
        fields = lambda at: struct.unpack_from(order + "IIQQQQ", data, at)[:6]  # name type flags addr off size
        entry = lambda at: (fields(at)[0], fields(at)[4], fields(at)[5])
    else:
        shoff, = struct.unpack_from(order + "I", data, 0x20)
        shentsize, shnum, shstrndx = struct.unpack_from(order + "HHH", data, 0x2E)
        entry = lambda at: (lambda f: (f[0], f[4], f[5]))(struct.unpack_from(order + "IIIIII", data, at))
    sections = [entry(shoff + i * shentsize) for i in range(shnum)]
    names = sections[shstrndx]
    for name, _offset, size in sections:
        start = names[1] + name
        if data[start : data.index(b"\0", start)] == b".text":
            return size
    return 0


def report():
    local = sorted(glob.glob(str(BUILD / "tools" / "objdiff-cli" / "objdiff-cli*")))
    exe = shutil.which("objdiff-cli") or (local[0] if local else None)
    if not exe:
        raise SystemExit("objdiff-cli not found: run `python3 build.py fetch` or put it on PATH")
    config = ROOT / "objdiff.json"
    if not config.exists():
        raise SystemExit(
            "this platform has no objdiff.json (objdiff has no backend for its CPU); "
            "see README.md for the per-function workflow"
        )
    BUILD.mkdir(exist_ok=True)
    # objdiff-cli 3.6.1 panics on a unit whose compiled function is empty (decompiled code that
    # ends in halt_baddata() compiles to nothing) and fails on a missing object: such units are
    # reported as target-only (0% matched) for this run.
    original = config.read_text()
    document = json.loads(original)
    for unit in document["units"]:
        if "base_path" in unit and text_size(ROOT / unit["base_path"]) == 0:
            del unit["base_path"]
    config.write_text(json.dumps(document, indent=2) + "\n")
    try:
        return subprocess.call([exe, "report", "generate", "-p", str(ROOT), "-o", str(BUILD / "report.json")])
    finally:
        config.write_text(original)


def main():
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("paths", nargs="*", help="`fetch`, `report`, or objects to build")
    parser.add_argument("-j", "--jobs", type=int, default=os.cpu_count() or 2)
    parser.add_argument("--strict", action="store_true", help="exit 1 when any unit fails to compile")
    parser.add_argument("--force", action="store_true", help="rebuild up-to-date objects")
    parser.add_argument("--clang")
    parser.add_argument("--only", help="build only units whose source path contains this")
    args = parser.parse_args()
    if args.paths == ["fetch"]:
        sys.exit(fetch())
    if args.paths == ["report"]:
        sys.exit(report())
    sys.exit(build(args))


if __name__ == "__main__":
    main()

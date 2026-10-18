#!/usr/bin/env python3
"""Compile the decompiled C of this project with its compiler.

`src/` holds romwright's decompiled C, one function per unit, each marked
NON_MATCHING (docs/new-project.md in romwright). config/project.json names the
compiler: the pinned clang (a compile check: no byte-identical build exists) or,
where the platform's retail compiler is pinned (3DS armcc), that compiler, so
objdiff compares every unit with its retail function byte for byte. This script
compiles every unit and writes build/compile_report.json. A unit that does not
compile is reported, not fatal, unless --strict is given.

    python3 build.py [-j N] [--strict] [--clang PATH | --armcc PATH] [--only SUBSTR]
    python3 build.py build/obj/<module>/<shard>/<name>.o     (what objdiff runs)
    python3 build.py fetch                                   (download the pinned compiler, objdiff-cli; 3DS: arm-none-eabi binutils)
    python3 build.py split                                   (3DS: rebuild orig/target/ from orig/<dump>, no romwright)
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


COMPILER = PROJECT["compiler"]
FAMILY = COMPILER.get("family", "clang")
MANIFEST = {t["id"]: t for t in json.loads((ROOT / "config" / "toolchain.json").read_text())["tools"]}


def find_compiler(args):
    """--clang/--armcc, $CLANG/$ARMCC, the toolchain profile, the pinned download, then PATH."""
    explicit = args.armcc if FAMILY == "armcc" else args.clang
    candidates = [explicit, os.environ.get(FAMILY.upper())]
    local = ROOT / "config" / "toolchain.local.json"
    if local.exists():
        candidates.append(json.loads(local.read_text()).get(FAMILY))
    tool_id = COMPILER["tool"]
    entry = MANIFEST.get(tool_id, {}).get("entry")
    if FAMILY == "armcc" and entry:
        candidates.append(str(BUILD / "tools" / tool_id / entry))
    for name in ("clang", "clang.exe") if FAMILY == "clang" else ():
        candidates += sorted(glob.glob(str(BUILD / "tools" / tool_id / "*" / "bin" / name)))
    candidates.append(shutil.which(FAMILY))
    for candidate in candidates:
        if candidate and (Path(candidate).exists() or shutil.which(candidate)):
            return candidate
    flag = "--armcc" if FAMILY == "armcc" else "--clang"
    raise SystemExit(
        f"no {FAMILY} found. Run `python3 build.py fetch` to download the pinned {tool_id}, "
        f"or pass {flag} PATH / set ${FAMILY.upper()} / put {{\"{FAMILY}\": \"PATH\"}} in config/toolchain.local.json."
    )


def launcher():
    """armcc is a Windows executable: other hosts run it through wibo."""
    if FAMILY != "armcc" or os.name == "nt":
        return []
    wibo = shutil.which("wibo") or next(iter(sorted(glob.glob(str(BUILD / "tools" / "wibo" / "wibo*")))), None)
    if not wibo:
        raise SystemExit("armcc needs wibo on this host: run `python3 build.py fetch` or put wibo on PATH")
    return [wibo]


def compiler_version(compiler):
    probe = "--vsn" if FAMILY == "armcc" else "--version"
    done = subprocess.run(launcher() + [compiler, probe], capture_output=True, text=True)
    lines = (done.stdout or done.stderr).strip().splitlines()
    return lines[0].strip() if lines else "unknown"


def headers_mtime():
    newest = 0.0
    for path in (ROOT / "include").rglob("*.h"):
        newest = max(newest, path.stat().st_mtime)
    return newest


def command(compiler, unit, source, obj):
    mode = []
    if "thumb" in unit:  # ARM: compile each function in the mode it was decoded in
        modes = COMPILER.get("modes", {"arm": "-marm", "thumb": "-mthumb"})
        mode = [modes["thumb"] if unit["thumb"] else modes["arm"]]
    if FAMILY == "armcc":
        system = Path(compiler).resolve().parent.parent / "include"
        includes = ["-J", str(system)] if system.is_dir() else []
        return (
            launcher()
            + [compiler, "-c"]
            + COMPILER["cflags"]
            + mode
            + includes
            + ["-I", str(ROOT / "include"), "-o", str(obj), str(source)]
        )
    return (
        [compiler, f"--target={COMPILER['target']}"]
        + COMPILER["cflags"]
        + mode
        + ["-I", str(ROOT / "include"), "-c", str(source), "-o", str(obj)]
    )


def compile_unit(compiler, unit, newest_header, force):
    source = ROOT / unit["source"]
    obj = ROOT / unit["object"]
    if not force and obj.exists() and obj.stat().st_mtime >= max(source.stat().st_mtime, newest_header):
        return unit, "cached", ""
    obj.parent.mkdir(parents=True, exist_ok=True)
    done = subprocess.run(command(compiler, unit, source, obj), capture_output=True, text=True, cwd=ROOT)
    if done.returncode == 0:
        return unit, "ok", ""
    if obj.exists():
        obj.unlink()
    output = done.stderr + done.stdout
    first = next((line for line in output.splitlines() if "error" in line.lower()), output.strip()[:200])
    return unit, "failed", first.strip()


def units_present():
    return [unit for unit in PROJECT["units"] if (ROOT / unit["source"]).exists()]


def build(args):
    compiler = find_compiler(args)
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
        futures = [pool.submit(compile_unit, compiler, unit, newest_header, args.force) for unit in units]
        for index, future in enumerate(concurrent.futures.as_completed(futures), 1):
            unit, status, message = future.result()
            results[status] += 1
            if status == "failed":
                failures.append({"function": unit["function"], "source": unit["source"], "first_error": message})
            if len(units) > 200 and index % 1000 == 0:
                print(f"  {index}/{len(units)}", flush=True)
    compiled = results["ok"] + results["cached"]
    report = {
        "compiler": compiler_version(compiler),
        "pinned": COMPILER["tool"],
        "family": FAMILY,
        "target": COMPILER.get("target", COMPILER.get("arch")),
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
    tools = [COMPILER["tool"], "objdiff-cli"]
    if FAMILY == "armcc" and os.name != "nt":
        tools.append("wibo")
    ids = [t for t in tools if t in MANIFEST]
    status = subprocess.call([sys.executable, str(ROOT / "tools" / "download_tool.py"), *ids])
    # tools/relink.py links with GNU ld; a host the pinned binutils do not cover can bring its own.
    if "binutils-arm-none-eabi" in MANIFEST and (ROOT / "tools" / "relink.py").exists():
        if subprocess.call([sys.executable, str(ROOT / "tools" / "download_tool.py"), "binutils-arm-none-eabi"]) != 0:
            print("note: tools/relink.py needs arm-none-eabi binutils: put them on PATH or pass --ld/--objcopy", file=sys.stderr)
    return status


def split(arguments):
    """tools/split.py: the retail target objects, from the dump and config/ only."""
    script = ROOT / "tools" / "split.py"
    if not script.exists():
        raise SystemExit("this project has no tools/split.py (only Nintendo 3DS projects can rebuild orig/target without romwright)")
    return subprocess.call([sys.executable, str(script), *arguments])


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
    if not any((ROOT / unit["target_path"]).exists() for unit in json.loads(config.read_text())["units"]):
        raise SystemExit(
            "orig/target/ holds no retail objects: "
            + ("run `python3 build.py split` (it needs your dump in orig/)" if (ROOT / "tools" / "split.py").exists()
               else "regenerate the project with romwright-cli new-project (they are cut from your dump)")
        )
    BUILD.mkdir(exist_ok=True)
    # objdiff-cli 3.6.1 panics on a unit whose compiled function is empty (decompiled code that
    # ends in halt_baddata() compiles to nothing) and fails on a missing object: such units are
    # reported as target-only (0% matched) for this run.
    original = config.read_bytes()
    document = json.loads(original)
    for unit in document["units"]:
        if "base_path" in unit and text_size(ROOT / unit["base_path"]) == 0:
            del unit["base_path"]
    config.write_bytes((json.dumps(document, indent=2) + "\n").encode())
    try:
        return subprocess.call([exe, "report", "generate", "-p", str(ROOT), "-o", str(BUILD / "report.json")])
    finally:
        # Byte for byte: a text-mode rewrite would turn a checkout's LF into CRLF on Windows.
        config.write_bytes(original)


def main():
    if sys.argv[1:2] == ["split"]:
        sys.exit(split(sys.argv[2:]))
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("paths", nargs="*", help="`fetch`, `report`, or objects to build")
    parser.add_argument("-j", "--jobs", type=int, default=os.cpu_count() or 2)
    parser.add_argument("--strict", action="store_true", help="exit 1 when any unit fails to compile")
    parser.add_argument("--force", action="store_true", help="rebuild up-to-date objects")
    parser.add_argument("--clang", help="clang to use (projects built with clang)")
    parser.add_argument("--armcc", help="armcc.exe to use (projects built with armcc)")
    parser.add_argument("--only", help="build only units whose source path contains this")
    args = parser.parse_args()
    if args.paths == ["fetch"]:
        sys.exit(fetch())
    if args.paths == ["report"]:
        sys.exit(report())
    sys.exit(build(args))


if __name__ == "__main__":
    main()

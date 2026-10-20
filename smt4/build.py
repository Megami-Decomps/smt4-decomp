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
# Headers both games share (the engine, the SDK and most game code are one build tree).
SHARED_INCLUDE = ROOT.parent / "include"


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
    for directory in (ROOT / "include", SHARED_INCLUDE):
        for path in directory.rglob("*.h"):
            newest = max(newest, path.stat().st_mtime)
    return newest


def command(compiler, unit, source, obj):
    mode = []
    if "thumb" in unit:  # ARM: compile each function in the mode it was decoded in
        modes = COMPILER.get("modes", {"arm": "-marm", "thumb": "-mthumb"})
        mode = [modes["thumb"] if unit["thumb"] else modes["arm"]]
    # A unit may carry its own "cflags" in config/project.json: code the original build compiled
    # differently (e.g. -Ospace, which calls __aeabi_idivmod where -Otime multiplies). Needs evidence.
    cflags = unit.get("cflags", COMPILER["cflags"])
    if FAMILY == "armcc":
        system = Path(compiler).resolve().parent.parent / "include"
        includes = ["-J", str(system)] if system.is_dir() else []
        return (
            launcher()
            + [compiler, "-c"]
            + cflags
            + mode
            + includes
            + ["-I", str(ROOT / "include"), "-I", str(SHARED_INCLUDE), "-o", str(obj), str(source)]
        )
    return (
        [compiler, f"--target={COMPILER['target']}"]
        + COMPILER["cflags"]
        + mode
        + ["-I", str(ROOT / "include"), "-c", str(source), "-o", str(obj)]
    )


_SYMBOL_ADDRESSES = None


def symbol_addresses():
    """config/symbols.txt as {name: address} (Thumb bit clear)."""
    global _SYMBOL_ADDRESSES
    if _SYMBOL_ADDRESSES is None:
        import re
        text = (ROOT / "config" / "symbols.txt").read_text(encoding="utf-8")
        _SYMBOL_ADDRESSES = {m[1]: int(m[2], 16) & ~1 for m in re.finditer(r"^(\S+) = (?:\S+:)?0x([0-9a-fA-F]+);", text, re.M)}
    return _SYMBOL_ADDRESSES


def link_weak_calls(obj, unit=None):
    """Do what armlink did to the retail code, which per-function objects never went through:
    - a call to a weak function nothing defines (the release build left the debug hooks out)
      becomes MOV r0, r0 in ARM code and two MOV r8, r8 in Thumb;
    - with `unit` (for its address), a branch to the very next instruction, a tail call into the
      function placed right after this one, becomes the same NOP (armlink's --branchnop default).
    armcc itself never emits these NOPs, so every one in the retail code is such a call. The
    relocation goes too. Returns how many."""
    import struct
    data = bytearray(Path(obj).read_bytes())
    shoff, = struct.unpack_from("<I", data, 0x20)
    entsize, count, strndx = struct.unpack_from("<HHH", data, 0x2E)
    headers = [list(struct.unpack_from("<10I", data, shoff + i * entsize)) for i in range(count)]
    name = lambda h: bytes(data[headers[strndx][4] + h[0]:data.index(b"\0", headers[strndx][4] + h[0])])
    text = next((i for i, h in enumerate(headers) if name(h) == b".text"), None)
    patched = 0
    for index, rel in enumerate(headers):
        if rel[1] != 9 or rel[7] != text:  # SHT_REL for .text
            continue
        symtab = headers[rel[6]]
        kept = []
        for at in range(rel[4], rel[4] + rel[5], 8):
            offset, info = struct.unpack_from("<II", data, at)
            _name, _value, _size, sym_info, _other, shndx = struct.unpack_from("<IIIBBH", data, symtab[4] + (info >> 8) * 16)
            kind = info & 0xFF
            name_at = headers[symtab[6]][4] + _name
            symbol = bytes(data[name_at:data.index(b"\0", name_at)]).decode()
            weak_call = kind in (28, 29, 10, 30) and shndx == 0 and sym_info >> 4 == 2
            next_call = (unit is not None and kind in (28, 29, 10, 30)
                         and symbol_addresses().get(symbol) == int(unit["address"], 16) + offset + 4)
            if weak_call or next_call:  # BL/B (ARM, Thumb) to an absent weak symbol or the next instruction
                if kind in (28, 29):
                    struct.pack_into("<I", data, headers[text][4] + offset, 0xE1A00000)
                else:
                    struct.pack_into("<HH", data, headers[text][4] + offset, 0x46C0, 0x46C0)
                patched += 1
            else:
                kept.append(bytes(data[at:at + 8]))
        if len(kept) * 8 != rel[5]:
            data[rel[4]:rel[4] + len(kept) * 8] = b"".join(kept)
            struct.pack_into("<I", data, shoff + index * entsize + 0x14, len(kept) * 8)
    if patched:
        Path(obj).write_bytes(bytes(data))
    return patched


def read_elf(data):
    """(sections, symbols) of an ELF32 relocatable object: sections as dicts (name, type, flags,
    offset, size, link, info), symbols as dicts (name, value, size, bind, type, shndx)."""
    import struct
    shoff, = struct.unpack_from("<I", data, 0x20)
    entsize, count, strndx = struct.unpack_from("<HHH", data, 0x2E)
    raw = [struct.unpack_from("<10I", data, shoff + i * entsize) for i in range(count)]
    text = lambda table, at: bytes(data[table + at:data.index(b"\0", table + at)]).decode()
    sections = [dict(name=text(raw[strndx][4], h[0]), type=h[1], flags=h[2], offset=h[4], size=h[5], link=h[6], info=h[7])
                for h in raw]
    symbols = []
    for s in sections:
        if s["type"] == 2:  # SHT_SYMTAB
            names = sections[s["link"]]["offset"]
            for at in range(s["offset"], s["offset"] + s["size"], 16):
                name, value, size, info, _other, shndx = struct.unpack_from("<IIIBBH", data, at)
                symbols.append(dict(name=text(names, name), value=value, size=size, bind=info >> 4, type=info & 0xF, shndx=shndx))
    return sections, symbols


def needs_carving(obj, unit):
    """True when the object holds more than the unit's function: another function (a destructor's
    deleting variant next to it) or a COMDAT group (a vtable the destructor's file emits)."""
    sections, symbols = read_elf(Path(obj).read_bytes())
    places = {(s["shndx"], s["value"] & ~1) for s in symbols if s["type"] == 2 and s["bind"] in (1, 2) and s["shndx"]}
    return len(places) > 1 or any(s["type"] == 17 for s in sections)  # SHT_GROUP


def carve(obj, unit):
    """Rewrite an object compiled with --split_sections to hold only the unit's function, as the one
    function per unit the retail objects are: its own section becomes `.text`; what it references in
    the dropped sections (the vtable, the other variants) becomes an undefined symbol, resolved like any
    other at link time. Returns False (object untouched) when it references a dropped section by
    section symbol, which has no name to resolve."""
    import struct
    sys.path.insert(0, str(ROOT / "tools"))
    import split
    data = Path(obj).read_bytes()
    sections, symbols = read_elf(data)
    own = next((s for s in symbols if s["name"] == unit["function"] and s["shndx"] and s["type"] == 2), None)
    if own is None:
        return False
    index = own["shndx"]
    body = sections[index]
    code = bytearray(data[body["offset"]:body["offset"] + body["size"]])
    relocs, local_symbols, weak = [], {}, set()
    for rel in sections:
        if rel["type"] != 9 or rel["info"] != index:
            continue
        for at in range(rel["offset"], rel["offset"] + rel["size"], 8):
            offset, info = struct.unpack_from("<II", data, at)
            target = symbols[info >> 8]
            if target["shndx"] == index and target["bind"] == 0 and target["name"]:
                key = f"{target['name']}@{target['value']:x}"
                local_symbols[key] = (target["name"], target["value"])
                relocs.append((offset, key, info & 0xFF))
            elif not target["name"] or target["type"] == 3:  # a section symbol: nothing to resolve it by
                return False
            else:
                if target["bind"] == 2 and not target["shndx"]:
                    weak.add(target["name"])
                relocs.append((offset, target["name"], info & 0xFF))
    marks = sorted((s["value"], s["name"]) for s in symbols if s["shndx"] == index and s["name"] in ("$a", "$t", "$d"))
    pools = [(value, next((v for v, _n in marks if v > value), len(code))) for value, name in marks if name == "$d"]
    attributes = next((bytes(data[s["offset"]:s["offset"] + s["size"]]) for s in sections if s["type"] == 0x70000003), b"")
    Path(obj).write_bytes(split.build_object(unit["function"], bytes(code), bool(unit.get("thumb")), relocs, pools,
                                             attributes, local_symbols, own["size"], weak))
    return True


def finish_object(compiler, unit, source, obj):
    """What happens to a freshly compiled unit object: a destructor's or a file's extra functions and
    vtable are cut away (recompiling with --split_sections), then armlink's NOPs are applied."""
    if needs_carving(obj, unit):
        split_command = command(compiler, unit, source, obj)
        split_command.insert(split_command.index("-o"), "--split_sections")
        done = subprocess.run(split_command, capture_output=True, text=True, cwd=ROOT)
        if done.returncode == 0:
            carve(obj, unit)
    link_weak_calls(obj, unit)


def compile_unit(compiler, unit, newest_header, force):
    source = ROOT / unit["source"]
    obj = ROOT / unit["object"]
    if not force and obj.exists() and obj.stat().st_mtime >= max(source.stat().st_mtime, newest_header):
        return unit, "cached", ""
    obj.parent.mkdir(parents=True, exist_ok=True)
    done = subprocess.run(command(compiler, unit, source, obj), capture_output=True, text=True, cwd=ROOT)
    if done.returncode == 0:
        finish_object(compiler, unit, source, obj)
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

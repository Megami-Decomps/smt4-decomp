#!/usr/bin/env python3
"""Compile the decompiled C of this project with its compiler.

`src/` holds romwright's decompiled C, one function per unit, each marked
NON_MATCHING (docs/new-project.md in romwright). config/project.json names the
compiler: the pinned clang (a compile check: no byte-identical build exists) or,
where the platform's retail compiler is pinned (3DS armcc), that compiler, so
objdiff compares every unit with its retail function byte for byte. This script
compiles every unit and writes build/compile_report.json. A unit that does not
compile is reported, not fatal, unless --strict is given. A unit is compiled again
only when something its object depends on changed (see `Deps`); --force compiles
every selected unit.

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
import hashlib
import json
import os
import re
import shlex
import shutil
import subprocess
import sys
import threading
import time
from pathlib import Path

ROOT = Path(os.path.abspath(__file__)).parent
PROJECT = json.loads((ROOT / "config" / "project.json").read_text())
UNITS_BY_FUNCTION = {unit["function"]: unit for unit in PROJECT["units"]}
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
    done = subprocess.run(launcher() + [compiler, probe], capture_output=True, text=True, encoding="utf-8", errors="replace")
    lines = (done.stdout or done.stderr).strip().splitlines()
    return lines[0].strip() if lines else "unknown"


def command(compiler, unit, source, obj):
    mode = []
    if "thumb" in unit:  # ARM: compile each function in the mode it was decoded in
        modes = COMPILER.get("modes", {"arm": "-marm", "thumb": "-mthumb"})
        mode = [modes["thumb"] if unit["thumb"] else modes["arm"]]
    # A unit may carry its own "cflags" in config/project.json: code the original build compiled
    # differently (e.g. -Ospace, which calls __aeabi_idivmod where -Otime multiplies). Needs evidence.
    cflags = unit.get("cflags", COMPILER["cflags"])
    # A unit may also name, in "multifile", functions the original compiled in the same armcc
    # --multifile run: armcc then knows which registers those callees really clobber and keeps
    # values in caller-saved registers across the calls, without inlining them across files
    # (--no_autoinline). Their unit sources are compiled alongside; carve keeps the unit's own
    # function. Needs evidence like "cflags": IDENTICAL with the list, not without.
    together = [ROOT / UNITS_BY_FUNCTION[name]["source"] for name in unit.get("multifile", ()) if name in UNITS_BY_FUNCTION]
    # "autoinline" overrides that choice (same evidence rule): true drops --no_autoinline from a
    # multifile run, false adds it to a unit or translation unit compiled without partners, where
    # armcc's -O2/-O3 default inlines.
    autoinline = unit.get("autoinline", not together)
    if FAMILY == "armcc":
        includes = system_include(compiler)
        # armcc --multifile checks declarations across the files it compiles together (#1171, which
        # cannot be downgraded): a unit's local callee declarations must agree with the callees' sources.
        noinline = [] if autoinline else ["--no_autoinline"]
        multifile = ["--multifile"] + noinline + ["--split_sections"] if together else noinline
        return (
            launcher()
            + [compiler, "-c"]
            + cflags
            + multifile
            + mode
            + includes
            + ["-I", str(ROOT / "include"), "-I", str(SHARED_INCLUDE), "-o", str(obj), str(source)]
            + [str(path) for path in together]
        )
    return (
        [compiler, f"--target={COMPILER['target']}"]
        + COMPILER["cflags"]
        + mode
        + ["-I", str(ROOT / "include"), "-c", str(source), "-o", str(obj)]
    )


_SYSTEM_INCLUDES = {}


def system_include(compiler):
    """`-J` and armcc's own include directory, when it has one."""
    if compiler not in _SYSTEM_INCLUDES:
        system = Path(compiler).resolve().parent.parent / "include"
        _SYSTEM_INCLUDES[compiler] = ["-J", str(system)] if system.is_dir() else []
    return list(_SYSTEM_INCLUDES[compiler])


_SYMBOL_ADDRESSES = None


def symbol_addresses():
    """config/symbols.txt as {name: address} (Thumb bit clear)."""
    global _SYMBOL_ADDRESSES
    if _SYMBOL_ADDRESSES is None:
        import re
        text = (ROOT / "config" / "symbols.txt").read_text(encoding="utf-8")
        _SYMBOL_ADDRESSES = {m[1]: int(m[2], 16) & ~1 for m in re.finditer(r"^(\S+) = (?:\S+:)?0x([0-9a-fA-F]+);", text, re.M)}
    return _SYMBOL_ADDRESSES


# Tables the compile threads share: built under the lock, published only when complete.
_CACHE_LOCK = threading.Lock()
_INLINED = None


def inlined_bodies():
    """{name: instruction} of the ARM functions armlink inlines (`--inline`): one instruction that
    doesn't address pc, then `bx lr`. The retail code never calls one: each `bl` to it is that
    instruction (an SDK svc wrapper's `svc`, a getter's `ldr`, a setter's `vstr`, `mov r0, #0`).
    An empty function (a lone `bx lr`) is inlined as a NOP: the image never calls one.
    A NOP body is called, not inlined. Their bytes come from the retail target objects, and for the
    ones armlink then removed as unreferenced (no copy left in the image) from
    `config/inlined.txt`: `<symbol> = 0x<instruction>; // <call sites>`."""
    global _INLINED
    with _CACHE_LOCK:
        if _INLINED is not None:
            return _INLINED
        import struct
        inlined = {}
        for unit in PROJECT["units"]:
            target = ROOT / unit["target"]
            if unit.get("thumb") or unit["size"] not in (4, 8) or not target.exists():
                continue
            data = target.read_bytes()
            sections, _symbols = read_elf(data)
            body = next((s for s in sections if s["name"] == ".text"), None)
            if body is None or body["size"] < unit["size"]:
                continue
            if unit["size"] == 4:
                # An empty function (`bx lr`): armlink's --inline leaves a NOP where it was called.
                if struct.unpack_from("<I", data, body["offset"])[0] == 0xE12FFF1E:
                    inlined[unit["function"]] = 0xE1A00000
                continue
            word, ret = struct.unpack_from("<II", data, body["offset"])
            svc = word >> 24 & 0xF == 0xF
            if (ret == 0xE12FFF1E and word >> 28 == 0xE and word not in (0xE1A00000, 0xE320F000)
                    and word >> 25 & 7 != 5 and (svc or 15 not in (word >> 16 & 0xF, word >> 12 & 0xF))):
                inlined[unit["function"]] = word
        listed = ROOT / "config" / "inlined.txt"
        if listed.exists():
            for line in listed.read_text(encoding="utf-8").splitlines():
                match = re.match(r"^(\S+) = 0x([0-9a-fA-F]{8});", line)
                if match:
                    inlined[match[1]] = int(match[2], 16)
        # Publish only the finished table: compile threads read it while another may still build it.
        _INLINED = inlined
    return _INLINED


_VENEERS = None


def veneer_stubs():
    """{Thumb function: the armlink stub before it} for the stubs retail has: an 8-byte ARM function
    `add ip, pc, #1; bx ip` (checked in its retail target object) placed right before a Thumb one.
    armlink sends every ARM `b` and conditional `bl` to a Thumb function through it (they cannot
    change the instruction set), so retail's relocation names the stub."""
    global _VENEERS
    with _CACHE_LOCK:
        if _VENEERS is not None:
            return _VENEERS
        import struct
        by_address = {int(unit["address"], 16): unit for unit in PROJECT["units"]}
        veneers = {}
        for unit in PROJECT["units"]:
            target = ROOT / unit["target"] if "target" in unit else None
            thumb = by_address.get(int(unit["address"], 16) + 8)
            if unit.get("thumb") or unit["size"] != 8 or target is None or not target.exists() or not (thumb and thumb.get("thumb")):
                continue
            data = target.read_bytes()
            body = next((s for s in read_elf(data)[0] if s["name"] == ".text"), None)
            if body and body["size"] >= 8 and struct.unpack_from("<II", data, body["offset"]) == (0xE28FC001, 0xE12FFF1C):
                veneers[thumb["function"]] = unit["function"]
        _VENEERS = veneers
    return _VENEERS


def link_weak_calls(obj, unit=None):
    """Do what armlink did to the retail code, which per-function objects never went through:
    - a call to a weak function nothing defines (the release build left the debug hooks out)
      becomes MOV r0, r0 in ARM code and two MOV r8, r8 in Thumb;
    - with `unit` (for its address), a branch to the very next instruction, a tail call into the
      function placed right after this one, becomes the same NOP (armlink's --branchnop default);
    - an ARM `bl` to a function of one instruction and `bx lr` becomes that instruction
      (armlink's --inline, see `inlined_bodies`); a conditional `bl` (armcc writes R_ARM_JUMP24)
      becomes it with the call's condition (`bleq getter` -> `ldreq ...`), when its own is AL.
    armcc itself never emits these NOPs, so every one in the retail code is such a call. The
    relocation goes too. Returns how many.

    An ARM `b` (R_ARM_JUMP24) or conditional `bl` to a Thumb function cannot change the instruction
    set, so armlink sent it through the 8-byte stub it placed before that function (see
    `veneer_stubs`): the relocation is retargeted at the stub's symbol, as in the retail objects.
    An unconditional `bl` stays: the linker turns it into a `blx`.

    `__cxa_guard_release` and `__aeabi_atexit` count as weak: in the retail program the first is not
    defined and the second is an empty function (`bx lr`), and every call a static's initialisation
    makes to them is this NOP (armlink's --inline removed the calls to the empty function); armcc 4.1
    references them strongly. A tail branch to `__aeabi_atexit` (a file's last registration)
    stays: armlink cannot inline a `b`. `__dso_handle`, the atexit argument, is the image base:
    retail's pool holds `entry`.

    An R_ARM_NONE relocation is dropped: armcc attaches one per format feature to the first
    instruction of a function that calls `sprintf` (`_printf_d`, `_printf_percent`, ...) so that
    armlink pulls those parts of the C library in. It patches no bytes, and retail's objects, which
    went through armlink, have none; its symbol becomes weak like a removed call's."""
    import struct
    data = bytearray(Path(obj).read_bytes())
    shoff, = struct.unpack_from("<I", data, 0x20)
    entsize, count, strndx = struct.unpack_from("<HHH", data, 0x2E)
    headers = [list(struct.unpack_from("<10I", data, shoff + i * entsize)) for i in range(count)]
    name = lambda h: bytes(data[headers[strndx][4] + h[0]:data.index(b"\0", headers[strndx][4] + h[0])])
    text = next((i for i, h in enumerate(headers) if name(h) == b".text"), None)
    patched, stubs, stub_symtab = 0, {}, None
    dropped, still_called = set(), set()
    for index, rel in enumerate(headers):
        if rel[1] != 9 or not headers[rel[7]][2] & 4:  # SHT_REL of a code section (.text, an inline function's i.)
            continue
        code = headers[rel[7]][4]
        symtab = headers[rel[6]]
        kept = []
        for at in range(rel[4], rel[4] + rel[5], 8):
            offset, info = struct.unpack_from("<II", data, at)
            _name, _value, _size, sym_info, _other, shndx = struct.unpack_from("<IIIBBH", data, symtab[4] + (info >> 8) * 16)
            kind = info & 0xFF
            name_at = headers[symtab[6]][4] + _name
            symbol = bytes(data[name_at:data.index(b"\0", name_at)]).decode()
            if symbol == "__dso_handle" and shndx == 0:
                data[name_at:name_at + 6] = b"entry\0"
                patched += 1
            weak_call = (kind in (28, 29, 10, 30) and shndx == 0
                         and (sym_info >> 4 == 2 or symbol == "__cxa_guard_release"
                              or (symbol == "__aeabi_atexit" and kind != 29)))
            next_call = (unit is not None and rel[7] == text and kind in (28, 29, 10, 30)
                         and symbol_addresses().get(symbol) == int(unit["address"], 16) + offset + 4)
            if kind == 0:  # R_ARM_NONE: a library feature reference, no bytes to patch
                patched += 1
            elif kind == 28 and symbol in inlined_bodies() and struct.unpack_from("<I", data, code + offset)[0] >> 24 == 0xEB:
                struct.pack_into("<I", data, code + offset, inlined_bodies()[symbol])
                patched += 1
            elif (kind in (28, 29) and symbol in inlined_bodies() and inlined_bodies()[symbol] >> 28 == 0xE
                  and struct.unpack_from("<I", data, code + offset)[0] >> 24 & 0xF == 0xB
                  and struct.unpack_from("<I", data, code + offset)[0] >> 28 < 0xE):
                # a conditional BL: the inlined instruction keeps the call's condition (bits 31-28)
                condition = struct.unpack_from("<I", data, code + offset)[0] & 0xF0000000
                struct.pack_into("<I", data, code + offset, condition | inlined_bodies()[symbol] & 0x0FFFFFFF)
                patched += 1
            elif weak_call or next_call:  # BL/B (ARM, Thumb) to an absent weak symbol or the next instruction
                if kind in (28, 29):
                    struct.pack_into("<I", data, code + offset, 0xE1A00000)
                else:
                    struct.pack_into("<HH", data, code + offset, 0x46C0, 0x46C0)
                patched += 1
            elif (unit is not None and not unit.get("thumb") and rel[7] == text and shndx == 0 and symbol in veneer_stubs()
                  and (kind == 29 or (kind == 28 and struct.unpack_from("<I", data, code + offset)[0] >> 28 != 0xE))):
                # a B or conditional BL to a Thumb function: retail's relocation names its armlink stub
                stub_symtab = rel[6]
                number = stubs.setdefault(veneer_stubs()[symbol], len(stubs))
                struct.pack_into("<II", data, at, offset, (symtab[5] // 16 + number) << 8 | kind)
                kept.append(bytes(data[at:at + 8]))
                patched += 1
                continue
            else:
                kept.append(bytes(data[at:at + 8]))
                continue
            if shndx == 0:  # an undefined callee whose call is gone: weak, unless another call keeps it
                dropped.add((rel[6], info >> 8))
        if len(kept) * 8 != rel[5]:
            data[rel[4]:rel[4] + len(kept) * 8] = b"".join(kept)
            struct.pack_into("<I", data, shoff + index * entsize + 0x14, len(kept) * 8)
        for entry in kept:
            still_called.add((rel[6], struct.unpack_from("<II", entry)[1] >> 8))
    # Only after every relocation is seen: marking one early would turn a later B to the same
    # callee (a tail call armlink leaves alone) into a call to an absent weak function.
    for symtab_index, symbol_index in dropped - still_called:
        at = headers[symtab_index][4] + symbol_index * 16 + 12
        data[at] = 0x20 | data[at] & 0xF
    if stubs:  # the stubs' names, as undefined symbols appended to the symbol table and its strings
        while len(data) % 4:
            data.append(0)
        symtab, strtab = headers[stub_symtab], headers[headers[stub_symtab][6]]
        symbols, strings = bytes(data[symtab[4]:symtab[4] + symtab[5]]), bytes(data[strtab[4]:strtab[4] + strtab[5]])
        for stub in stubs:
            symbols += struct.pack("<IIIBBH", len(strings), 0, 0, 0x10, 0, 0)  # GLOBAL, NOTYPE, UND
            strings += stub.encode() + b"\0"
        for header, blob in ((stub_symtab, symbols), (headers[stub_symtab][6], strings)):
            struct.pack_into("<II", data, shoff + header * entsize + 0x10, len(data), len(blob))
            data += blob
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


def structor(name):
    """The complete-object name for a base-object structor (C2 -> C1, D2 -> D1): retail has one symbol
    per address and calls both through it, while armcc may emit and call only the base-object variant."""
    return re.sub(r"(?<=[0-9A-Za-z])([CD])2E", r"\g<1>1E", name, count=1) if name.startswith("_ZN") else name


def needs_carving(obj, unit):
    """True when the object holds more than the unit's function (a destructor's deleting variant next
    to it, a COMDAT group such as the vtable), holds it outside `.text` (an `i.` section for a
    constructor defined in its class) or under its base-object name only, or calls a base-object
    structor (C2/D2), which retail names by its complete-object symbol."""
    sections, symbols = read_elf(Path(obj).read_bytes())
    places = {(s["shndx"], s["value"] & ~1) for s in symbols if s["type"] == 2 and s["bind"] in (1, 2) and s["shndx"]}
    own = next((s for s in symbols if s["name"] == unit["function"] and s["shndx"] and s["type"] == 2), None)
    return (len(places) > 1 or any(s["type"] == 17 for s in sections)  # SHT_GROUP
            or own is None or sections[own["shndx"]]["name"] != ".text"
            or any(not s["shndx"] and structor(s["name"]) != s["name"] for s in symbols))


def retail_word_name(unit, offset):
    """(symbol, addend) of the R_ARM_ABS32 relocation at `offset` of the unit's retail target object,
    or None when the target has none there."""
    import struct
    path = ROOT / unit["target"]
    if not path.exists():
        return None
    data = path.read_bytes()
    sections, symbols = read_elf(data)
    text = next((i for i, s in enumerate(sections) if s["name"] == ".text"), None)
    for rel in sections:
        if rel["type"] != 9 or rel["info"] != text:
            continue
        for at in range(rel["offset"], rel["offset"] + rel["size"], 8):
            where, info = struct.unpack_from("<II", data, at)
            if where == offset and info & 0xFF == 2 and symbols[info >> 8]["name"]:
                body = sections[text]
                return symbols[info >> 8]["name"], struct.unpack_from("<I", data, body["offset"] + offset)[0]
    return None


def carve(obj, unit):
    """Rewrite an object compiled with --split_sections to hold only the unit's function, as the one
    function per unit the retail objects are: its own section becomes `.text`; what it references in
    the dropped sections (the vtable, the other variants) becomes an undefined symbol, resolved like any
    other at link time; a pool word into the object's own data names the global it points into.
    Returns False (object untouched) when it references a dropped section by section symbol that no
    name resolves."""
    import struct
    sys.path.insert(0, str(ROOT.parent / "tools"))
    import split
    data = Path(obj).read_bytes()
    sections, symbols = read_elf(data)
    own = next((s for s in symbols if structor(s["name"]) == unit["function"] and s["shndx"] and s["type"] == 2), None)
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
            elif target["type"] == 3 and info & 0xFF == 2 and sections[target["shndx"]]["name"].startswith((".data", ".bss", ".constdata")):
                # A pool word into the object's own data (a global the unit defines): the named object
                # it falls in, plus the rest of the offset, resolved by name like any other global.
                word = struct.unpack_from("<I", code, offset)[0]
                owner = max((s for s in symbols if s["shndx"] == target["shndx"] and s["type"] == 1 and s["name"]
                             and s["value"] <= word), key=lambda s: s["value"], default=None)
                if owner is not None and owner["name"].startswith("<"):
                    # armcc's anonymous constant (`<DataN>`: a pointer-to-member table, a literal it
                    # copies from): it has no name of its own, so it takes the one retail's object gives
                    # the word at the same place, which is where relink resolves it.
                    owner = retail_word_name(unit, offset)
                    if owner is None:
                        return False
                    relocs.append((offset, owner[0], 2))
                    struct.pack_into("<I", code, offset, owner[1])
                    continue
                if owner is None:
                    return False
                struct.pack_into("<I", code, offset, word - owner["value"])
                relocs.append((offset, owner["name"], 2))
            elif not target["name"] or target["type"] == 3:  # a section symbol: nothing to resolve it by
                return False
            else:
                if target["bind"] == 2 and not target["shndx"]:
                    weak.add(target["name"])
                relocs.append((offset, structor(target["name"]), info & 0xFF))
    marks = sorted((s["value"], s["name"]) for s in symbols if s["shndx"] == index and s["name"] in ("$a", "$t", "$d"))
    pools = [(value, next((v for v, _n in marks if v > value), len(code))) for value, name in marks if name == "$d"]
    attributes = next((bytes(data[s["offset"]:s["offset"] + s["size"]]) for s in sections if s["type"] == 0x70000003), b"")
    # armcc's own symbol size is the truth, except for an alias (D1 of D2), which has none.
    Path(obj).write_bytes(split.build_object(unit["function"], bytes(code), bool(unit.get("thumb")), relocs, pools,
                                             attributes, local_symbols, own["size"], weak, symbol_size=own["size"] or None))
    return True


def name_static_initialiser(obj, unit):
    """A unit that is a file's static initialiser: its source defines the file's global objects, and
    armcc emits the function constructing them as the local `__sti___<n>_<file>` in `.text`. That
    symbol takes the unit's name (in place: the generated name, which embeds the file's, is longer).
    Returns whether it did."""
    data = bytearray(Path(obj).read_bytes())
    sections, symbols = read_elf(data)
    if any(s["name"] == unit["function"] for s in symbols):
        return False
    initialisers = [s for s in symbols if s["name"].startswith("__sti__") and s["type"] == 2 and s["shndx"]
                    and sections[s["shndx"]]["name"] == ".text"]
    new = unit["function"].encode()
    if len(initialisers) != 1 or len(new) > len(initialisers[0]["name"]):
        return False
    strtab = sections[next(s for s in sections if s["type"] == 2)["link"]]
    old = initialisers[0]["name"].encode()
    at = data.index(old + b"\0", strtab["offset"], strtab["offset"] + strtab["size"])
    data[at:at + len(old)] = new + b"\0" * (len(old) - len(new))
    Path(obj).write_bytes(data)
    return True


_ALIASES = None


def symbol_aliases():
    """{alias: the address's own name} for the `type:alias` lines of config/symbols.txt."""
    global _ALIASES
    with _CACHE_LOCK:
        if _ALIASES is None:
            sys.path.insert(0, str(ROOT.parent / "tools"))
            import split
            path = ROOT / "config" / "symbols.txt"
            own = {**{address: name for address, (name, _size, _thumb) in split.read_symbols(path).items()},
                   **split.read_objects(path)}
            _ALIASES = {alias: own[address] for alias, address in split.read_aliases(path).items() if address in own}
    return _ALIASES


def link_aliases(obj):
    """An undefined reference to a `type:alias` name of config/symbols.txt (a second name the linker
    gives an address that has its own: `__init_array_end` of an empty array is `__init_array_start`)
    is pointed at the address's own name, the one retail's relocation carries."""
    import struct
    if not symbol_aliases():
        return
    data = bytearray(Path(obj).read_bytes())
    sections, _ = read_elf(data)
    changed = False
    for table in (s for s in sections if s["type"] == 2):
        strtab = sections[table["link"]]
        names = bytes(data[strtab["offset"]:strtab["offset"] + strtab["size"]])
        for at in range(table["offset"], table["offset"] + table["size"], 16):
            name_at, = struct.unpack_from("<I", data, at)
            shndx, = struct.unpack_from("<H", data, at + 14)
            name = names[name_at:names.index(b"\0", name_at)].decode()
            if shndx or name not in _ALIASES:
                continue
            target = _ALIASES[name].encode()
            found = names.find(b"\0" + target + b"\0")
            if found >= 0:
                struct.pack_into("<I", data, at, found + 1)
            elif len(target) <= len(name):
                data[strtab["offset"] + name_at:strtab["offset"] + name_at + len(name)] = target.ljust(len(name), b"\0")
            else:
                raise SystemExit(f"{obj}: cannot point alias {name} at {_ALIASES[name]}")
            changed = True
    if changed:
        Path(obj).write_bytes(data)


def run_compiler(cmd):
    """Run armcc. Under wibo, armcc crashes on a few units (wibo 1.0.3 to 1.2.0 segfault in armcc's heap
    teardown, e.g. smt4 FUN_002aa790): when it dies on a signal and Wine is installed, that unit is
    compiled again under Wine."""
    done = subprocess.run(cmd, capture_output=True, text=True, encoding="utf-8", errors="replace", cwd=ROOT)
    crashed = done.returncode < 0 or done.returncode >= 128
    if crashed and cmd and "wibo" in Path(cmd[0]).name and shutil.which("wine"):
        done = subprocess.run(["wine"] + cmd[1:], capture_output=True, text=True, encoding="utf-8", errors="replace", cwd=ROOT,
                              env=dict(os.environ, WINEDEBUG="-all"))
    return done


def finish_object(compiler, unit, source, obj):
    """What happens to a freshly compiled unit object: a destructor's or a file's extra functions and
    vtable are cut away (recompiling with --split_sections), then armlink's NOPs are applied.
    Returns whether the object needed carving (which reads tools/split.py and the retail target)."""
    carving = not name_static_initialiser(obj, unit) and needs_carving(obj, unit)
    if carving:
        split_command = command(compiler, unit, source, obj)
        split_command.insert(split_command.index("-o"), "--split_sections")
        done = run_compiler(split_command)
        if done.returncode == 0:
            carve(obj, unit)
    link_aliases(obj)
    link_weak_calls(obj, unit)
    return carving


DEPS_VERSION = 1
# Walked once per build: every file a unit can read from them is stat'ed from the directory listing.
WATCHED = (ROOT / "src", ROOT / "include", SHARED_INCLUDE)
INCLUDE_LINE = re.compile(rb'^[ \t]*#[ \t]*include[ \t]*(?:[<"]([^>"\r\n]+)[>"]|[^\s<"])', re.M)


def dep_key(path):
    """A file as build/deps.json names it: relative to this directory where possible, '/'-separated,
    in the case the file system compares."""
    path = str(path)
    if not os.path.isabs(path) and "\\" not in path and "//" not in path and "/." not in path and not path.startswith("."):
        return path.lower() if os.name == "nt" else path  # already relative and clean: what normcase gives
    path = os.path.normcase(os.path.normpath(os.path.join(ROOT, path)))
    try:
        path = os.path.relpath(path, os.path.normcase(str(ROOT)))
    except ValueError:  # another drive
        pass
    return path.replace("\\", "/")


class Deps:
    """build/deps.json: what each unit's object was built from, so a build compiles only the units
    whose inputs changed. A unit is up to date when its object is the one recorded (same mtime and
    size) and one digest still agrees: the files the compile read (the source, every header armcc's
    `--depend` listed, multifile partners' sources, and for a carved unit tools/split.py and its retail
    target) by mtime and size; the unit's command; its project.json entry and its partners'; the
    compiler; this script; and, for every symbol the object names, what the armlink steps look up for
    it (its address in symbols.txt, an inlined body from the target objects or config/inlined.txt, a
    veneer stub, an alias). A file that appears under src/ or the include directories with the name of
    a file a unit read may shadow it: that unit is compiled again. Anything not recorded is compiled."""

    def __init__(self, compiler):
        self.started = time.time_ns()  # a file modified since may have changed under a compile
        self.stats, self.listing = {}, set()
        for top in WATCHED:
            self.walk(top, self.listing)
        self.walk(BUILD / "obj", None)
        self.compiler = compiler
        exe = Path(compiler) if Path(compiler).exists() else Path(shutil.which(compiler) or compiler)
        stat = exe.stat() if exe.exists() else None
        # The compiler is armcc.exe and its own headers (whose `#include _RWSTD_CSTDLIB` no scan follows).
        self.system = dep_key(Path(compiler).resolve().parent.parent / "include")
        headers = set()
        self.walk(ROOT / self.system, headers)
        runner = [(path, self.stat(dep_key(path))) for path in launcher()]  # wibo
        self.static = json.dumps([DEPS_VERSION, hashlib.sha1(Path(__file__).read_bytes()).hexdigest(), str(exe),
                                  stat and [stat.st_mtime_ns, stat.st_size], runner, COMPILER,
                                  sorted((key, self.stats[key]) for key in headers)])
        self.lines, self.scanned = {}, {}
        self.lock = threading.Lock()
        self.mine = {}  # object -> record (None: compiled, nothing recordable) for the units built here
        self.records, listing = self.load()
        self.records = self.unshadowed(self.records, self.listing - listing)

    def walk(self, top, listing):
        todo = [(str(top), dep_key(top))]
        while todo:
            directory, prefix = todo.pop()
            try:
                entries = list(os.scandir(directory))
            except OSError:
                continue
            for entry in entries:
                key = f"{prefix}/{os.path.normcase(entry.name)}"
                if entry.is_dir():
                    todo.append((entry.path, key))
                elif entry.is_file():
                    stat = entry.stat()
                    self.stats[key] = (stat.st_mtime_ns, stat.st_size)
                    if listing is not None:
                        listing.add(key)

    @staticmethod
    def unshadowed(records, new):
        """The records that read no file named like one of the `new` files."""
        new = {key.rsplit("/", 1)[-1] for key in new}
        if not new:
            return records
        return {obj: record for obj, record in records.items() if not any(key.rsplit("/", 1)[-1] in new for key in record["f"])}

    def stat(self, key):
        """(mtime_ns, size) of a file as this build first saw it, None when it does not exist."""
        if key not in self.stats:
            try:
                stat = os.stat(ROOT / key)
                self.stats[key] = (stat.st_mtime_ns, stat.st_size)
            except OSError:
                self.stats[key] = None
        return self.stats[key]

    @staticmethod
    def load():
        """({object: {d, f, n, o}}, listing) from build/deps.json, empty when absent or another version."""
        try:
            data = json.loads((BUILD / "deps.json").read_text(encoding="utf-8"))
            if data.get("version") != DEPS_VERSION:
                raise ValueError
            files, names = data["files"], data["names"]
            records = {obj: dict(d=r["d"], f=[files[i] for i in r["f"]], n=[names[i] for i in r["n"]], o=r["o"])
                       for obj, r in data["units"].items()}
            return records, set(data["listing"])
        except (OSError, ValueError, KeyError, IndexError, TypeError):
            return {}, set()

    def digest(self, unit, files, names):
        partners = [UNITS_BY_FUNCTION.get(name) for name in unit.get("multifile", ())]
        cmd = command(self.compiler, unit, ROOT / unit["source"], ROOT / unit["object"])
        h = hashlib.sha1(json.dumps([self.static, unit, partners, cmd], sort_keys=True).encode())
        for key in files:
            line = self.lines.get(key)
            if line is None:
                line = self.lines[key] = f"{key}\0{self.stat(key)}\n".encode()
            h.update(line)
        for name in names:
            line = self.lines.get("\0" + name)
            if line is None:
                line = self.lines["\0" + name] = (f"{name}\0{symbol_addresses().get(name)}\0{inlined_bodies().get(name)}\0"
                                           f"{veneer_stubs().get(name)}\0{symbol_aliases().get(name)}\n").encode()
            h.update(line)
        return h.hexdigest()

    def fresh(self, unit):
        record = self.records.get(unit["object"])
        return (record is not None and self.stats.get(dep_key(unit["object"])) == tuple(record["o"])
                and self.digest(unit, record["f"], record["n"]) == record["d"])

    def depend_file(self, path):
        """The files armcc's `--depend` output lists, or None when it is missing or a path in it does
        not resolve to a file here (wibo or Wine may name them their own way)."""
        try:
            text = path.read_text(encoding="utf-8", errors="surrogateescape")
        except OSError:
            return None
        keys = []
        for line in text.splitlines():
            if not line.strip():
                continue
            match = re.fullmatch(r'\s*"(.*)":\s*"(.*)"\s*', line)
            if not match:
                return None
            name = match[2].replace("\\", "/")
            if os.name != "nt" and re.match(r"^[A-Za-z]:/", name):
                name = name[2:] if name[0] in "zZ" else name  # Wine's Z: is the host's root
            key = dep_key(name)
            if self.stat(key) is None:
                return None
            keys.append(key)
        return keys or None

    def includes(self, path):
        if path not in self.scanned:
            try:
                data = (ROOT / path).read_bytes()
            except OSError:
                data = b""
            self.scanned[path] = [m[1] and m[1].decode("utf-8", "surrogateescape").strip().replace("\\", "/")
                                  for m in INCLUDE_LINE.finditer(data)]
        return self.scanned[path]

    def scan(self, sources):
        """Every file the sources can include, for a compile whose `--depend` output is unusable: each
        `#include` resolved in the including file's directory, the -I directories and the compiler's
        own, keeping every candidate that exists (a superset of armcc's choice) and, when none does,
        the first as a file that does not exist yet. None when a source or header includes a macro.
        The compiler's own headers are part of the compiler: not followed."""
        search = [ROOT / "include", SHARED_INCLUDE, ROOT / self.system]
        seen, todo = set(), [dep_key(source) for source in sources]
        while todo:
            key = todo.pop()
            if key in seen:
                continue
            seen.add(key)
            if self.stat(key) is None or key.startswith(self.system + "/"):
                continue
            here = (ROOT / key).parent
            for name in self.includes(key):
                if name is None:
                    return None
                candidates = [dep_key(name)] if os.path.isabs(name) else [dep_key(d / name) for d in [here] + search]
                existing = [c for c in candidates if self.stat(c) is not None]
                todo += existing or candidates[:1]
        return sorted(seen)

    def record(self, unit, depend, names, carving):
        """Record a unit compiled in this build; None for `depend` when its object is gone."""
        obj = unit["object"]
        record, files = None, None
        if depend is not None:
            sources = [ROOT / unit["source"]] + [ROOT / UNITS_BY_FUNCTION[name]["source"] for name in unit.get("multifile", ())
                                                 if name in UNITS_BY_FUNCTION]
            files = self.depend_file(depend)
            files = files if files is not None else self.scan(sources)
        if files is not None:
            files = set(files) | {dep_key(source) for source in sources}
            if carving:
                files |= {dep_key(ROOT.parent / "tools" / "split.py"), dep_key(unit["target"])}
            files, names = sorted(files), sorted(names)
            stat = (ROOT / obj).stat()
            # A file changed since this build began may have changed during the compile: not recorded.
            if all(s is None or s[0] < self.started for s in map(self.stat, files)):
                record = dict(d=self.digest(unit, files, names), f=files, n=names, o=[stat.st_mtime_ns, stat.st_size])
        with self.lock:
            self.mine[obj] = record

    def save(self):
        """Merge this build's records into build/deps.json as it is now (another build may have
        written it since) and replace it. Records another build wrote that a file new to this build's
        listing may shadow are dropped."""
        records, listing = self.load()
        if not self.mine and listing == self.listing:
            return
        objects = {unit["object"] for unit in PROJECT["units"]}
        records = self.unshadowed({obj: record for obj, record in records.items() if obj in objects and obj not in self.mine},
                                  self.listing - listing)
        records.update((obj, record) for obj, record in self.mine.items() if record is not None)
        files, names = {}, {}
        units = {obj: dict(d=r["d"], f=[files.setdefault(k, len(files)) for k in r["f"]],
                           n=[names.setdefault(n, len(names)) for n in r["n"]], o=r["o"]) for obj, r in sorted(records.items())}
        text = json.dumps(dict(version=DEPS_VERSION, files=list(files), names=list(names), listing=sorted(self.listing),
                               units=units), separators=(",", ":"))
        BUILD.mkdir(exist_ok=True)
        temporary = BUILD / f"deps.json.{os.getpid()}.tmp"
        temporary.write_text(text, encoding="utf-8", newline="\n")
        for attempt in range(20):  # Windows refuses to replace a file another build is reading
            try:
                os.replace(temporary, BUILD / "deps.json")
                return
            except PermissionError:
                time.sleep(0.1)
        temporary.unlink()  # the old records stay: each still checks its object's mtime and size


def object_names(obj):
    """The symbol names a compiled object defines or references."""
    _sections, symbols = read_elf(Path(obj).read_bytes())
    return {s["name"] for s in symbols if s["name"] and s["type"] != 3 and not s["name"].startswith("$")}


def compile_unit(compiler, unit, deps):
    source = ROOT / unit["source"]
    obj = ROOT / unit["object"]
    obj.parent.mkdir(parents=True, exist_ok=True)
    cmd = command(compiler, unit, source, obj)
    depend = obj.with_suffix(".d")
    if FAMILY == "armcc":  # the files the compile reads (only the object's .comment records the option)
        at = cmd.index("-o")
        cmd[at:at] = [f"--depend={depend}", "--depend_format=unix_quoted"]
    try:
        done = run_compiler(cmd)
        if done.returncode == 0:
            names = object_names(obj)
            carving = finish_object(compiler, unit, source, obj)
            deps.record(unit, depend, names, carving)
            return unit, "ok", ""
    finally:
        if depend.exists():
            depend.unlink()
    deps.record(unit, None, (), False)
    if obj.exists():
        obj.unlink()
    output = done.stderr + done.stdout
    first = next((line for line in output.splitlines() if "error" in line.lower()), output.strip()[:200])
    return unit, "failed", first.strip()


def units_present():
    return [unit for unit in PROJECT["units"] if (ROOT / unit["source"]).exists()]


def build(args):
    compiler = find_compiler(args)
    started = time.time()
    deps = Deps(compiler)
    units = [unit for unit in PROJECT["units"] if deps.stat(dep_key(unit["source"])) is not None]  # units_present(), from the walk
    wanted = [a for a in args.paths]
    if wanted:
        by_object = {unit["object"]: unit for unit in units}
        relative = (Path(os.path.relpath(os.path.abspath(w), ROOT)).as_posix() for w in wanted)
        units = [by_object[w] for w in relative if w in by_object]
    if args.only:
        units = [unit for unit in units if args.only in unit["source"]]
    if not units:
        raise SystemExit("no units to build (src/ is empty or nothing matched)")
    stale = units if args.force else [unit for unit in units if not deps.fresh(unit)]
    results = {"ok": 0, "cached": len(units) - len(stale), "failed": 0}
    failures = []
    try:
        with concurrent.futures.ThreadPoolExecutor(max_workers=args.jobs) as pool:
            futures = [pool.submit(compile_unit, compiler, unit, deps) for unit in stale]
            for index, future in enumerate(concurrent.futures.as_completed(futures), 1):
                unit, status, message = future.result()
                results[status] += 1
                if status == "failed":
                    failures.append({"function": unit["function"], "source": unit["source"], "first_error": message})
                if len(stale) > 200 and index % 1000 == 0:
                    print(f"  {index}/{len(stale)}", flush=True)
    finally:
        deps.save()
    compiled = results["ok"] + results["cached"]
    report = {
        "compiler": compiler_version(compiler),
        "pinned": COMPILER["tool"],
        "family": FAMILY,
        "target": COMPILER.get("target", COMPILER.get("arch")),
        "units": len(units),
        "compiled": compiled,
        "rebuilt": results["ok"] + results["failed"],
        "failed": results["failed"],
        "seconds": round(time.time() - started, 1),
        "failures": sorted(failures, key=lambda f: f["source"]),
    }
    if not args.paths:
        BUILD.mkdir(exist_ok=True)
        (BUILD / "compile_report.json").write_text(json.dumps(report, indent=2) + "\n")
    print(
        f"compiled {compiled}/{len(units)} units ({results['ok'] + results['failed']} rebuilt) with {report['compiler']} "
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
    status = subprocess.call([sys.executable, str(ROOT.parent / "tools" / "download_tool.py"), "--project", str(ROOT), *ids])
    # tools/relink.py links with GNU ld; a host the pinned binutils do not cover can bring its own.
    if "binutils-arm-none-eabi" in MANIFEST and (ROOT.parent / "tools" / "relink.py").exists():
        if subprocess.call([sys.executable, str(ROOT.parent / "tools" / "download_tool.py"), "--project", str(ROOT), "binutils-arm-none-eabi"]) != 0:
            print("note: tools/relink.py needs arm-none-eabi binutils: put them on PATH or pass --ld/--objcopy", file=sys.stderr)
    return status


def split(arguments):
    """tools/split.py: the retail target objects, from the dump and config/ only."""
    script = ROOT.parent / "tools" / "split.py"
    if not script.exists():
        raise SystemExit("this project has no tools/split.py (only Nintendo 3DS projects can rebuild orig/target without romwright)")
    return subprocess.call([sys.executable, str(script), "--project", str(ROOT), *arguments])


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
            + ("run `python3 build.py split` (it needs your dump in orig/)" if (ROOT.parent / "tools" / "split.py").exists()
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

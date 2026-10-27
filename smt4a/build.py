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
import re
import shlex
import shutil
import subprocess
import sys
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parent
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
    # A unit may also name, in "multifile", functions the original compiled in the same armcc
    # --multifile run: armcc then knows which registers those callees really clobber and keeps
    # values in caller-saved registers across the calls, without inlining them across files
    # (--no_autoinline). Their unit sources are compiled alongside; carve keeps the unit's own
    # function. Needs evidence like "cflags": IDENTICAL with the list, not without.
    together = [ROOT / UNITS_BY_FUNCTION[name]["source"] for name in unit.get("multifile", ()) if name in UNITS_BY_FUNCTION]
    if FAMILY == "armcc":
        system = Path(compiler).resolve().parent.parent / "include"
        includes = ["-J", str(system)] if system.is_dir() else []
        # armcc --multifile checks declarations across the files it compiles together (#1171, which
        # cannot be downgraded): a unit's local callee declarations must agree with the callees' sources.
        multifile = ["--multifile", "--no_autoinline", "--split_sections"] if together else []
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


_SYMBOL_ADDRESSES = None


def symbol_addresses():
    """config/symbols.txt as {name: address} (Thumb bit clear)."""
    global _SYMBOL_ADDRESSES
    if _SYMBOL_ADDRESSES is None:
        import re
        text = (ROOT / "config" / "symbols.txt").read_text(encoding="utf-8")
        _SYMBOL_ADDRESSES = {m[1]: int(m[2], 16) & ~1 for m in re.finditer(r"^(\S+) = (?:\S+:)?0x([0-9a-fA-F]+);", text, re.M)}
    return _SYMBOL_ADDRESSES


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
    if _INLINED is None:
        import struct
        _INLINED = {}
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
                    _INLINED[unit["function"]] = 0xE1A00000
                continue
            word, ret = struct.unpack_from("<II", data, body["offset"])
            svc = word >> 24 & 0xF == 0xF
            if (ret == 0xE12FFF1E and word >> 28 == 0xE and word not in (0xE1A00000, 0xE320F000)
                    and word >> 25 & 7 != 5 and (svc or 15 not in (word >> 16 & 0xF, word >> 12 & 0xF))):
                _INLINED[unit["function"]] = word
        listed = ROOT / "config" / "inlined.txt"
        if listed.exists():
            for line in listed.read_text(encoding="utf-8").splitlines():
                match = re.match(r"^(\S+) = 0x([0-9a-fA-F]{8});", line)
                if match:
                    _INLINED[match[1]] = int(match[2], 16)
    return _INLINED


_VENEERS = None


def veneer_stubs():
    """{Thumb function: the armlink stub before it} for the stubs retail has: an 8-byte ARM function
    `add ip, pc, #1; bx ip` (checked in its retail target object) placed right before a Thumb one.
    armlink sends every ARM `b` and conditional `bl` to a Thumb function through it (they cannot
    change the instruction set), so retail's relocation names the stub."""
    global _VENEERS
    if _VENEERS is None:
        import struct
        by_address = {int(unit["address"], 16): unit for unit in PROJECT["units"]}
        _VENEERS = {}
        for unit in PROJECT["units"]:
            target = ROOT / unit["target"] if "target" in unit else None
            thumb = by_address.get(int(unit["address"], 16) + 8)
            if unit.get("thumb") or unit["size"] != 8 or target is None or not target.exists() or not (thumb and thumb.get("thumb")):
                continue
            data = target.read_bytes()
            body = next((s for s in read_elf(data)[0] if s["name"] == ".text"), None)
            if body and body["size"] >= 8 and struct.unpack_from("<II", data, body["offset"]) == (0xE28FC001, 0xE12FFF1C):
                _VENEERS[thumb["function"]] = unit["function"]
    return _VENEERS


def link_weak_calls(obj, unit=None):
    """Do what armlink did to the retail code, which per-function objects never went through:
    - a call to a weak function nothing defines (the release build left the debug hooks out)
      becomes MOV r0, r0 in ARM code and two MOV r8, r8 in Thumb;
    - with `unit` (for its address), a branch to the very next instruction, a tail call into the
      function placed right after this one, becomes the same NOP (armlink's --branchnop default);
    - an ARM `bl` to a function of one instruction and `bx lr` becomes that instruction
      (armlink's --inline, see `inlined_bodies`).
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
    retail's pool holds `entry`."""
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
            if kind == 28 and symbol in inlined_bodies() and struct.unpack_from("<I", data, code + offset)[0] >> 24 == 0xEB:
                struct.pack_into("<I", data, code + offset, inlined_bodies()[symbol])
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
    sys.path.insert(0, str(ROOT / "tools"))
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


def link_aliases(obj):
    """An undefined reference to a `type:alias` name of config/symbols.txt (a second name the linker
    gives an address that has its own: `__init_array_end` of an empty array is `__init_array_start`)
    is pointed at the address's own name, the one retail's relocation carries."""
    import struct
    global _ALIASES
    if _ALIASES is None:
        sys.path.insert(0, str(ROOT / "tools"))
        import split
        path = ROOT / "config" / "symbols.txt"
        own = {**{address: name for address, (name, _size, _thumb) in split.read_symbols(path).items()},
               **split.read_objects(path)}
        _ALIASES = {alias: own[address] for alias, address in split.read_aliases(path).items() if address in own}
    if not _ALIASES:
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


def finish_object(compiler, unit, source, obj):
    """What happens to a freshly compiled unit object: a destructor's or a file's extra functions and
    vtable are cut away (recompiling with --split_sections), then armlink's NOPs are applied."""
    if not name_static_initialiser(obj, unit) and needs_carving(obj, unit):
        split_command = command(compiler, unit, source, obj)
        split_command.insert(split_command.index("-o"), "--split_sections")
        done = subprocess.run(split_command, capture_output=True, text=True, cwd=ROOT)
        if done.returncode == 0:
            carve(obj, unit)
    link_aliases(obj)
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

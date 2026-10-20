#!/usr/bin/env python3
"""Relink the retail `.code` from the project's objects and check it byte for byte.

Functions are placed at their retail addresses by a generated GNU ld script.
With `--matched`, every function objdiff reports at 100% links from
`build/obj/` (armcc's object, relocated by ld), which proves the decompiled
functions inside the whole image. With `--full`, every other function links
from its retail target object (`orig/target/**.o`: its bytes with calls, tail
calls and literal-pool addresses as relocations), which proves those objects
relocate back to retail; otherwise they are retail bytes. What no object
covers (padding, strings between functions, functions the decompiler refused,
.rodata, .data) is retail bytes, except a matched function's own constants (`.constdata`):
they sit at the address its retail pool words name, once the bytes there equal the
object's. Symbols the objects reference and nothing
defines (`DAT_<addr>`, functions linked as bytes) are defined at their
addresses. The linked image is compared with the decompressed `.code` of the
dump (`image.orig` in config/project.json; tools/n3ds.py reads it).

    python3 tools/relink.py [--matched] [--full] [--exclude FUN_a,FUN_b] [--module ID] [--ld PATH] [--objcopy PATH]

`--matched` reads build/report.json (`python3 build.py report`). The objects it
relinks come from `python3 build.py split` (orig/target) and `python3 build.py`
(build/obj). Every function objdiff scores 100% that does not link from its
build/obj object is listed with its reason, and the run reports how many were
proven (linked from build/obj) of how many objdiff claimed. A 100% function whose
object is missing is not proven: the run exits 1 without a MATCH verdict unless
`--exclude` names it.

GNU ld/objcopy come from build/tools/binutils-arm-none-eabi/*/bin (`python3
build.py fetch` installs Arm GNU Toolchain 13.3.rel1's as, ld, nm, objcopy,
objdump and readelf on Windows; elsewhere it extracts the whole toolchain), then
PATH (any arm-none-eabi binutils).

Standard library only.
"""
import argparse
import bisect
import hashlib
import json
import re
import shutil
import struct
import subprocess
import sys
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(Path(__file__).resolve().parent))
import n3ds  # noqa: E402
import split  # noqa: E402

OUT = ROOT / "build" / "relink"


def find_tool(explicit, name):
    candidates = [explicit]
    candidates += sorted(str(p) for p in (ROOT / "build" / "tools" / "binutils-arm-none-eabi").glob(f"*/bin/arm-none-eabi-{name}.exe"))
    candidates += sorted(str(p) for p in (ROOT / "build" / "tools" / "binutils-arm-none-eabi").glob(f"*/bin/arm-none-eabi-{name}"))
    candidates.append(shutil.which(f"arm-none-eabi-{name}"))
    for candidate in candidates:
        if candidate and Path(candidate).exists():
            return candidate
    raise SystemExit(f"arm-none-eabi-{name} not found: run `python3 build.py fetch`, put arm-none-eabi binutils on PATH, or pass --{name} PATH")


def elf_sections(path):
    """{name: (size, flags)} of an ELF32 little-endian relocatable object, without .ARM.exidx
    (SHT_ARM_EXIDX): the unwind entry armcc's C++ gives each function, which retail links none of."""
    data = Path(path).read_bytes()
    shoff, = struct.unpack_from("<I", data, 0x20)
    shentsize, shnum, shstrndx = struct.unpack_from("<HHH", data, 0x2E)
    headers = [struct.unpack_from("<IIIIIIIIII", data, shoff + i * shentsize) for i in range(shnum)]
    names = headers[shstrndx]
    name = lambda at: data[names[4] + at:data.index(b"\0", names[4] + at)].decode()
    return {name(h[0]): (h[5], h[2]) for h in headers if h[1] != 0x70000001}


def text_section(path):
    """(`.text` bytes, [(offset, type, symbol name)] of its relocations) of an ELF32 ARM object.
    A section symbol is named after its section (`.constdata`)."""
    data = Path(path).read_bytes()
    shoff, = struct.unpack_from("<I", data, 0x20)
    shentsize, shnum, shstrndx = struct.unpack_from("<HHH", data, 0x2E)
    headers = [struct.unpack_from("<IIIIIIIIII", data, shoff + i * shentsize) for i in range(shnum)]
    cstr = lambda at: data[at:data.index(b"\0", at)].decode()
    section_name = lambda h: cstr(headers[shstrndx][4] + h[0])
    text_index = next(i for i, h in enumerate(headers) if section_name(h) == ".text")
    text = headers[text_index]
    relocations = []
    for header in headers:
        if header[1] != 9 or header[7] != text_index:  # SHT_REL applying to .text
            continue
        symtab = headers[header[6]]
        strtab = headers[symtab[6]]
        for at in range(header[4], header[4] + header[5], 8):
            offset, info = struct.unpack_from("<II", data, at)
            name_at, _value, _size, symbol_info, _other, section = struct.unpack_from("<IIIBBH", data, symtab[4] + (info >> 8) * 16)
            name = cstr(strtab[4] + name_at)
            if symbol_info & 0xF == 3 and 0 < section < len(headers):  # STT_SECTION
                name = section_name(headers[section])
            relocations.append((offset, info & 0xFF, name))
    return data[text[4]:text[4] + text[5]], sorted(relocations)


def data_references(path):
    """({section: (payload, alignment, constant)} for the allocated sections of an ELF32 ARM
    object besides `.text`, {symbol name: (section, value)} for what its `.text` relocations
    point into them). `constant` is False for a writable, executable or zero-filled section
    and for one that carries relocations of its own; such a section cannot be placed by
    comparing its bytes with the image."""
    data = Path(path).read_bytes()
    shoff, = struct.unpack_from("<I", data, 0x20)
    shentsize, shnum, shstrndx = struct.unpack_from("<HHH", data, 0x2E)
    headers = [struct.unpack_from("<IIIIIIIIII", data, shoff + i * shentsize) for i in range(shnum)]
    cstr = lambda at: data[at:data.index(b"\0", at)].decode()
    section_name = lambda h: cstr(headers[shstrndx][4] + h[0])
    text_index = next(i for i, h in enumerate(headers) if section_name(h) == ".text")
    # SHF_ALLOC and not empty; not .ARM.exidx (SHT_ARM_EXIDX), the unwind entry armcc's C++ adds for the function
    held = {i for i, h in enumerate(headers) if i != text_index and h[2] & 0x2 and h[5] and h[1] != 0x70000001}
    sections = {}
    for i in held:
        h = headers[i]
        constant = h[1] == 1 and not h[2] & 0x5 and not any(r[1] == 9 and r[7] == i for r in headers)  # PROGBITS, not W/X
        sections[section_name(h)] = (data[h[4]:h[4] + h[5]] if h[1] != 8 else b"", h[8], constant)
    references = {}
    for header in headers:
        if header[1] != 9 or header[7] != text_index:
            continue
        symtab = headers[header[6]]
        strtab = headers[symtab[6]]
        for at in range(header[4], header[4] + header[5], 8):
            _offset, info = struct.unpack_from("<II", data, at)
            name_at, value, _size, symbol_info, _other, section = struct.unpack_from("<IIIBBH", data, symtab[4] + (info >> 8) * 16)
            if section in held:
                section_symbol = symbol_info & 0xF == 3
                references[section_name(headers[section]) if section_symbol else cstr(strtab[4] + name_at)] = (
                    section_name(headers[section]), 0 if section_symbol else value)
    return sections, references


R_ARM_ABS32 = 2


def code_difference(built, retail, resolve):
    """Why the compiled object `built` would not put the retail object's bytes in the
    image, or None. Relocated words are compared by what they resolve to (`resolve`:
    symbol name -> address, Thumb bit included, or None), so `DAT_x` and `s_..._x`, or a
    pool word one object writes as a constant and the other relocates, are the same."""
    (built_text, built_relocations), (retail_text, retail_relocations) = text_section(built), text_section(retail)
    if len(built_text) != len(retail_text):
        return "size"

    def values(text, relocations):
        out = {}
        for offset, kind, name in relocations:
            address = resolve(name)
            if address is None:
                out[offset] = ("unknown", name)
            elif kind == R_ARM_ABS32:
                out[offset] = ("word", (address + struct.unpack_from("<I", text, offset)[0]) & 0xFFFFFFFF)
            else:  # a branch: what it reaches (an ARM B to a Thumb address is a mismatch too)
                out[offset] = ("branch", kind, address)
        return out

    built_values, retail_values = values(built_text, built_relocations), values(retail_text, retail_relocations)
    relocated = set(built_values) | set(retail_values)
    for offset in relocated:
        word = lambda text: ("word", struct.unpack_from("<I", text, offset)[0])
        if built_values.get(offset, word(built_text)) != retail_values.get(offset, word(retail_text)):
            return "relocation"
    a, b = bytearray(built_text), bytearray(retail_text)
    for offset in relocated:
        a[offset:offset + 4] = b[offset:offset + 4] = b"\0\0\0\0"
    return "bytes" if a != b else None


def place_data(built, retail, resolve, code, base, window):
    """Where the image holds the constants the compiled object `built` defines (`.constdata`),
    or None when that cannot be shown. Each pool word of `built` that relocates to its own
    section is a word of `retail` that relocates to a symbol the image has an address for
    (`DAT_x`): that fixes the section's address, and the section is placed there only when
    its bytes equal the image's and it lies in `window` (the .rodata range) at its alignment.
    Returns ({section: (address, size)}, {symbol name: address}); the symbols resolve the
    object's references to the section for `code_difference`."""
    sections, references = data_references(built)
    if not sections or not all(constant for _payload, _alignment, constant in sections.values()):
        return None
    (built_text, built_relocations), (retail_text, retail_relocations) = text_section(built), text_section(retail)
    if len(built_text) != len(retail_text):
        return None
    retail_at = {offset: (kind, name) for offset, kind, name in retail_relocations}
    start = {}
    for offset, kind, name in built_relocations:
        if name not in references:
            continue
        section, value = references[name]
        if kind != R_ARM_ABS32 or retail_at.get(offset, (None, None))[0] != R_ARM_ABS32:
            return None
        address = resolve(retail_at[offset][1])
        if address is None:
            return None
        word = lambda text: struct.unpack_from("<I", text, offset)[0]
        begin = (address + word(retail_text) - word(built_text) - value) & 0xFFFFFFFF
        if start.setdefault(section, begin) != begin:
            return None
    if set(start) != set(sections):
        return None
    placed = {}
    for section, (payload, alignment, _constant) in sections.items():
        begin = start[section]
        if begin % max(alignment, 1) or not window[0] <= begin <= begin + len(payload) <= window[1]:
            return None
        if code[begin - base:begin - base + len(payload)] != payload:
            return None
        placed[section] = (begin, len(payload))
    spans = sorted(placed.values())
    if any(a[0] + a[1] > b[0] for a, b in zip(spans, spans[1:])):
        return None
    return placed, {name: start[section] + value for name, (section, value) in references.items()}


def blob_object(path, section, payload, executable, symbols=()):
    """A relocatable ELF32 ARM object holding `payload` as one section, and
    `symbols` (name, value, is_function) as absolute global symbols: a
    function's type and low bit are what ld reads to call ARM or Thumb."""
    strtab = bytearray(b"\0")
    entries = [bytes(16)]  # the null symbol
    for name, value, function in symbols:
        offset = len(strtab)
        strtab += name.encode() + b"\0"
        info = 0x10 | (2 if function else 1)  # STB_GLOBAL, STT_FUNC / STT_OBJECT
        entries.append(struct.pack("<IIIBBH", offset, value, 0, info, 0, 0xFFF1))  # SHN_ABS
    shstr = b"\0" + section.encode() + b"\0.symtab\0.strtab\0.shstrtab\0"
    at = {name: shstr.index(name.encode() + b"\0") for name in (section, ".symtab", ".strtab", ".shstrtab")}
    body = bytearray(52)
    text_off = len(body)
    body += payload
    while len(body) % 4:
        body.append(0)
    symtab_off = len(body)
    body += b"".join(entries)
    strtab_off = len(body)
    body += strtab
    shstr_off = len(body)
    body += shstr
    while len(body) % 4:
        body.append(0)
    shoff = len(body)
    flags = 0x6 if executable else 0x3  # AX / WA
    sections = [
        (0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
        (at[section], 1, flags, 0, text_off, len(payload), 0, 0, 1, 0),
        (at[".symtab"], 2, 0, 0, symtab_off, 16 * len(entries), 3, 1, 4, 16),
        (at[".strtab"], 3, 0, 0, strtab_off, len(strtab), 0, 0, 1, 0),
        (at[".shstrtab"], 3, 0, 0, shstr_off, len(shstr), 0, 0, 1, 0),
    ]
    for header in sections:
        body += struct.pack("<IIIIIIIIII", *header)
    body[0:52] = b"\x7fELF\x01\x01\x01" + bytes(9) + struct.pack(
        "<HHIIIIIHHHHHH", 1, 40, 1, 0, 0, shoff, 0x0500_0000, 52, 0, 0, 40, len(sections), len(sections) - 1
    )
    path.write_bytes(bytes(body))


def matched_functions():
    report = ROOT / "build" / "report.json"
    if not report.exists():
        raise SystemExit("--matched needs build/report.json: run `python build.py report` first")
    document = json.loads(report.read_text())
    return {
        function["name"]
        for unit in document["units"]
        for function in unit.get("functions", [])
        if function.get("fuzzy_match_percent", 0) >= 100
    }


def main():
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("--image", help="the dump (default: image.orig of config/project.json)")
    parser.add_argument("--module", help="module id of config/modules.json (default: the first)")
    parser.add_argument("--ld")
    parser.add_argument("--objcopy")
    parser.add_argument("--matched", action="store_true", help="link matched functions from build/obj/")
    parser.add_argument("--full", action="store_true",
                        help="link every function from its retail object (slow: proves the target objects relocate "
                             "back to retail); by default only matched functions link as objects and the rest as bytes")
    parser.add_argument("--exclude", default="", help="comma-separated functions to keep as retail bytes")
    args = parser.parse_args()
    ld, objcopy = find_tool(args.ld, "ld"), find_tool(args.objcopy, "objcopy")
    started = time.time()

    project = json.loads((ROOT / "config" / "project.json").read_text(encoding="utf-8"))
    modules = json.loads((ROOT / "config" / "modules.json").read_text(encoding="utf-8"))["modules"]
    module = next((m for m in modules if args.module in (None, m["id"])), None)
    if module is None:
        raise SystemExit(f"no module {args.module!r}: config/modules.json has {', '.join(m['id'] for m in modules)}")
    image = Path(args.image) if args.image else ROOT / project["image"]["orig"]
    if not image.exists():
        raise SystemExit(f"{image} not found: put your decrypted dump there (sha256 {project['image']['sha256']})")
    base, code, segments = n3ds.load_code(image, module["id"])
    functions = split.read_symbols(ROOT / module["symbols"])
    units = [unit for unit in project["units"] if unit.get("module", module["id"]) == module["id"]]
    names = {name: address for address, (name, _size, _thumb) in functions.items()}
    thumb = {address for address, (_name, _size, is_thumb) in functions.items() if is_thumb}
    # An ARM `B`/`BL` cannot change the instruction set: its target is ARM code,
    # whatever mode the analysis decoded that function in. Such a function's
    # object says Thumb (and the linker would bridge to it with a veneer), so it
    # links as its raw bytes under an ARM symbol instead. Likewise a Thumb `BL`
    # (not `BLX`) enters Thumb code: a function decoded as ARM that one reaches
    # starts in Thumb (armcc's `BX PC` interworking stub), so it links as its
    # raw bytes under a Thumb symbol, or ld would rewrite the call into a `BLX`.
    entered_by_arm, entered_by_thumb_bl = set(), set()
    arm = sorted((address, size) for address, (_name, size, is_thumb) in functions.items() if not is_thumb)
    for entry, size in arm:
        for at in range(entry, entry + size - 3, 4):
            word = struct.unpack_from("<I", code, at - base)[0]
            if word >> 28 != 0xF and word >> 25 & 7 == 5:
                entered_by_arm.add((at + 8 + (((word & 0xFFFFFF) ^ 0x800000) - 0x800000) * 4) & 0xFFFFFFFF)
    for entry, (_name, size, is_thumb) in functions.items():
        if not is_thumb:
            continue
        body = code[entry - base:entry - base + size]
        pools = split.literal_pools(entry, body, True)[0]
        at = 0
        while at + 4 <= len(body):
            first, second = struct.unpack_from("<HH", body, at)
            if any(start <= at < end for start, end in pools):
                at += 2
            elif first & 0xF800 == 0xF000 and second & 0xF800 == 0xF800:  # BL (Thumb-1 pair), not BLX
                offset = ((first & 0x7FF) << 12 | (second & 0x7FF) << 1)
                entered_by_thumb_bl.add((entry + at + 4 + offset - (0x800000 if offset & 0x400000 else 0)) & 0xFFFFFFFF)
                at += 4
            else:
                at += 2
    arm_entries = {address for address, _ in arm}
    thumb_entered_arm = arm_entries & entered_by_thumb_bl
    misread = (thumb & entered_by_arm) | thumb_entered_arm
    for name, address in names.items():
        if (address in thumb and address not in misread) or address in thumb_entered_arm:
            names[name] = address | 1
    exclude = set(filter(None, args.exclude.split(",")))
    claimed = matched_functions() if args.matched else set()
    # Functions of another module are that module's run to prove.
    claimed -= {unit["function"] for unit in project["units"] if unit.get("module", module["id"]) != module["id"]}
    excluded = sorted(claimed & exclude)
    matched = claimed - exclude

    # The function objects, each at its retail address: every one with --full,
    # else only the matched ones (the rest are retail bytes either way).
    placed = []
    swapped, oversized, with_data, retargeted, rewritten = 0, [], [], [], []
    missing, no_retail, entered_across, overlapped, object_for = [], [], [], [], {}
    data_placed = []  # (address, size, object, section): an object's own constants at their retail address
    rodata_window = (segments["rodata"][0], segments["data"][0])
    address_name = re.compile(r"_([0-9a-f]{8})$")

    objects = {name: address for address, name in split.read_objects(ROOT / module["symbols"]).items()}

    def resolve(name):
        if name in names:
            return names[name]
        if name in objects:
            return objects[name]
        match = address_name.search(name)
        return int(match[1], 16) if match else None

    for unit in units:
        address = int(unit["address"], 16)
        if "target" not in unit or address in misread:
            if unit["function"] in matched:
                if not (ROOT / unit["object"]).exists():
                    missing.append(unit["function"])
                else:
                    (no_retail if "target" not in unit else entered_across).append(unit["function"])
            continue
        target = unit["target"]
        if not (ROOT / target).exists():
            raise SystemExit(f"{target} not found: run `python3 build.py split` first")
        retail_size = elf_sections(ROOT / target)[".text"][0]
        # What the object defines: tools/split.py names it after config/symbols.txt.
        function = functions[address][0] if address in functions else unit["function"]
        constants_here = ()  # sections of a linked build/obj object that sit at their retail address
        if unit["function"] in matched and (ROOT / unit["object"]).exists():
            # objdiff compares the function symbol; the image needs the whole
            # section to be the retail size (armcc pads a Thumb section to 4).
            built = elf_sections(ROOT / unit["object"])
            size = built[".text"][0]
            data = [name for name, (length, flags) in built.items() if flags & 0x2 and length and name != ".text"]
            # Its own constants (`.constdata`) go where the image holds them, when the retail
            # object's pool words name that address and the bytes there are the object's.
            own = place_data(ROOT / unit["object"], ROOT / target, resolve, code, base, rodata_window) if data else None
            if own and any(a < start + length and start < a + n for start, length in own[0].values() for a, n, _o, _s in data_placed):
                own = None  # another function's constants already sit there
            here = resolve if own is None else (lambda name, symbols=own[1]: symbols[name] if name in symbols else resolve(name))
            difference = None if (data and own is None) or size != retail_size else code_difference(ROOT / unit["object"], ROOT / target, here)
            if data and own is None:
                # Its own variables, or constants nothing ties to a retail address: the code
                # goes in as retail bytes.
                with_data.append((unit["function"], ",".join(data)))
                if not args.full:
                    continue
            elif difference == "relocation":
                # Calls or addresses something else than retail (objdiff can score that 100%).
                retargeted.append(unit["function"])
                if not args.full:
                    continue
            elif difference == "bytes":
                # objdiff ignores some operand differences (`vldmia r1!` writeback vs `vldmia r1`).
                rewritten.append(unit["function"])
                if not args.full:
                    continue
            elif size == retail_size:
                target = unit["object"]
                function = unit["function"]
                swapped += 1
                object_for[function] = target
                if own:
                    data_placed += [(start, length, target, section) for section, (start, length) in own[0].items()]
                    constants_here = own[0]
            else:
                oversized.append((unit["function"], size, retail_size))
                if not args.full:
                    continue
        elif unit["function"] in matched:
            # 100% in objdiff but nothing was compiled for it: the image would silently keep retail bytes.
            missing.append(unit["function"])
            if not args.full:
                continue
        elif not args.full:
            continue
        sections = elf_sections(ROOT / target)
        stray = [name for name, (size, flags) in sections.items() if flags & 0x2 and size and name != ".text" and name not in constants_here]
        if stray:
            raise SystemExit(f"{target}: allocated sections besides .text ({', '.join(stray)}) have no retail address")
        placed.append((address, sections[".text"][0], target, function))
    placed.sort()
    text_lo, text_hi = segments["text"][0], segments["rodata"][0]

    OUT.mkdir(parents=True, exist_ok=True)
    gaps_dir = OUT / "gaps"
    shutil.rmtree(gaps_dir, ignore_errors=True)
    gaps_dir.mkdir()
    inputs, script_text = [], []
    cursor = text_lo
    overlaps = 0
    defined = set()
    for address, size, target, function in placed:
        if address < cursor:
            overlaps += 1
            if object_for.get(function) == target:  # a matched object that lost its place: retail bytes cover it
                overlapped.append(function)
                swapped -= 1
            continue
        if address > cursor:
            gap = gaps_dir / f"text_{cursor:08x}.o"
            blob_object(gap, ".text", code[cursor - base:address - base], True)
            inputs.append(gap.relative_to(ROOT).as_posix())
            script_text.append(f"    . = {cursor - text_lo:#x}; \"{inputs[-1]}\"(.text)")
        inputs.append(target)
        script_text.append(f"    . = {address - text_lo:#x}; \"{target}\"(.text)")
        defined.add(function)
        cursor = address + size
    if cursor < text_hi:
        gap = gaps_dir / f"text_{cursor:08x}.o"
        blob_object(gap, ".text", code[cursor - base:text_hi - base], True)
        inputs.append(gap.relative_to(ROOT).as_posix())
        script_text.append(f"    . = {cursor - text_lo:#x}; \"{inputs[-1]}\"(.text)")
    linked = set(inputs)  # a matched object that lost its text place is not linked, nor are its constants
    constants = sorted(piece for piece in data_placed if piece[2] in linked)
    data_sections = []
    for segment in ("rodata", "data"):
        lo = segments[segment][0]
        hi = segments["data"][0] if segment == "rodata" else base + len(code)
        # The retail bytes of the segment, but for the constants that sit in compiled objects.
        pieces, cursor = [], lo
        for address, size, target, section in constants if segment == "rodata" else ():
            if address > cursor:
                pieces.append((cursor, code[cursor - base:address - base], None))
            pieces.append((address, None, f"\"{target}\"({section})"))
            cursor = address + size
        pieces.append((cursor, code[cursor - base:hi - base], None))
        lines = []
        for at, payload, ref in pieces:
            if ref is None:
                if not payload and len(pieces) > 1:
                    continue
                blob = gaps_dir / (f"{segment}.o" if len(pieces) == 1 else f"{segment}_{at:08x}.o")
                blob_object(blob, f".{segment}", payload, False)
                inputs.append(blob.relative_to(ROOT).as_posix())
                ref = f"\"{inputs[-1]}\"(.{segment})"
            lines.append(f"    . = {at - lo:#x}; {ref}")
        data_sections.append(f"  .{segment} {lo:#x} : SUBALIGN(1) {{\n" + "\n".join(lines) + "\n  }")

    # Everything the objects reference and no object defines, as absolute
    # symbols: functions linked as bytes (typed, with the Thumb bit, so ld
    # picks BL or BLX as retail did) and decompiler names that carry their
    # address (`DAT_00412345`, `s_normal_00433a70`, `LAB_00118194`, ...).
    symbols = [(name, value, True) for name, value in sorted(names.items()) if name not in defined]
    addressed = {}
    for _, _, target, _ in placed:
        for match in re.finditer(rb"\0([A-Za-z_][A-Za-z0-9_]*_([0-9a-f]{8}))(?=\0)", (ROOT / target).read_bytes()):
            name = match[1].decode()
            if name not in names:
                addressed[name] = int(match[2], 16)
    symbols += [(name, value, False) for name, value in sorted(addressed.items())]
    # Named globals (`type:object` in the symbol file) the objects reference.
    symbols += [(name, value, False) for name, value in sorted(objects.items()) if name not in defined and name not in addressed]
    symbols_object = gaps_dir / "symbols.o"
    blob_object(symbols_object, ".text", b"", True, symbols)
    inputs.append(symbols_object.relative_to(ROOT).as_posix())
    dat = addressed

    entry_name = functions[text_lo][0] if text_lo in functions else None
    script = OUT / "link.ld"
    script.write_text(
        "/* Generated by tools/relink.py: every function at its retail address. */\n"
        + (f"ENTRY({entry_name})\n" if entry_name else "")
        + "".join(f"INPUT(\"{path}\")\n" for path in inputs)
        + "\nSECTIONS\n{\n"
        # Every input is placed by address; SUBALIGN keeps an object's own section
        # alignment (armcc aligns Thumb .text to 4) from moving it off that address.
        + f"  .text {text_lo:#x} : SUBALIGN(2) {{\n" + "\n".join(script_text) + "\n  }\n"
        + "\n".join(data_sections)
        # .ARM.attributes stays: it tells ld the code is ARMv6K, which calls Thumb
        # with BLX instead of through interworking veneers.
        + "\n  /DISCARD/ : { *(.comment) *(.debug_frame) *(.arm_vfe_header) *(.ARM.exidx*) }\n}\n"
    )
    prepared = time.time()
    elf = OUT / f"{project['name']}.elf"
    done = subprocess.run([ld, "-T", str(script.relative_to(ROOT).as_posix()), "-o", str(elf), "-Map", str(OUT / "link.map"),
                           "--use-blx", "--no-warn-rwx-segments", "-nostdlib"],
                          cwd=ROOT, capture_output=True, text=True)
    linked = time.time()
    if done.returncode != 0:
        print(done.stderr[-4000:])
        raise SystemExit(f"ld failed ({done.returncode})")
    binary = OUT / "code.bin"
    subprocess.run([objcopy, "-O", "binary", str(elf), str(binary)], check=True)
    rebuilt = binary.read_bytes()
    finished = time.time()

    print(f"{len(placed)} function objects ({swapped} matched, from build/obj), {len(inputs) - len(placed)} raw blobs, "
          f"{overlaps} overlapping objects skipped, {len(misread - thumb_entered_arm)} Thumb-decoded functions entered "
          f"from ARM and {len(thumb_entered_arm)} ARM-decoded functions entered by a Thumb BL linked as bytes, "
          f"{len(dat)} address-named symbols, {len(constants)} constant sections of compiled objects at their retail addresses")
    retained = (
        (oversized, "compiled section size differs", lambda item: f"{item[0]} {item[1]:#x} vs {item[2]:#x}"),
        (with_data, "they define variables, or constants no retail pool word ties to an address holding the same bytes", lambda item: f"{item[0]} ({item[1]})"),
        (retargeted, "they call or address something else than retail", str),
        (rewritten, "their instructions differ in operands objdiff does not compare", str),
        (no_retail, "their unit has no retail target object", str),
        (entered_across, "an ARM B or Thumb BL enters them in the other instruction set, so they link as bytes", str),
        (overlapped, "their object overlaps a function placed at an earlier address", str),
        (excluded, "named in --exclude", str),
    )
    for names, why, show in retained:
        if names:
            print(f"{len(names)} functions at 100% in objdiff keep their retail bytes ({why}): "
                  + ", ".join(show(item) for item in names))
    if args.matched:
        proven = set(object_for) - set(overlapped)
        accounted = proven | set(missing)
        for names, _why, _show in retained:
            accounted |= {item if isinstance(item, str) else item[0] for item in names}
        unplaced = sorted(matched - accounted)
        if unplaced:
            print(f"{len(unplaced)} functions at 100% in objdiff are not in this module's units in config/project.json, "
                  "so nothing links them: " + ", ".join(unplaced))
        print(f"proven: {len(proven)} of {len(claimed)} functions objdiff scores 100% link from build/obj "
              f"({len(claimed) - len(proven) - len(missing)} keep retail bytes, {len(missing)} have no object)")
    if missing:
        print(f"{len(missing)} functions at 100% in objdiff have no compiled object in build/obj, so the image keeps "
              "their retail bytes and nothing proves them (run `python3 build.py` to compile them, or name them "
              "in --exclude): " + ", ".join(missing))
    print(f"prepare {prepared - started:.1f}s, ld {linked - prepared:.1f}s, objcopy+compare {finished - linked:.1f}s")
    want = hashlib.sha256(code).hexdigest()
    got = hashlib.sha256(rebuilt).hexdigest()
    print(f"retail  .code sha256 {want} ({len(code):#x} bytes)")
    print(f"rebuilt .code sha256 {got} ({len(rebuilt):#x} bytes)")
    if args.matched and not args.full:
        # What tools/progress_site.py credits: the functions this link proved, and only when it matched.
        (OUT / "proof.json").write_text(json.dumps({
            "match": rebuilt == code,
            "code_sha256": got,
            "proven": sorted(proven),
            "kept": {item if isinstance(item, str) else item[0]: why
                     for names, why, _show in retained for item in names},
        }, indent=1) + "\n")
    if rebuilt == code:
        if missing:
            print("INCOMPLETE: the relinked .code is byte-identical to retail, but it is not proven: "
                  f"{len(missing)} matched functions were not linked from build/obj")
            return 1
        print("MATCH: the relinked .code is byte-identical to retail")
        return 0
    diffs = [i for i in range(min(len(code), len(rebuilt))) if code[i] != rebuilt[i]]
    print(f"DIFFERENT: {len(diffs)} differing bytes, first at {base + diffs[0]:#x}" if diffs else "DIFFERENT: lengths differ")
    owners = sorted((address, size, function, target) for address, size, target, function in placed)
    culprits = []
    for offset in diffs:
        address = base + offset
        index = bisect.bisect_right([o[0] for o in owners], address) - 1
        owner = owners[index] if index >= 0 and address < owners[index][0] + owners[index][1] else None
        name = owner[2] if owner else f"retail bytes at {address:#x}"
        if name not in culprits:
            culprits.append(name)
            print(f"  {address:#x} in {name} ({owner[3] if owner else 'blob'})")
    swapped_bad = [name for name in culprits if name in matched]
    if swapped_bad:
        print(f"{len(swapped_bad)} functions objdiff scores 100% do not reproduce their retail bytes in the image; "
              f"without them: --exclude {','.join(swapped_bad)}")
    return 1


if __name__ == "__main__":
    sys.exit(main())

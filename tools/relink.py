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
.rodata, .data) is retail bytes. Symbols the objects reference and nothing
defines (`DAT_<addr>`, functions linked as bytes) are defined at their
addresses. The linked image is compared with the decompressed `.code`.

    python3 tools/relink.py [--matched] [--full] [--exclude FUN_a,FUN_b] [--ld PATH] [--objcopy PATH]

GNU ld/objcopy come from build/tools/binutils-arm-none-eabi/*/bin (Arm GNU
Toolchain 13.3.rel1; the Windows build is
arm-gnu-toolchain-13.3.rel1-mingw-w64-i686-arm-none-eabi.zip, sha256
e46fda043c0ce83582bc8db4b3ef85f77f4beb7333344c2f4193c17e1167a095), then PATH.

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
from assign_tus import load_code  # noqa: E402

OUT = ROOT / "build" / "relink"


def find_tool(explicit, name):
    candidates = [explicit]
    candidates += sorted(str(p) for p in (ROOT / "build" / "tools" / "binutils-arm-none-eabi").glob(f"*/bin/arm-none-eabi-{name}.exe"))
    candidates += sorted(str(p) for p in (ROOT / "build" / "tools" / "binutils-arm-none-eabi").glob(f"*/bin/arm-none-eabi-{name}"))
    candidates.append(shutil.which(f"arm-none-eabi-{name}"))
    for candidate in candidates:
        if candidate and Path(candidate).exists():
            return candidate
    raise SystemExit(f"arm-none-eabi-{name} not found: pass --{name} PATH")


def elf_sections(path):
    """{name: (size, flags)} of an ELF32 little-endian relocatable object."""
    data = Path(path).read_bytes()
    shoff, = struct.unpack_from("<I", data, 0x20)
    shentsize, shnum, shstrndx = struct.unpack_from("<HHH", data, 0x2E)
    headers = [struct.unpack_from("<IIIIIIIIII", data, shoff + i * shentsize) for i in range(shnum)]
    names = headers[shstrndx]
    name = lambda at: data[names[4] + at:data.index(b"\0", names[4] + at)].decode()
    return {name(h[0]): (h[5], h[2]) for h in headers}


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
    parser.add_argument("--image", default=str(ROOT / "orig" / "smt4.cxi"))
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

    base, code, segments = load_code(args.image)
    project = json.loads((ROOT / "config" / "project.json").read_text())
    names, thumb = {}, set()
    for line in (ROOT / "config" / "symbols.txt").read_text().splitlines():
        match = re.match(r"(\S+) = \S+:0x([0-9a-fA-F]+); // type:function.*?(mode:thumb)?$", line)
        if match:
            names[match[1]] = int(match[2], 16)
            if match[3]:
                thumb.add(int(match[2], 16))
    # An ARM `B`/`BL` cannot change the instruction set: its target is ARM code,
    # whatever mode the analysis decoded that function in. Such a function's
    # object says Thumb (and the linker would bridge to it with a veneer), so it
    # links as its raw bytes under an ARM symbol instead.
    entered_by_arm = set()
    arm = sorted((address, size) for unit in project["units"]
                 for address, size in [(int(unit["address"], 16), unit["size"])] if address not in thumb)
    for entry, size in arm:
        for at in range(entry, entry + size - 3, 4):
            word = struct.unpack_from("<I", code, at - base)[0]
            if word >> 28 != 0xF and word >> 25 & 7 == 5:
                entered_by_arm.add((at + 8 + (((word & 0xFFFFFF) ^ 0x800000) - 0x800000) * 4) & 0xFFFFFFFF)
    misread = thumb & entered_by_arm
    for name, address in names.items():
        if address in thumb and address not in misread:
            names[name] = address | 1
    matched = matched_functions() - set(filter(None, args.exclude.split(","))) if args.matched else set()

    # The function objects, each at its retail address: every one with --full,
    # else only the matched ones (the rest are retail bytes either way).
    placed = []
    swapped, oversized = 0, []
    for unit in project["units"]:
        address = int(unit["address"], 16)
        if "target" not in unit or address in misread:
            continue
        target = unit["target"]
        retail_size = elf_sections(ROOT / target)[".text"][0]
        if unit["function"] in matched and (ROOT / unit["object"]).exists():
            # objdiff compares the function symbol; the image needs the whole
            # section to be the retail size (armcc pads a Thumb section to 4).
            size = elf_sections(ROOT / unit["object"])[".text"][0]
            if size == retail_size:
                target = unit["object"]
                swapped += 1
            else:
                oversized.append((unit["function"], size, retail_size))
                if not args.full:
                    continue
        elif not args.full:
            continue
        sections = elf_sections(ROOT / target)
        stray = [name for name, (size, flags) in sections.items() if flags & 0x2 and size and name != ".text"]
        if stray:
            raise SystemExit(f"{target}: allocated sections besides .text ({', '.join(stray)}) have no retail address")
        placed.append((address, sections[".text"][0], target, unit["function"]))
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
    data_sections = []
    for segment in ("rodata", "data"):
        lo = segments[segment][0]
        hi = segments["data"][0] if segment == "rodata" else base + len(code)
        blob = gaps_dir / f"{segment}.o"
        blob_object(blob, f".{segment}", code[lo - base:hi - base], False)
        inputs.append(blob.relative_to(ROOT).as_posix())
        data_sections.append(f"  .{segment} {lo:#x} : {{ \"{inputs[-1]}\"(.{segment}) }}")

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
    symbols_object = gaps_dir / "symbols.o"
    blob_object(symbols_object, ".text", b"", True, symbols)
    inputs.append(symbols_object.relative_to(ROOT).as_posix())
    dat = addressed

    script = OUT / "link.ld"
    script.write_text(
        "/* Generated by tools/relink.py: every function at its retail address. */\n"
        "ENTRY(entry)\n"
        + "".join(f"INPUT(\"{path}\")\n" for path in inputs)
        + "\nSECTIONS\n{\n"
        # Every input is placed by address; SUBALIGN keeps an object's own section
        # alignment (armcc aligns Thumb .text to 4) from moving it off that address.
        + f"  .text {text_lo:#x} : SUBALIGN(2) {{\n" + "\n".join(script_text) + "\n  }\n"
        + "\n".join(data_sections)
        # .ARM.attributes stays: it tells ld the code is ARMv6K, which calls Thumb
        # with BLX instead of through interworking veneers.
        + "\n  /DISCARD/ : { *(.comment) *(.debug_frame) *(.arm_vfe_header) }\n}\n"
    )
    prepared = time.time()
    elf = OUT / "smt4.elf"
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
          f"{overlaps} overlapping objects skipped, {len(misread)} Thumb-decoded functions entered from ARM linked as bytes, "
          f"{len(dat)} address-named symbols")
    if oversized:
        print(f"{len(oversized)} functions at 100% in objdiff keep their retail bytes (compiled section size differs): "
              + ", ".join(f"{name} {size:#x} vs {want:#x}" for name, size, want in oversized[:8]))
    print(f"prepare {prepared - started:.1f}s, ld {linked - prepared:.1f}s, objcopy+compare {finished - linked:.1f}s")
    want = hashlib.sha256(code).hexdigest()
    got = hashlib.sha256(rebuilt).hexdigest()
    print(f"retail  .code sha256 {want} ({len(code):#x} bytes)")
    print(f"rebuilt .code sha256 {got} ({len(rebuilt):#x} bytes)")
    if rebuilt == code:
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

#!/usr/bin/env python3
"""Rebuild the retail target objects (`orig/target/**.o`) from the dump, without romwright.

`orig/` is git-ignored (retail bytes), so a fresh clone has no target objects.
This writes them again from three things the repository keeps and the dump:

* `orig/<image>` (config/project.json `image.orig`): the retail program;
* `config/symbols.txt` (`config/<module>/symbols.txt` with several modules):
  every function's name, address, size and `mode:thumb`/`mode:arm`, so a
  function you renamed there is the name its callers' relocations use;
* `config/modules.json`: each module's sections (what is data, for `DAT_<address>`).

`config/project.json` says which object belongs to which function. Each object
is what `romwright-cli new-project` writes, byte for byte: one function's bytes
as an ELF relocatable object where a direct call, tail call or conditional call
to another function is the R_ARM_CALL / R_ARM_JUMP24 / R_ARM_THM_CALL a compiler
emits, a literal-pool word holding an address is an R_ARM_ABS32 to that function
or to `DAT_<8 hex digits>` (an address in a non-executable section), literal
pools are `$d` mapping symbols, a pool that follows the function's last
instruction (before the next function) is part of the object, and
`.ARM.attributes` says ARMv6K/VFPv2 (MPCore).

    python3 tools/split.py [--module ID] [--only SUBSTR] [--out DIR]

Standard library only.
"""
import argparse
import bisect
import hashlib
import json
import re
import struct
import sys
import time
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import n3ds  # noqa: E402

ROOT = Path(__file__).resolve().parent.parent
MAX_FUNCTION_BYTES = 1 << 20
# The 3DS target: Tag_CPU_name, Tag_CPU_arch (v6K), Tag_FP_arch (VFPv2).
CPU = ("MPCore", 9, 2)
SYMBOL = re.compile(r"^(\S+) = (?:\S+:)?0x([0-9a-fA-F]+); // (.*)$")


def read_symbols(path):
    """Every `type:function` line of a symbol file: {address: (name, size, thumb)}."""
    functions = {}
    for line in Path(path).read_text(encoding="utf-8").splitlines():
        match = SYMBOL.match(line)
        if not match:
            continue
        tags = match[3].split(' orig:"')[0]
        if "type:function" not in tags.split():
            continue
        size = re.search(r"\bsize:0x([0-9a-fA-F]+)", tags)
        functions[int(match[2], 16)] = (match[1], int(size[1], 16) if size else 0, "mode:thumb" in tags.split())
    return functions


# --------------------------------------------------------------------------
# Literal pools and direct branches (what romwright finds in a function's bytes)
# --------------------------------------------------------------------------

def sign_extend(value, bits):
    return (value & ((1 << bits) - 1)) - ((value & (1 << (bits - 1))) << 1)


def thumb_is_wide(first):
    """The first halfword of a 32-bit Thumb-2 instruction: top five bits 0b11101/0b11110/0b11111."""
    return first >> 11 >= 0x1D


def thumb2_literal_load(first, second):
    """(add, offset, size, is a word) of a Thumb-2 PC-relative literal load, else None: LDR.W
    (F85F/F8DF), LDRB/LDRSB/LDRH/LDRSH, LDRD and VLDR literal. A byte or halfword load with
    Rt = 15 is a PLD/PLI/hint, not a load."""
    up = first >> 7 & 1 == 1
    imm12 = second & 0xFFF
    loads = second >> 12 != 0xF
    kind = first & 0xFF7F
    if kind == 0xF85F:
        return up, imm12, 4, True
    if kind in (0xF81F, 0xF91F) and loads:
        return up, imm12, 1, False
    if kind in (0xF83F, 0xF93F) and loads:
        return up, imm12, 2, False
    if kind == 0xE95F:
        return up, (second & 0xFF) * 4, 8, False
    if first & 0xFF3F == 0xED1F and second & 0x0E00 == 0x0A00:
        return up, (second & 0xFF) * 4, 8 if second >> 8 & 1 else 4, False
    return None


def literal_pools(entry, code, thumb):
    """(merged data ranges, words a PC-relative LDR reads, end) of an ARM/Thumb function, as
    byte offsets: A32 LDR/LDRD/VLDR and Thumb LDR with PC as the base. One pass in address
    order, so a pool word is data when the scan reaches it and is not decoded. `end` is where
    the bytes end once every pool they read is counted (past `code` when a load reads a pool
    behind it)."""
    length = len(code)
    skew = entry % 4
    data, ranges, words = set(), [], []
    reach = length

    def read(at, size, is_word):
        nonlocal reach
        if (at + skew) % 4:
            return
        if at + size <= length:
            ranges.append((at, at + size))
            data.update(range(at, at + size, 4))
            if is_word:
                words.append(at)
        elif at + size <= length + 4096:
            reach = max(reach, at + size)

    if thumb:
        at = 0
        while at + 2 <= length:
            half = struct.unpack_from("<H", code, at)[0]
            word_start = ((at + skew) & ~3) - skew
            if word_start >= 0 and word_start in data:
                at += 2
                continue
            if half & 0xF800 == 0x4800:
                read(((at + skew + 4) & ~3) - skew + (half & 0xFF) * 4, 4, True)
            elif thumb_is_wide(half):
                # a 32-bit instruction is one 4-byte unit: its second half is never decoded alone
                if at + 4 <= length:
                    load = thumb2_literal_load(half, struct.unpack_from("<H", code, at + 2)[0])
                    if load is not None:
                        up, imm, size, is_word = load
                        base = ((at + skew + 4) & ~3) - skew
                        target = base + imm if up else base - imm
                        if target >= 0:
                            if size < 4:  # a byte or halfword load marks the aligned words around it
                                end = target + size
                                low = target - (target + skew) % 4
                                if low >= 0:
                                    read(low, end + (4 - (end + skew) % 4) % 4 - low, False)
                            else:
                                read(target, size, is_word)
                at += 2
            at += 2
    else:
        for at in range(0, max(length - 3, 0), 4):
            if at in data:
                continue
            word = struct.unpack_from("<I", code, at)[0]
            if word >> 28 == 0xF:
                continue
            up = word >> 23 & 1 == 1

            def target(offset):
                value = at + 8 + offset if up else at + 8 - offset
                return value if value >= 0 else None

            if word & 0x0F7F0000 == 0x051F0000:  # LDR Rt, [PC, #+/-imm12]
                to = target(word & 0xFFF)
                if to is not None:
                    read(to, 4, True)
            elif word & 0x0F7F00F0 == 0x014F00D0:  # LDRD Rt, Rt2, [PC, #+/-imm8]
                to = target((word >> 4 & 0xF0) | (word & 0xF))
                if to is not None:
                    read(to, 8, False)
            elif word & 0x0F3F0E00 == 0x0D1F0A00:  # VLDR Sd/Dd, [PC, #+/-imm8*4]
                to = target((word & 0xFF) * 4)
                if to is not None:
                    read(to, 8 if word >> 8 & 1 else 4, False)
    merged = []
    for start, end in sorted(ranges):
        if merged and start <= merged[-1][1]:
            merged[-1] = (merged[-1][0], max(merged[-1][1], end))
        else:
            merged.append((start, end))
    return merged, sorted(set(words)), reach


def direct_branches(entry, code, thumb, pools):
    """(instruction address, target address, links) of every direct branch or call outside the
    literal pools: A32 B/BL/BLX imm and Thumb BL/BLX pairs (a 32-bit Thumb instruction is one
    4-byte unit), a tail call wherever it sits."""
    def in_pool(at):
        return any(start <= at < end for start, end in pools)

    found, length = [], len(code)
    if thumb:
        at = 0
        while at + 4 <= length:
            first, second = struct.unpack_from("<HH", code, at)
            if in_pool(at) or not thumb_is_wide(first):
                at += 2
                continue
            if first & 0xF800 == 0xF000 and (second & 0xD000 == 0xD000 or second & 0xD001 == 0xC000):
                blx = second & 0x1000 == 0
                s = first >> 10 & 1
                i1, i2 = ~((second >> 13 & 1) ^ s) & 1, ~((second >> 11 & 1) ^ s) & 1
                imm = (s << 24) | (i1 << 23) | (i2 << 22) | ((first & 0x3FF) << 12) | ((second & 0x7FF) << 1)
                origin = entry + at
                base = (origin + 4) & ~3 if blx else origin + 4
                found.append((origin, (base + sign_extend(imm, 25)) & 0xFFFFFFFF, True))
            at += 4
    else:
        for at in range(0, max(length - 3, 0), 4):
            word = struct.unpack_from("<I", code, at)[0]
            branch, blx = word >> 25 & 7 == 5 and word >> 28 != 0xF, word >> 25 == 0x7D
            if in_pool(at) or not (branch or blx):
                continue
            imm = sign_extend(word & 0xFFFFFF, 24) * 4 + ((word >> 24 & 1) * 2 if blx else 0)
            origin = entry + at
            found.append((origin, (origin + 8 + imm) & 0xFFFFFFFF, blx or word >> 24 & 1 == 1))
    return found


def relocate_branches(entry, code, thumb, branches):
    """Zero the displacement of each branch the way an assembler leaves it and return the
    relocations (offset, symbol, type). `branches`: (instruction address, target, name)."""
    relocs = []
    for origin, to, name in branches:
        at = origin - entry
        if at < 0 or at >= len(code) or at % (2 if thumb else 4):
            continue
        if not thumb:
            if at + 4 > len(code):
                continue
            word = struct.unpack_from("<I", code, at)[0]
            unconditional = word >> 28 == 0xE
            branch, blx = word >> 25 & 7 == 5 and word >> 28 != 0xF, word >> 25 == 0x7D
            if not (branch or blx):
                continue
            link = word >> 24 & 1 == 1
            imm = sign_extend(word & 0xFFFFFF, 24) * 4 + ((word >> 24 & 1) * 2 if blx else 0)
            if (origin + 8 + imm) & 0xFFFFFFFF != to & 0xFFFFFFFE:
                continue
            top = 0xFA000000 if blx else word & 0xFF000000
            struct.pack_into("<I", code, at, top | 0x00FFFFFE)
            kind = 28 if blx or (link and unconditional) else 29  # R_ARM_CALL / R_ARM_JUMP24
        else:
            if at + 4 > len(code):
                continue
            first, second = struct.unpack_from("<HH", code, at)
            if first & 0xF800 != 0xF000 or (second & 0xD000 != 0xD000 and second & 0xD001 != 0xC000):
                continue
            blx = second & 0x1000 == 0
            s = first >> 10 & 1
            i1, i2 = ~((second >> 13 & 1) ^ s) & 1, ~((second >> 11 & 1) ^ s) & 1
            imm = (s << 24) | (i1 << 23) | (i2 << 22) | ((first & 0x3FF) << 12) | ((second & 0x7FF) << 1)
            base = (origin + 4) & ~3 if blx else origin + 4
            if (base + sign_extend(imm, 25)) & 0xFFFFFFFF != to & 0xFFFFFFFE:
                continue
            code[at:at + 4] = bytes((0xFF, 0xF7, 0xFE, 0xEF if blx else 0xFF))
            kind = 10  # R_ARM_THM_CALL
        relocs.append((at, name, kind))
    relocs.sort(key=lambda r: r[0])
    unique = []
    for reloc in relocs:
        if not unique or unique[-1][0] != reloc[0]:
            unique.append(reloc)
    return unique


# --------------------------------------------------------------------------
# The ELF relocatable object
# --------------------------------------------------------------------------

class Strings:
    def __init__(self):
        self.data = bytearray(b"\0")
        self.seen = {}

    def add(self, text):
        if not text:
            return 0
        if text in self.seen:
            return self.seen[text]
        at = len(self.data)
        self.data += text.encode() + b"\0"
        self.seen[text] = at
        return at


def arm_attributes():
    """`.ARM.attributes`: Tag_CPU_name, Tag_CPU_arch, Tag_ARM_ISA_use, Tag_THUMB_ISA_use, Tag_FP_arch."""
    name, arch, fp = CPU
    tags = bytes([5]) + name.encode() + b"\0" + bytes([6, arch, 8, 1, 9, 1, 10, fp])
    vendor = b"aeabi\0" + bytes([1]) + struct.pack("<I", 1 + 4 + len(tags)) + tags
    return b"A" + struct.pack("<I", 4 + len(vendor)) + vendor


def build_object(name, code, thumb, relocs, pools, attributes):
    """ELF32 ARM relocatable object holding `code` as the function `name`: `.text`, `.rel.text`,
    `.ARM.attributes`, `.symtab` (section symbol, `$a`/`$t`/`$d` mapping symbols, the function,
    undefined callees), `.strtab`, `.shstrtab`."""
    strtab, shstr = Strings(), Strings()
    symbols = [(0, 0, 0, 0, 0), (0, 3, 1, 0, 0)]  # name, info, shndx, value, size
    mapping = strtab.add("$t" if thumb else "$a")
    pool = strtab.add("$d")
    if not pools or pools[0][0] > 0:
        symbols.append((mapping, 0, 1, 0, 0))
    for start, end in pools:
        symbols.append((pool, 0, 1, start, 0))
        if end < len(code):
            symbols.append((mapping, 0, 1, end, 0))
    first_global = len(symbols)
    function = strtab.add(name)
    # A pool that ends the section follows the function's last instruction outside its symbol.
    size = pools[-1][0] if pools and pools[-1][1] == len(code) else len(code)
    symbols.append((function, 0x12, 1, 1 if thumb else 0, size))
    index_of = {}
    for _, symbol, _ in relocs:
        if symbol == name or symbol in index_of:
            continue
        index_of[symbol] = len(symbols)
        symbols.append((strtab.add(symbol), 0x10, 0, 0, 0))

    out = bytearray(52)

    def align(to):
        while len(out) % to:
            out.append(0)

    sections = [(0, 0, 0, 0, 0, 0, 0, 0, 0)]  # name, type, flags, offset, size, link, info, align, entsize
    align(16)
    text_offset = len(out)
    out += code
    sections.append((shstr.add(".text"), 1, 0x6, text_offset, len(code), 0, 0, 2 if thumb else 4, 0))
    symtab_index = 2 + (1 if relocs else 0) + (1 if attributes else 0)
    if relocs:
        align(8)
        offset = len(out)
        for at, symbol, kind in relocs:
            index = first_global if symbol == name else index_of[symbol]
            out += struct.pack("<II", at, index << 8 | kind)
        sections.append((shstr.add(".rel.text"), 9, 0x40, offset, len(out) - offset, symtab_index, 1, 4, 8))
    if attributes:
        offset = len(out)
        out += attributes
        sections.append((shstr.add(".ARM.attributes"), 0x70000003, 0, offset, len(attributes), 0, 0, 1, 0))
    align(8)
    symtab_offset = len(out)
    for sym_name, info, shndx, value, sym_size in symbols:
        out += struct.pack("<IIIBBH", sym_name, value, sym_size, info, 0, shndx)
    sections.append((shstr.add(".symtab"), 2, 0, symtab_offset, len(out) - symtab_offset, symtab_index + 1, first_global, 4, 16))
    strtab_offset = len(out)
    out += strtab.data
    sections.append((shstr.add(".strtab"), 3, 0, strtab_offset, len(strtab.data), 0, 0, 1, 0))
    shstr_name = shstr.add(".shstrtab")
    shstr_offset = len(out)
    out += shstr.data
    sections.append((shstr_name, 3, 0, shstr_offset, len(shstr.data), 0, 0, 1, 0))
    align(8)
    shoff = len(out)
    for sec_name, kind, flags, offset, sec_size, link, info, sec_align, entsize in sections:
        out += struct.pack("<IIIIIIIIII", sec_name, kind, flags, 0, offset, sec_size, link, info, sec_align, entsize)
    count = len(sections)
    out[0:52] = b"\x7fELF\x01\x01\x01" + bytes(9) + struct.pack(
        "<HHIIIIIHHHHHH", 1, 40, 1, 0, 0, shoff, 0x05000000, 52, 0, 0, 40, count, count - 1
    )
    return bytes(out)


# --------------------------------------------------------------------------
# One module
# --------------------------------------------------------------------------

class Module:
    def __init__(self, program, functions, data_regions):
        self.program = program
        self.functions = functions                            # {address: (name, size, thumb)}
        self.names = {a: f[0] for a, f in functions.items()}
        self.thumb = {a for a, f in functions.items() if f[2]}
        self.starts = sorted(functions)
        self.data = data_regions                              # [(start, end)] of the non-executable sections

    def resolve(self, value):
        """The symbol a literal-pool word names: a function (a Thumb one by its address with the low bit
        set), or `DAT_<address>` for an address in a data section."""
        function = value & ~1 if value & 1 and (value & ~1) in self.thumb else value
        if function in self.names:
            return self.names[function]
        if any(start <= value < end for start, end in self.data):
            return f"DAT_{value:08x}"
        return None

    def target_object(self, address, attributes):
        """The object bytes of the function at `address`, or None when it has none."""
        name, size, thumb = self.functions[address]
        if not 0 < size <= MAX_FUNCTION_BYTES:
            return None
        code = self.program.read(address, size)
        if code is None:
            return None
        # A trailing partial instruction cannot be disassembled.
        step = 2 if thumb else 4
        code = code[:len(code) // step * step]
        if not code:
            return None
        low, high = address, address + size
        pools, words, end = literal_pools(address, code, thumb)
        # The pool a function's loads read follows its last instruction and belongs to its object:
        # take it in when it ends before the next function.
        following = bisect.bisect_right(self.starts, address)
        following = self.starts[following] if following < len(self.starts) else None
        if end > len(code) and (following is None or address + end <= following):
            longer = self.program.read(address, end)
            if longer is not None:
                code = longer
                pools, words, end = literal_pools(address, code, thumb)
        # A jump inside the function is control flow; a call to its own entry is recursion (a call
        # past its last instruction, in the pool area taken in above, is not part of the function).
        branches = [(origin, to, self.names[to]) for origin, to, links in direct_branches(address, code, thumb, pools)
                    if (not low <= to < high or (to == address and links and origin < high)) and to in self.names]
        code = bytearray(code)
        relocs = []
        for at in words:
            value = struct.unpack_from("<I", code, at)[0]
            symbol = self.resolve(value)
            if symbol is not None:
                code[at:at + 4] = bytes(4)
                relocs.append((at, symbol, 2))  # R_ARM_ABS32
        relocs += relocate_branches(address, code, thumb, branches)
        relocs.sort(key=lambda r: r[0])
        return build_object(name, bytes(code), thumb, relocs, pools, attributes)


def main():
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("--module", help="only this module id (config/modules.json)")
    parser.add_argument("--only", help="only objects whose path contains this")
    parser.add_argument("--out", default=str(ROOT), help="write the objects below this directory (default: the project)")
    args = parser.parse_args()
    started = time.time()
    project = json.loads((ROOT / "config" / "project.json").read_text(encoding="utf-8"))
    modules = json.loads((ROOT / "config" / "modules.json").read_text(encoding="utf-8"))["modules"]
    image = ROOT / project["image"]["orig"]
    if not image.exists():
        raise SystemExit(
            f"{image.relative_to(ROOT)} not found: put your decrypted dump there "
            f"(sha256 {project['image']['sha256']}, {project['image']['size']} bytes; any container holding the "
            "same program works: a .cxi, a .3ds/.cci card or a decrypted .cia)"
        )
    attributes = arm_attributes()
    written = skipped = 0
    for module in modules:
        if args.module and module["id"] != args.module:
            continue
        units = [u for u in project["units"] if u.get("module") == module["id"] and u.get("target")]
        if args.only:
            units = [u for u in units if args.only in u["target"]]
        if not units:
            continue
        try:
            program = n3ds.open_program(image, module["id"])
        except n3ds.ImageError as error:
            raise SystemExit(str(error))
        # The program, not the container file: a card, its NCCH and a decrypted CIA of one
        # build all hold the same code, and any other build would give wrong objects silently.
        want = module.get("mapped_sha256")
        if want and hashlib.sha256(program.code).hexdigest() != want:
            raise SystemExit(
                f"{image.relative_to(ROOT)}: its {module['id']} program is not the one this project was made from "
                f"(decompressed .code sha256 {hashlib.sha256(program.code).hexdigest()}, expected {want}): "
                "another version or region of the game?"
            )
        functions = read_symbols(ROOT / module["symbols"])
        data = [(int(s["start"], 16), int(s["start"], 16) + int(s["size"], 16))
                for s in module["sections"] if "x" not in s["permissions"]]
        built = Module(program, functions, data)
        for unit in units:
            address = int(unit["address"], 16)
            if address not in functions:
                print(f"{unit['target']}: no function at {address:#x} in {module['symbols']}; skipped", file=sys.stderr)
                skipped += 1
                continue
            body = built.target_object(address, attributes)
            if body is None:
                skipped += 1
                continue
            path = Path(args.out) / unit["target"]
            path.parent.mkdir(parents=True, exist_ok=True)
            path.write_bytes(body)
            written += 1
    print(f"{written} target objects written below {args.out} ({skipped} functions without one) in {time.time() - started:.1f}s")
    return 0


if __name__ == "__main__":
    sys.exit(main())

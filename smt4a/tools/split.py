#!/usr/bin/env python3
"""Rebuild the retail target objects (`orig/target/**.o`) from the dump, without romwright.

`orig/` is git-ignored (retail bytes), so a fresh clone has no target objects.
This writes them again from three things the repository keeps and the dump:

* `orig/<image>` (config/project.json `image.orig`): the retail program;
* `config/symbols.txt` (`config/<module>/symbols.txt` with several modules):
  every function's name, address, size and `mode:thumb`/`mode:arm`, so a
  function you renamed there is the name its callers' relocations use, and
  every named global (`g_name = ncch:.data:0xADDR; // type:object size:0xN`);
* `config/modules.json`: each module's sections (what is data, for `DAT_<address>`).

`config/project.json` says which object belongs to which function. Each object
is what `romwright-cli new-project` writes, byte for byte: one function's bytes
as an ELF relocatable object where a direct call, tail call or conditional call
to another function is the R_ARM_CALL / R_ARM_JUMP24 / R_ARM_THM_CALL a compiler
emits, a literal-pool word holding an address is an R_ARM_ABS32 to that function,
to the named global at exactly that address, or to `DAT_<8 hex digits>` (an
address in a non-executable section), literal
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


def read_numbers(path):
    """The values of `config/numbers.txt` (`0x<value> // evidence` per line): literal-pool words that
    are numbers, not addresses, although they fall inside a data section (a status code, a mask)."""
    if not Path(path).exists():
        return set()
    return {int(line.split("//")[0], 16) for line in Path(path).read_text(encoding="utf-8").splitlines()
            if line.split("//")[0].strip()}


def read_objects(path):
    """Every `type:object` line of a symbol file: {address: name}. A named global: a literal-pool
    word holding exactly its address is a relocation to that name instead of `DAT_<address>`."""
    objects = {}
    for line in Path(path).read_text(encoding="utf-8").splitlines():
        match = SYMBOL.match(line)
        if match and "type:object" in match[3].split(' orig:"')[0].split():
            objects[int(match[2], 16)] = match[1]
    return objects


def read_aliases(path):
    """Every `type:alias` line of a symbol file: {name: address}. A second name the linker gives an
    address that already has one (`__init_array_end` of an empty array equals its start): an object
    referencing the alias is relinked against the address's own name (build.py `link_aliases`)."""
    aliases = {}
    for line in Path(path).read_text(encoding="utf-8").splitlines():
        match = SYMBOL.match(line)
        if match and "type:alias" in match[3].split(' orig:"')[0].split():
            aliases[match[1]] = int(match[2], 16)
    return aliases


def read_object_sizes(path):
    """{address: size} of the `type:object` lines that give a `size:0x...`: a pool word pointing inside
    such an object (a vtable's address point, 8 bytes in) is a relocation to it plus an addend."""
    sizes = {}
    for line in Path(path).read_text(encoding="utf-8").splitlines():
        match = SYMBOL.match(line)
        if match and "type:object" in match[3]:
            size = re.search(r"\bsize:0x([0-9a-fA-F]+)", match[3])
            if size:
                sizes[int(match[2], 16)] = int(size[1], 16)
    return sizes


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


def switch_table(code, at):
    """(table offset, entries) of an armcc ARM switch at `at`, else None: `cmp rM, #N` before
    `ldr pc, [pc, rM, lsl #2]` (armcc schedules up to a dozen instructions between them), then
    `b default`, then N words: the case addresses."""
    word = struct.unpack_from("<I", code, at)[0]
    if word & 0x0FFFFFF0 != 0x079FF100:
        return None
    index = word & 0xF
    for back in range(at - 4, max(at - 64, -1), -4):
        cmp = struct.unpack_from("<I", code, back)[0]
        if cmp & 0x0FFFF000 == 0x03500000 | index << 16:  # CMP rM, #imm
            rotate = (cmp >> 8 & 0xF) * 2
            count = ((cmp & 0xFF) >> rotate | (cmp & 0xFF) << (32 - rotate)) & 0xFFFFFFFF if rotate else cmp & 0xFF
            return (at + 8, count) if at + 8 + count * 4 <= len(code) else None
    return None


def literal_pools(entry, code, thumb):
    """(merged data ranges, words a PC-relative LDR reads, end) of an ARM/Thumb function, as
    byte offsets: A32 LDR/LDRD/VLDR and Thumb LDR with PC as the base. One pass in address
    order, so a pool word is data when the scan reaches it and is not decoded. A PC-relative
    ADD/ADR addresses a string literal armcc placed among the pools (C code takes no address of a
    label): data up to its NUL, rounded up to the word. `end` is where the bytes end once every
    pool they read and every string they address is counted (past `code` when one lies behind it;
    a string not ended inside `code` asks for one more word)."""
    length = len(code)
    skew = entry % 4
    data, ranges, words, addressed = set(), [], [], []
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
            elif half & 0xF800 == 0xA000:  # ADR Rd, #imm8*4
                addressed.append(((at + skew + 4) & ~3) - skew + (half & 0xFF) * 4)
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
            elif word & 0x0FFF0000 == 0x028F0000:  # ADD Rd, PC, #imm (ADR)
                rotate = (word >> 8 & 0xF) * 2
                imm = ((word & 0xFF) >> rotate | (word & 0xFF) << (32 - rotate)) & 0xFFFFFFFF if rotate else word & 0xFF
                addressed.append(at + 8 + imm)
            elif switch_table(code, at):  # LDR PC, [PC, Rm, LSL #2]: the case table follows the B default
                table, count = switch_table(code, at)
                read(table, count * 4, False)
    word_end = lambda offset: offset + (4 - (offset + skew) % 4) % 4   # up to the next word of the image
    for to in addressed:
        if to >= length:
            if to < length + 4096:
                reach = max(reach, word_end(to + 1))
            continue
        stop = code.find(b"\0", to) if to >= 0 else -1
        if stop < 0:
            reach = max(reach, word_end(length + 1))
            continue
        stop += 1
        ranges.append((to, min(length, stop + (4 - (stop + skew) % 4) % 4)))
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
            # A call is written as the compiler emits it: BL with R_ARM_CALL. The linker turned it into
            # BLX where the callee is Thumb (relink.py links with --use-blx and does the same).
            top = 0xEB000000 if blx else word & 0xFF000000
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
            code[at:at + 4] = bytes((0xFF, 0xF7, 0xFE, 0xFF))  # BL; the linker makes it BLX for an ARM callee
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


def reads_tail(code, pools, start):
    """Whether an A32 VLDR or ADR (ADD Rd, PC, #imm) before `start` reads at or past it."""
    for at in range(0, start - 3, 4):
        if any(low <= at < high for low, high in pools):
            continue
        word = struct.unpack_from("<I", code, at)[0]
        if word >> 28 == 0xF:
            continue
        if word & 0x0F3F0E00 == 0x0D1F0A00:
            offset = (word & 0xFF) * 4
            to = at + 8 + offset if word >> 23 & 1 else at + 8 - offset
        elif word & 0x0FFF0000 == 0x028F0000:
            rotate = (word >> 8 & 0xF) * 2
            to = at + 8 + (((word & 0xFF) >> rotate | (word & 0xFF) << (32 - rotate)) & 0xFFFFFFFF if rotate else word & 0xFF)
        else:
            continue
        if to >= start:
            return True
    return False


def arm_attributes():
    """`.ARM.attributes`: Tag_CPU_name, Tag_CPU_arch, Tag_ARM_ISA_use, Tag_THUMB_ISA_use, Tag_FP_arch."""
    name, arch, fp = CPU
    tags = bytes([5]) + name.encode() + b"\0" + bytes([6, arch, 8, 1, 9, 1, 10, fp])
    vendor = b"aeabi\0" + bytes([1]) + struct.pack("<I", 1 + 4 + len(tags)) + tags
    return b"A" + struct.pack("<I", 4 + len(vendor)) + vendor


def build_object(name, code, thumb, relocs, pools, attributes, local_symbols=None, analysed_size=None, weak=(),
                 space=False, symbol_size=None):
    """ELF32 ARM relocatable object holding `code` as the function `name`: `.text`, `.rel.text`,
    `.ARM.attributes`, `.symtab` (section symbol, `$a`/`$t`/`$d` mapping symbols, local symbols, the
    function, undefined callees), `.strtab`, `.shstrtab`. `local_symbols`: {key a relocation names:
    (symbol name, offset)}, e.g. armcc's `__switch$$` that a switch table's words are relative to.
    `space`: the function is compiled at -Ospace (its symbol size rule differs); `symbol_size`: the
    function symbol's size as armcc gave it, when rebuilding a compiled object."""
    local_symbols = local_symbols or {}
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
    local_index = {}
    for key, (local_name, value) in local_symbols.items():
        local_index[key] = len(symbols)
        symbols.append((strtab.add(local_name), 0x02, 1, value, 0))  # STB_LOCAL, STT_FUNC
    first_global = len(symbols)
    function = strtab.add(name)
    # A pool that ends the section follows the function's last instruction outside its symbol, unless
    # a VLDR reads it or an ADR addresses a string in it: armcc's symbol then spans the section (at
    # -Otime; at -Ospace it stops before the pool all the same).
    size = pools[-1][0] if pools and pools[-1][1] == len(code) else len(code)
    if not thumb and not space and size < len(code) and reads_tail(code, pools, size):
        size = len(code)
    # A Thumb function's pool is word-aligned: the 0x0000 halfword padding before it is not code
    # (armcc's symbol stops before it, as the analysed size does).
    if thumb and analysed_size == size - 2 and code[size - 2:size] == b"\0\0":
        size = analysed_size
    if symbol_size is not None:
        size = symbol_size
    symbols.append((function, 0x12, 1, 1 if thumb else 0, size))
    index_of = {}
    for _, symbol, _ in relocs:
        if symbol == name or symbol in index_of or symbol in local_index:
            continue
        index_of[symbol] = len(symbols)
        symbols.append((strtab.add(symbol), 0x20 if symbol in weak else 0x10, 0, 0, 0))  # STB_WEAK / STB_GLOBAL

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
            index = first_global if symbol == name else local_index.get(symbol) or index_of[symbol]
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
    def __init__(self, program, functions, data_regions, objects=None, object_sizes=None, numbers=None):
        self.program = program
        self.functions = functions                            # {address: (name, size, thumb)}
        self.names = {a: f[0] for a, f in functions.items()}
        self.objects = objects or {}                          # {address: name} of named globals
        self.sized = sorted((object_sizes or {}).items())     # [(address, size)] of named globals with a size
        self.thumb = {a for a, f in functions.items() if f[2]}
        self.starts = sorted(functions)
        self.data = data_regions                              # [(start, end)] of the non-executable sections
        self.numbers = numbers or set()                       # pool words that are numbers, not addresses

    def resolve(self, value):
        """The symbol a literal-pool word names: a function (a Thumb one by its address with the low bit
        set), or `DAT_<address>` for an address in a data section."""
        function = value & ~1 if value & 1 and (value & ~1) in self.thumb else value
        if function in self.names:
            return self.names[function]
        if value not in self.numbers and any(start <= value < end for start, end in self.data):
            return self.objects.get(value, f"DAT_{value:08x}")
        return None

    def target_object(self, address, attributes, space=False):
        """The object bytes of the function at `address`, or None when it has none. `space`: the
        unit is compiled at -Ospace."""
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
        # The pools a function's loads read and the strings it addresses follow its last instruction
        # and belong to its object: take them in while they end before the next function.
        following = bisect.bisect_right(self.starts, address)
        following = self.starts[following] if following < len(self.starts) else None
        while end > len(code) and (following is None or address + end <= following):
            longer = self.program.read(address, end)
            if longer is None:
                break
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
            addend = 0
            inside = next(((start, length) for start, length in self.sized if start < value < start + length), None)
            if symbol is not None and inside and symbol.startswith("DAT_"):
                symbol, addend = self.objects[inside[0]], value - inside[0]
            if symbol is not None:
                struct.pack_into("<I", code, at, addend)
                relocs.append((at, symbol, 2))  # R_ARM_ABS32
        relocs += relocate_branches(address, code, thumb, branches)
        # A switch's case table is what armcc emits before linking: each word the case's offset from a
        # local `__switch$$` symbol on the `b default` after `ldr pc, [pc, rM, lsl #2]`, relocated.
        local_symbols = {}
        if not thumb:
            for at in range(0, len(code) - 3, 4):
                if any(start <= at < end for start, end in pools) or not switch_table(code, at):
                    continue
                table, count = switch_table(code, at)
                key = f"__switch$$@{at + 4:x}"
                local_symbols[key] = ("__switch$$", at + 4)
                for entry in range(table, table + count * 4, 4):
                    value = struct.unpack_from("<I", code, entry)[0]
                    if address <= value < address + len(code):
                        struct.pack_into("<I", code, entry, (value - (address + at + 4)) & 0xFFFFFFFF)
                        relocs.append((entry, key, 2))  # R_ARM_ABS32
        relocs.sort(key=lambda r: r[0])
        return build_object(name, bytes(code), thumb, relocs, pools, attributes, local_symbols, size, space=space)


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
        built = Module(program, functions, data, read_objects(ROOT / module["symbols"]), read_object_sizes(ROOT / module["symbols"]),
                       read_numbers((ROOT / module["symbols"]).parent / "numbers.txt"))
        for unit in units:
            address = int(unit["address"], 16)
            if address not in functions:
                print(f"{unit['target']}: no function at {address:#x} in {module['symbols']}; skipped", file=sys.stderr)
                skipped += 1
                continue
            body = built.target_object(address, attributes, "-Ospace" in unit.get("cflags", ()))
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

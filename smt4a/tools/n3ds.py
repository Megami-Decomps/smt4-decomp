#!/usr/bin/env python3
"""Nintendo 3DS program loader shared by tools/split.py and tools/relink.py.

Reads the ARM11 code set of a decrypted dump without romwright:

* an NCCH (`.cxi`, `.cfa`-style executable content): header, extended header
  (exheader), ExeFS `.code`, backward-LZ ("BLZ") decompression when the
  exheader says the code is compressed, and the exheader's code-set segments
  (`.text`, `.rodata`, `.data`, `.bss` with their load addresses);
* an NCSD (`.3ds`, `.cci` cartridge): the executable partition (partition 0,
  or the one named `partition<N>`);
* a decrypted CIA (an eShop title or update): its first content, an NCCH.

Only the parts of the file that are needed are read, so a multi-gigabyte card
dump is cheap to open. Encrypted content (secure NCCH keys, an encrypted CIA) is refused
with a message: this loader does no cryptography.

    import n3ds
    program = n3ds.open_program("orig/game.cxi")
    program.read(0x100000, 16)                       # bytes mapped at an address, as romwright reads them
    base, code, segments = n3ds.load_code("orig/game.cxi")

Standard library only.
"""
import struct


class ImageError(Exception):
    """The file is not a program this loader can read."""


def blz_decompress(data):
    """3DS/DS backward LZ (`.code` with exheader flag bit 0): `size >> 12` + 3 bytes
    from distance `size & 0xFFF` + 3, read from the end of the data backwards."""
    if len(data) < 8:
        raise ImageError(".code is too short for its compression footer")
    footer, extra = struct.unpack_from("<II", data, len(data) - 8)
    header_len, encoded_len = footer >> 24, footer & 0xFFFFFF
    if header_len < 8 or header_len > len(data) or encoded_len > len(data) or encoded_len < header_len:
        raise ImageError(".code has a corrupt compression footer")
    out = bytearray(data) + bytearray(extra)
    src, dst, end = len(data) - header_len, len(out), len(data) - encoded_len
    while src > end:
        src -= 1
        flags = data[src]
        for _ in range(8):
            if src <= end:
                break
            if flags & 0x80:
                src -= 2
                if src < end or dst < 3:
                    raise ImageError(".code is corrupt (compressed data runs out)")
                segment = data[src] | data[src + 1] << 8
                count, distance = (segment >> 12) + 3, (segment & 0xFFF) + 3
                if dst - count < 0 or dst - 1 + distance >= len(out):
                    raise ImageError(".code is corrupt (compressed copy out of range)")
                for _ in range(count):
                    dst -= 1
                    out[dst] = out[dst + distance]
            else:
                src -= 1
                dst -= 1
                if dst < 0:
                    raise ImageError(".code is corrupt (more literals than output)")
                out[dst] = data[src]
            flags <<= 1
    return bytes(out)


class Region:
    """A mapped range of the program: `size` bytes at `vaddr`, from `code[offset:]` (none for .bss)."""

    # flags as romwright maps them: 1 write, 2 read, 4 execute
    def __init__(self, name, vaddr, size, offset, flags):
        self.name, self.vaddr, self.size, self.offset, self.flags = name, vaddr, size, offset, flags

    @property
    def executable(self):
        return bool(self.flags & 4)


class Program:
    """The ARM11 code set of one NCCH: `.code` and where the kernel maps it."""

    def __init__(self, base, code, segments, regions):
        self.base = base            # load address of .text
        self.code = code            # decompressed .code (text, rodata, data, each padded to its pages)
        self.segments = segments    # {"text"|"rodata"|"data"|"bss": (start, end)} by the exheader's byte sizes
        self.regions = regions

    def read(self, address, size):
        """`size` bytes at `address`, or None unless the whole range lies in one mapped region
        (.bss reads as zeros), which is what romwright's image reader does."""
        for region in self.regions:
            if region.vaddr <= address and address + size <= region.vaddr + region.size:
                if region.offset is None:
                    return bytes(size)
                start = region.offset + address - region.vaddr
                return self.code[start:start + size]
        return None


def _word(data, at):
    return struct.unpack_from("<I", data, at)[0]


def _regions(exheader, entry, code):
    """The code set as the kernel maps it: text, rodata and data back to back in `.code`,
    each padded to its page count, .bss after .data. A code set that does not tile `.code`
    that way is one read/write/execute region."""
    layout, offset, fits = [], 0, True
    for name, at, flags in ((".text", 0x10, 6), (".rodata", 0x20, 2), (".data", 0x30, 3)):
        address, pages, size = _word(exheader, at), _word(exheader, at + 4), _word(exheader, at + 8)
        if size == 0 and pages == 0:
            continue
        span = pages * 0x1000
        fits &= size <= span
        layout.append((name, address, offset, span, flags))
        offset += span
    tiles = (fits and layout and layout[0][1] == entry and offset == len(code)
             and all(a[1] + a[3] <= b[1] for a, b in zip(layout, layout[1:])))
    if not tiles:
        return [Region(".code", entry, len(code), 0, 7)]
    regions = [Region(name, address, span, start, flags) for name, address, start, span, flags in layout]
    data_address, data_size, bss_size = _word(exheader, 0x30), _word(exheader, 0x38), _word(exheader, 0x3C)
    mapped_end = layout[-1][1] + layout[-1][3]
    bss_end = data_address + data_size + bss_size
    if bss_size > 0 and bss_end > mapped_end:
        regions.append(Region(".bss", mapped_end, bss_end - mapped_end, None, 3))
    return regions


def _ncch_program(handle, base, label):
    handle.seek(base)
    header = handle.read(0x200)
    if len(header) < 0x200 or header[0x100:0x104] != b"NCCH":
        raise ImageError(f"{label}: not an NCCH")
    version = struct.unpack_from("<H", header, 0x112)[0]
    flags = header[0x188:0x190]
    if version == 1:
        unit = 1
    elif version in (0, 2):
        if flags[6] > 8:
            raise ImageError(f"{label}: NCCH content-unit shift out of range")
        unit = 0x200 << flags[6]
    else:
        raise ImageError(f"{label}: unsupported NCCH version {version}")
    exheader_size = _word(header, 0x180)
    exefs_offset, exefs_size = _word(header, 0x1A0) * unit, _word(header, 0x1A4) * unit
    if exefs_size == 0:
        raise ImageError(f"{label}: NCCH has no ExeFS (a data archive, not the program)")
    if exheader_size < 0x40:
        raise ImageError(f"{label}: NCCH has no usable extended header, so the load address of .code is unknown")
    handle.seek(base + 0x200)
    exheader = handle.read(min(exheader_size, 0x400))
    if len(exheader) < 0x40:
        raise ImageError(f"{label}: truncated NCCH extended header")
    # ctrtool's rule: an exheader whose program id (at +0x200 of the exheader) already equals
    # the header's was decrypted; so is a dump flagged NoCrypto. Anything else is AES-CTR.
    plaintext = flags[7] & 0x04 != 0 or (len(exheader) >= 0x208 and exheader[0x200:0x208] == header[0x118:0x120])
    if not plaintext:
        raise ImageError(
            f"{label}: this NCCH is encrypted. Decrypt it first (GodMode9 'NCCH image options > Decrypt file', "
            "or decrypt with ctrtool); this loader does no cryptography. "
            "(`romwright-cli new-project --keys` decrypts it in memory, but tools/split.py needs the decrypted file.)"
        )
    handle.seek(base + exefs_offset)
    table = handle.read(0x200)
    for index in range(10):
        name, offset, size = struct.unpack_from("<8sII", table, index * 16)
        if name.rstrip(b"\0") == b".code":
            break
    else:
        raise ImageError(f"{label}: ExeFS has no .code")
    if offset + 0x200 + size > exefs_size:
        raise ImageError(f"{label}: ExeFS .code runs past the ExeFS end")
    handle.seek(base + exefs_offset + 0x200 + offset)
    stored = handle.read(size)
    if len(stored) != size:
        raise ImageError(f"{label}: truncated ExeFS .code")
    entry = _word(exheader, 0x10)
    if entry == 0:
        raise ImageError(f"{label}: the exheader names a zero text address")
    code = blz_decompress(stored) if exheader[0x0D] & 1 else stored
    segments = {
        "text": (_word(exheader, 0x10), _word(exheader, 0x10) + _word(exheader, 0x18)),
        "rodata": (_word(exheader, 0x20), _word(exheader, 0x20) + _word(exheader, 0x28)),
        "data": (_word(exheader, 0x30), _word(exheader, 0x30) + _word(exheader, 0x38)),
        "bss": (_word(exheader, 0x30) + _word(exheader, 0x38), _word(exheader, 0x30) + _word(exheader, 0x38) + _word(exheader, 0x3C)),
    }
    return Program(entry, code, segments, _regions(exheader, entry, code))


def open_program(path, module=None):
    """The program of an NCCH or NCSD file. `module` is romwright's module id (config/modules.json):
    `_code` for an NCCH, `partition<N>` for NCSD partition N (default: the first executable one)."""
    with open(path, "rb") as handle:
        head = handle.read(0x200)
        if len(head) >= 0x20 and head[0:4] == b"\x20\x20\x00\x00" and head[8:12] == b"\x00\x0a\x00\x00":  # CIA: 0x2020 header, 0xA00 certs
            # CIA: header, certificate chain, ticket, TMD, then the contents, each 64-byte aligned;
            # content 0 is the program. A decrypted CIA (title-key layer removed) holds it as plain NCCH.
            header_size, _, _, cert_size, ticket_size, tmd_size = struct.unpack_from("<IHHIII", head, 0)
            align = lambda size: (size + 63) // 64 * 64
            content = align(header_size) + align(cert_size) + align(ticket_size) + align(tmd_size)
            handle.seek(content)
            if handle.read(0x104)[0x100:0x104] != b"NCCH":
                raise ImageError(f"{path}: a CIA whose contents are encrypted with its title key; "
                                 "decrypt the CIA first (this loader does no cryptography)")
            return _ncch_program(handle, content, f"{path} (CIA content 0)")
        if head[0x100:0x104] == b"NCCH":
            return _ncch_program(handle, 0, str(path))
        if head[0x100:0x104] != b"NCSD":
            raise ImageError(f"{path}: neither an NCCH nor an NCSD image")
        unit = 1 << (9 + head[0x188 + 6])
        wanted = None
        if module and module.startswith("partition") and module[9:].isdigit():
            wanted = [int(module[9:])]
        failures = []
        for index in wanted if wanted is not None else range(8):
            offset, size = struct.unpack_from("<II", head, 0x120 + index * 8) if index < 8 else (0, 0)
            if size == 0:
                continue
            try:
                return _ncch_program(handle, offset * unit, f"{path} partition {index}")
            except ImageError as error:
                failures.append(str(error))
        raise ImageError(failures[0] if failures else f"{path}: NCSD holds no executable NCCH partition")


def load_code(image, module=None):
    """(text base, decompressed .code, segments) of an NCCH/NCSD image, as tools/relink.py and
    tools/assign_tus.py use them. A failure exits with its message."""
    try:
        program = open_program(image, module)
    except ImageError as error:
        raise SystemExit(str(error))
    return program.base, program.code, program.segments

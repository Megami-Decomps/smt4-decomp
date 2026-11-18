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


MAX_CODE = 64 << 20  # largest decompressed .code accepted (real ones are a few MiB); the Rust loader's cap


def blz_decompress(data):
    """3DS/DS backward LZ (`.code` with exheader flag bit 0): `size >> 12` + 3 bytes
    from distance `size & 0xFFF` + 3, read from the end of the data backwards.

    The footer is `encoded_len` (24 bits, payload plus footer) and `header_len` (8 bits, the
    footer), then `extra`, the growth: output = len(data) + extra bytes, at most 64 MiB. Bytes
    below `len(data) - encoded_len` are an uncompressed prefix, so a sound stream's write cursor
    ends exactly there; anything else is refused, as the Rust loader does."""
    size = len(data)
    if size < 9:
        raise ImageError(".code is too short for its compression footer")
    footer, extra = struct.unpack_from("<II", data, size - 8)
    header_len, encoded_len = footer >> 24, footer & 0xFFFFFF
    if size + extra > MAX_CODE:
        raise ImageError(".code decompresses past the 64 MiB size cap")
    if header_len < 8 or header_len >= size:
        raise ImageError(".code has a corrupt compression footer (footer length out of range)")
    if encoded_len <= header_len or encoded_len > size:
        raise ImageError(".code has a corrupt compression footer (compressed length out of range)")
    out = bytearray(data) + bytearray(extra)
    src, dst, end = size - header_len, len(out), size - encoded_len
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
    if dst != end:
        raise ImageError(".code length does not match its compression footer")
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


def _slice(handle, base, limit, at, length, label, what):
    """`length` bytes at `at` within the NCCH that starts at file offset `base`, refusing any range
    that is not wholly inside `[0, limit)` (the partition's extent), as the Rust importer's slice does."""
    if at < 0 or length < 0 or at + length > limit:
        raise ImageError(f"{label}: {what} runs past the end of its partition")
    handle.seek(base + at)
    data = handle.read(length)
    if len(data) != length:
        raise ImageError(f"{label}: truncated {what}")
    return data


def _ncch_program(handle, base, size, label):
    """The program of the NCCH at file offset `base`, `size` bytes long (its partition's, content
    0's, or the file's): every read stays inside `[base, base + size)`."""
    if size < 0x200:
        raise ImageError(f"{label}: not an NCCH")
    header = _slice(handle, base, size, 0, 0x200, label, "NCCH header")
    if header[0x100:0x104] != b"NCCH":
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
    content_units = _word(header, 0x104)
    limit = size
    if content_units:
        if content_units * unit > size:
            raise ImageError(f"{label}: NCCH content size overruns its partition")
        limit = content_units * unit
    exheader_size = _word(header, 0x180)
    exefs_offset, exefs_size = _word(header, 0x1A0) * unit, _word(header, 0x1A4) * unit
    if exefs_size == 0:
        raise ImageError(f"{label}: NCCH has no ExeFS (a data archive, not the program)")
    if exheader_size < 0x40:
        raise ImageError(f"{label}: NCCH has no usable extended header, so the load address of .code is unknown")
    exheader = _slice(handle, base, limit, 0x200, min(exheader_size, 0x400), label, "NCCH extended header")
    if 0x200 + exheader_size > limit:
        raise ImageError(f"{label}: NCCH extended header runs past the end of its partition")
    # ctrtool's rule: an exheader whose program id (at +0x200 of the exheader) already equals
    # the header's was decrypted; so is a dump flagged NoCrypto. Anything else is AES-CTR.
    plaintext = flags[7] & 0x04 != 0 or (len(exheader) >= 0x208 and exheader[0x200:0x208] == header[0x118:0x120])
    if not plaintext:
        raise ImageError(
            f"{label}: this NCCH is encrypted. Decrypt it first (GodMode9 'NCCH image options > Decrypt file', "
            "or decrypt with ctrtool); this loader does no cryptography. "
            "(`romwright-cli new-project --keys` decrypts it in memory, but tools/split.py needs the decrypted file.)"
        )
    if exefs_offset + exefs_size > limit:
        raise ImageError(f"{label}: NCCH ExeFS runs past the end of its partition")
    if exefs_size < 0x200:
        raise ImageError(f"{label}: ExeFS is smaller than its 0x200-byte header")
    table = _slice(handle, base, limit, exefs_offset, 0x200, label, "ExeFS header")
    for index in range(10):
        name, offset, size = struct.unpack_from("<8sII", table, index * 16)
        if name.rstrip(b"\0") == b".code":
            break
    else:
        raise ImageError(f"{label}: ExeFS has no .code")
    if offset + 0x200 + size > exefs_size:
        raise ImageError(f"{label}: ExeFS .code runs past the ExeFS end")
    stored = _slice(handle, base, limit, exefs_offset + 0x200 + offset, size, label, "ExeFS .code")
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


def _tmd_chunks(tmd, label):
    """(index, type, size) of every content chunk record in a TMD (3dbrew "Title metadata")."""
    if len(tmd) < 4:
        raise ImageError(f"{label}: TMD too short for a signature type")
    sig_type = struct.unpack_from(">I", tmd, 0)[0]
    # signature bytes plus padding to 64, by signature type (RSA-4096, RSA-2048, ECDSA; SHA-256 and SHA-1 ids)
    sig_len = {0x010000: 0x23C, 0x010003: 0x23C, 0x010001: 0x13C, 0x010004: 0x13C, 0x010002: 0x7C, 0x010005: 0x7C}
    if sig_type not in sig_len:
        raise ImageError(f"{label}: TMD has unknown signature type {sig_type:#010x}")
    head = 4 + sig_len[sig_type]
    if len(tmd) < head + 0xC4:
        raise ImageError(f"{label}: TMD too short for its header")
    count = struct.unpack_from(">H", tmd, head + 0x9E)[0]
    if count == 0:
        raise ImageError(f"{label}: TMD carries no contents")
    if count > 512:
        raise ImageError(f"{label}: TMD content count out of range")
    chunks = head + 0x9C4
    if chunks + count * 0x30 > len(tmd):
        raise ImageError(f"{label}: TMD content records run past the TMD end")
    return [struct.unpack_from(">HHQ", tmd, chunks + i * 0x30 + 4) for i in range(count)]


def _cia_content(handle, head, file_size, path):
    """(offset, size) of a CIA's main content (TMD index 0, else the first chunk): the header, certificate
    chain, ticket and TMD, each padded to 64 bytes, then the contents packed back to back in chunk order."""
    label = f"{path} (CIA)"
    header_size, _, _, cert_size, ticket_size, tmd_size = struct.unpack_from("<IHHIII", head, 0)
    content_size = struct.unpack_from("<Q", head, 0x18)[0]
    align = lambda value: (value + 63) // 64 * 64
    cert_offset = align(header_size)
    ticket_offset = align(cert_offset + cert_size)
    tmd_offset = align(ticket_offset + ticket_size)
    content_offset = align(tmd_offset + tmd_size)
    for name, start, length in (("certificate chain", cert_offset, cert_size), ("ticket", ticket_offset, ticket_size),
                                ("TMD", tmd_offset, tmd_size)):
        if start + length > file_size:
            raise ImageError(f"{label}: {name} runs past the end of the file")
    if tmd_size == 0:
        raise ImageError(f"{label}: no TMD")
    handle.seek(tmd_offset)
    chunks = _tmd_chunks(handle.read(tmd_size), label)
    cursor, first, selected = content_offset, None, None
    for chunk in chunks:
        if first is None:
            first = (cursor, chunk)
        if chunk[0] == 0 and selected is None:
            selected = (cursor, chunk)
        cursor += chunk[2]
    offset, (_, kind, size) = selected or first
    if size == 0:
        raise ImageError(f"{label}: main content is empty")
    if size > content_size:
        raise ImageError(f"{label}: content record overruns the declared content size")
    if offset + size > file_size:
        raise ImageError(f"{label}: content 0 runs past the end of the file")
    handle.seek(offset)
    if handle.read(0x104)[0x100:0x104] != b"NCCH":
        if kind & 1:
            raise ImageError(f"{path}: a CIA whose contents are encrypted with its title key; "
                             "decrypt the CIA first (this loader does no cryptography)")
        raise ImageError(f"{label}: main content is not an NCCH image")
    return offset, size


def open_program(path, module=None):
    """The program of an NCCH or NCSD file. `module` is romwright's module id (config/modules.json):
    `_code` for an NCCH, `partition<N>` for NCSD partition N (default: the first executable one)."""
    with open(path, "rb") as handle:
        handle.seek(0, 2)
        file_size = handle.tell()
        handle.seek(0)
        head = handle.read(0x200)
        if len(head) >= 0x20 and head[0:4] == b"\x20\x20\x00\x00" and head[8:12] == b"\x00\x0a\x00\x00":  # CIA: 0x2020 header, 0xA00 certs
            # CIA: content 0 is the program, bounded by its TMD chunk's size. A decrypted CIA
            # (title-key layer removed) holds it as plain NCCH.
            offset, size = _cia_content(handle, head, file_size, path)
            return _ncch_program(handle, offset, size, f"{path} (CIA content 0)")
        if head[0x100:0x104] == b"NCCH":
            return _ncch_program(handle, 0, file_size, str(path))
        if head[0x100:0x104] != b"NCSD":
            raise ImageError(f"{path}: neither an NCCH nor an NCSD image")
        if head[0x188 + 6] > 8:
            raise ImageError(f"{path}: NCSD content-unit shift out of range")
        unit = 1 << (9 + head[0x188 + 6])
        wanted = None
        if module and module.startswith("partition") and module[9:].isdigit():
            wanted = [int(module[9:])]
        failures = []
        for index in wanted if wanted is not None else range(8):
            offset, size = struct.unpack_from("<II", head, 0x120 + index * 8) if index < 8 else (0, 0)
            if size == 0:
                continue
            start, length = offset * unit, size * unit
            if start + length > file_size:
                failures.append(f"{path}: NCSD partition {index} runs past the end of the file")
                continue
            try:
                return _ncch_program(handle, start, length, f"{path} partition {index}")
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

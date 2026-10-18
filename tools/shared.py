#!/usr/bin/env python3
"""Find the functions SMT IV and SMT IV: Apocalypse share, and what matching one game gives the other.

Both games were built from one engine (AsdSDK), one SDK and much of one game
(`sdds4`), so thousands of functions compile from the same source. Two
functions are twins when they have the same size and instruction set and the
same bytes once the parts the linker sets are masked: every call/branch target
and every literal-pool word that is an address inside the image's mapped
segments (Thumb bit allowed). The pool words the function's PC-relative loads
read are part of its signature even when the pool lies past its recorded size,
and every other word (floats, constants) must match exactly. A function with
more than one candidate in the other game is not paired.

For each pair the report says how far each game is (objdiff, from
`<game>/build/report.json`). A function matched in one game and not the other
is a porting candidate: the matched C, with the twin's names for its calls and
data, is very likely the twin's matching C too.

    python3 tools/shared.py                 summary
    python3 tools/shared.py --list ported   matched in one game only (source paths of both)
    python3 tools/shared.py --json build/shared.json

Standard library only; reads `<game>/orig/<dump>` through each game's tools/n3ds.py.
"""
import argparse
import collections
import importlib.util
import json
import re
import struct
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parent.parent
GAMES = ("smt4", "smt4a")
SYMBOL = re.compile(r"(\S+) = \S+:0x([0-9a-fA-F]+); // type:function size:0x([0-9a-fA-F]+) mode:(\w+)")


def load_game(name):
    root = REPO / name
    spec = importlib.util.spec_from_file_location(f"n3ds_{name}", root / "tools" / "n3ds.py")
    n3ds = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(n3ds)
    project = json.loads((root / "config" / "project.json").read_text())
    image = root / project["image"]["orig"]
    if not image.exists():
        raise SystemExit(f"{name}: {image.relative_to(REPO)} not found: both games' dumps are needed (see README.md)")
    base, code, segments = n3ds.load_code(image)
    functions = {}
    for line in (root / "config" / "symbols.txt").read_text().splitlines():
        match = SYMBOL.match(line)
        if match:
            functions[int(match[2], 16)] = (match[1], int(match[3], 16), match[4] == "thumb")
    sources = {int(unit["address"], 16): unit.get("source") for unit in project["units"]}
    scores = {}
    report = root / "build" / "report.json"
    if report.exists():
        for unit in json.loads(report.read_text())["units"]:
            for function in unit.get("functions", []):
                scores[function["name"]] = function.get("fuzzy_match_percent", 0.0)
    return {"name": name, "base": base, "code": code,
            "spans": [segments[part] for part in ("text", "rodata", "data", "bss") if part in segments],
            "functions": functions, "sources": sources, "scores": scores}


def literal_reads(game, address, size, thumb):
    """Byte offsets (from the function's start) of the aligned words its PC-relative loads read:
    A32 LDR/LDRB/LDRH/LDRSB/LDRSH/LDRD/VLDR and Thumb LDR with PC as the base. Pools can lie
    past `size`. One pass in address order, so a pool word inside the function is data once the
    scan reaches it and is not decoded. Also returns the offsets of the BL/BLX/B instructions."""
    offset = address - game["base"]
    code = game["code"]
    skew = address % 4  # pool words are aligned to the address, not the function
    words, data, branches = set(), set(), []

    def read(at, count):
        if at < 0:
            return
        first = ((at + skew) & ~3) - skew
        for word in range(first, at + count, 4):
            if 0 <= word and offset + word + 4 <= len(code):
                words.add(word)
                data.add(word)

    if thumb:
        at = 0
        while at + 2 <= size:
            half, = struct.unpack_from("<H", code, offset + at)
            if ((at + skew) & ~3) - skew in data:
                at += 2
            elif half & 0xF800 == 0x4800:  # LDR Rt, [PC, #imm8*4]
                read(((at + skew + 4) & ~3) - skew + (half & 0xFF) * 4, 4)
                at += 2
            elif half & 0xF800 == 0xF000 and at + 4 <= size:  # BL / BLX pair
                second, = struct.unpack_from("<H", code, offset + at + 2)
                if second & 0xD000 == 0xD000 or second & 0xD001 == 0xC000:
                    branches.append(at)
                    at += 4
                else:
                    at += 2
            else:
                at += 2
    else:
        for at in range(0, size - 3, 4):
            if at in data:
                continue
            word, = struct.unpack_from("<I", code, offset + at)
            if word >> 28 == 0xF:
                if word >> 25 == 0x7D:  # BLX imm
                    branches.append(at)
                continue
            if word >> 25 & 7 == 5:  # B / BL
                branches.append(at)
                continue
            base = at + 8
            if word & 0x0F7F0000 == 0x051F0000 or word & 0x0F7F0000 == 0x055F0000:  # LDR / LDRB Rt, [PC, #+/-imm12]
                read(base + (word & 0xFFF if word >> 23 & 1 else -(word & 0xFFF)), 1 if word >> 22 & 1 else 4)
            elif word & 0x0F7F00F0 in (0x014F00D0, 0x015F00B0, 0x015F00D0, 0x015F00F0):  # LDRD / LDRH / LDRSB / LDRSH
                imm = (word >> 4 & 0xF0) | (word & 0xF)
                kind = word & 0xF0
                read(base + (imm if word >> 23 & 1 else -imm), 8 if kind == 0xD0 and not word >> 20 & 1 else 2 if kind != 0xD0 else 1)
            elif word & 0x0F3F0E00 == 0x0D1F0A00:  # VLDR Sd/Dd, [PC, #+/-imm8*4]
                imm = (word & 0xFF) * 4
                read(base + (imm if word >> 23 & 1 else -imm), 8 if word >> 8 & 1 else 4)
    return sorted(words), branches


def masked(game, address, size, thumb):
    """What identifies the function apart from what the linker decides: its bytes with every
    branch target and every pool word that is an address of the image blanked, and the pool
    words its PC-relative loads read past its end (floats and constants compare exactly)."""
    offset = address - game["base"]
    code = game["code"]
    out = bytearray(code[offset:offset + size])
    words, branches = literal_reads(game, address, size, thumb)
    for at in branches:
        if thumb:
            first, second = struct.unpack_from("<HH", out, at)
            struct.pack_into("<HH", out, at, 0xF000, second & 0xD000)  # keep BL against BLX
        else:
            word, = struct.unpack_from("<I", out, at)
            struct.pack_into("<I", out, at, 0xFA000000 if word >> 28 == 0xF else word & 0xFF000000)
    tail = []
    for at in words:
        word, = struct.unpack_from("<I", code, offset + at)
        if any(start <= (word & 0xFFFFFFFE) <= end for start, end in game["spans"]):
            word = 0x11111111  # an address in the image
        if at + 4 <= size:
            struct.pack_into("<I", out, at, word)
        else:
            tail.append((at, word))
    return bytes(out), tuple(tail)


def pairs(left, right):
    index = collections.defaultdict(list)
    for address, (_, size, thumb) in right["functions"].items():
        index[(size, thumb, masked(right, address, size, thumb))].append(address)
    seen = collections.Counter()
    found = []
    for address, (_, size, thumb) in left["functions"].items():
        hits = index.get((size, thumb, masked(left, address, size, thumb)), [])
        if len(hits) == 1:
            found.append((address, hits[0]))
            seen[hits[0]] += 1
    return [(a, b) for a, b in found if seen[b] == 1]


def main():
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("--min-size", type=int, default=8, help="ignore functions smaller than this (bytes)")
    parser.add_argument("--list", choices=["ported", "all"], help="print pairs: matched in one game only, or every pair")
    parser.add_argument("--json", help="write every pair to this file")
    args = parser.parse_args()

    left, right = (load_game(name) for name in GAMES)
    found = [(a, b) for a, b in pairs(left, right) if left["functions"][a][1] >= args.min_size]
    rows = []
    for a, b in found:
        name_a, size, thumb = left["functions"][a]
        name_b = right["functions"][b][0]
        rows.append({
            "size": size, "thumb": thumb,
            GAMES[0]: {"address": f"{a:#x}", "function": name_a, "source": left["sources"].get(a),
                       "score": left["scores"].get(name_a)},
            GAMES[1]: {"address": f"{b:#x}", "function": name_b, "source": right["sources"].get(b),
                       "score": right["scores"].get(name_b)},
        })
    done = lambda row, game: (row[game]["score"] or 0) >= 100
    both = sum(1 for row in rows if done(row, GAMES[0]) and done(row, GAMES[1]))
    only = [row for row in rows if done(row, GAMES[0]) != done(row, GAMES[1])]
    total = {game: sum(1 for (_, s, _) in g["functions"].values() if s >= args.min_size) for game, g in zip(GAMES, (left, right))}
    print(f"{len(rows)} twin functions ({sum(r['size'] for r in rows):,} bytes): "
          + ", ".join(f"{100 * len(rows) / total[g]:.0f}% of {g}'s {total[g]}" for g in GAMES))
    print(f"matched in both: {both}; matched in one only (porting candidates): {len(only)} "
          f"({sum(1 for r in only if done(r, GAMES[0]))} {GAMES[0]} -> {GAMES[1]}, "
          f"{sum(1 for r in only if done(r, GAMES[1]))} {GAMES[1]} -> {GAMES[0]})")
    if args.list:
        for row in (only if args.list == "ported" else rows):
            print(f"{row[GAMES[0]]['source'] or row[GAMES[0]]['function']}  <->  {row[GAMES[1]]['source'] or row[GAMES[1]]['function']}"
                  f"  ({row[GAMES[0]]['score']}% / {row[GAMES[1]]['score']}%)")
    if args.json:
        Path(args.json).parent.mkdir(parents=True, exist_ok=True)
        Path(args.json).write_text(json.dumps(rows, indent=1) + "\n")
        print(f"wrote {args.json}")


if __name__ == "__main__":
    sys.exit(main())

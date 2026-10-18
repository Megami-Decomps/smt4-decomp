#!/usr/bin/env python3
"""Find the functions SMT IV and SMT IV: Apocalypse share, and what matching one game gives the other.

Both games were built from one engine (AsdSDK), one SDK and much of one game
(`sdds4`), so thousands of functions compile from the same source. Two
functions are twins when they have the same size and instruction set and the
same bytes once every call/branch target and every address-like word
(literal-pool entries pointing into either image) is masked: those are the
parts the linker sets, the rest is what the compiler wrote. A function with
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
    base, code, _ = n3ds.load_code(image)
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
    return {"name": name, "base": base, "code": code, "functions": functions, "sources": sources, "scores": scores}


def masked(game, address, size, thumb):
    """The function's bytes with what the linker decides blanked out."""
    offset = address - game["base"]
    out = bytearray(game["code"][offset:offset + size])
    start = 0
    if thumb:
        i = 0
        while i + 4 <= len(out):
            first, second = struct.unpack_from("<HH", out, i)
            if first >> 11 == 0x1E and second >> 11 in (0x1F, 0x1D):  # BL / BLX pair
                out[i:i + 4] = b"\xff" * 4
                i += 4
            else:
                i += 2
        start = (4 - address % 4) % 4  # pool words are aligned to the address, not the function
    for i in range(start, len(out) - 3, 4):
        word, = struct.unpack_from("<I", out, i)
        if not thumb and (word >> 25) & 7 == 5:  # B / BL: keep the condition and opcode
            word &= 0xFF000000
        elif 0x100000 <= word < 0x700000:  # an address in either image
            word = 0x11111111
        struct.pack_into("<I", out, i, word)
    return bytes(out)


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

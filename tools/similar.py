"""For each unproven function, the proven functions (either game) whose retail code looks most alike.

    python -B tools/similar.py [--top 3] [--min 0.6] [--out build/similar.tsv]

A function whose retail code is close to an already-matched one is usually written the same way: copy
that source's shape, types and helpers (a twin, a sibling setter, the same lookup or comparator).
This disassembles each game's relinked `.code` (byte-identical to retail; run `relink.py --matched`
first), reduces every ARM function to its mnemonic sequence, prefilters candidates by size and
mnemonic-trigram overlap, and ranks them by sequence similarity. Thumb functions are skipped.

Output rows: game, function, size, then up to --top `game:function:score` candidates (score 0-1).
"""

import argparse
import collections
import difflib
import glob
import json
import os
import re
import subprocess
from pathlib import Path

ROOT = Path(os.path.abspath(__file__)).parent.parent
GAMES = ("smt4", "smt4a")
BASE = 0x100000
LINE = re.compile(r"^\s*([0-9a-f]+):\s+[0-9a-f]{8}\s+(\S+)")


def mnemonics(game):
    """{address: mnemonic} for the whole .code, decoded as ARM."""
    tool = glob.glob(str(ROOT / game / "build" / "tools" / "binutils-arm-none-eabi" / "*" / "bin" / "arm-none-eabi-objdump*"))[0]
    code = ROOT / game / "build" / "relink" / "code.bin"
    out = subprocess.run([tool, "-D", "-b", "binary", "-marm", f"--adjust-vma={BASE:#x}", str(code)],
                         capture_output=True, text=True, errors="replace").stdout
    table = {}
    for line in out.splitlines():
        m = LINE.match(line)
        if m:
            # drop condition codes and suffixes so `ldrne`/`ldr` and `movs`/`mov` still differ but stay close
            table[int(m[1], 16)] = m[2]
    return table


def functions(game, table):
    units = json.loads((ROOT / game / "config" / "project.json").read_text(encoding="utf-8"))["units"]
    proven = set(json.loads((ROOT / game / "build" / "relink" / "proof.json").read_text())["proven"])
    third = {l.split()[1] for l in (ROOT / game / "config" / "third_party.txt").read_text(encoding="utf-8").splitlines()
             if l.strip() and not l.startswith("#")}
    result = []
    for unit in units:
        if unit.get("thumb"):
            continue
        start = int(unit["address"], 16)
        seq = [table[a] for a in range(start, start + unit["size"], 4) if a in table]
        if len(seq) < 4:
            continue
        result.append({"game": game, "name": unit["function"], "size": unit["size"], "seq": seq,
                       "grams": {tuple(seq[i:i + 3]) for i in range(len(seq) - 2)},
                       "proven": unit["function"] in proven, "third": unit["function"] in third})
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("--top", type=int, default=3)
    parser.add_argument("--min", type=float, default=0.6, help="lowest similarity to report")
    parser.add_argument("--out", default=str(ROOT / "build" / "similar.tsv"))
    args = parser.parse_args()
    everything = []
    for game in GAMES:
        everything += functions(game, mnemonics(game))
    proven = [f for f in everything if f["proven"]]
    by_gram = collections.defaultdict(list)
    for index, f in enumerate(proven):
        for g in f["grams"]:
            by_gram[g].append(index)
    rows = []
    for f in everything:
        if f["proven"] or f["third"]:
            continue
        counts = collections.Counter()
        for g in f["grams"]:
            bucket = by_gram.get(g, ())
            if len(bucket) < 400:          # skip trigrams every function has
                counts.update(bucket)
        scored = []
        for index, shared in counts.most_common(40):
            other = proven[index]
            if not 0.6 <= other["size"] / f["size"] <= 1.6:
                continue
            ratio = difflib.SequenceMatcher(None, f["seq"], other["seq"], autojunk=False).ratio()
            if ratio >= args.min:
                scored.append((ratio, other))
        scored.sort(key=lambda s: -s[0])
        if scored:
            rows.append((scored[0][0], f, scored[:args.top]))
    rows.sort(key=lambda r: -r[0])
    with open(args.out, "w", encoding="utf-8", newline="\n") as fh:
        fh.write("# game\tfunction\tsize\tcandidates (game:function:similarity)\n")
        for best, f, scored in rows:
            fh.write(f"{f['game']}\t{f['name']}\t{f['size']}\t" +
                     "\t".join(f"{o['game']}:{o['name']}:{r:.2f}" for r, o in scored) + "\n")
    print(f"{len(rows)} unproven functions have a proven look-alike >= {args.min}; wrote {args.out}")


if __name__ == "__main__":
    main()

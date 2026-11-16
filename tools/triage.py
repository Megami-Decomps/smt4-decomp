"""Sort the unproven functions by what stands between them and a match.

    python -B tools/triage.py [--games smt4,smt4a] [--jobs N] [--min-score S] [--out build/triage.tsv]

Runs `tools/fdiff.py` on every first-party function that `relink.py --matched` did not prove
(`<game>/build/relink/proof.json`, `config/third_party.txt`) and writes one row per function:

    game  function  objdiff%  size  retail_rows  built_rows  diff_lines  kind  source

`kind` is what the diff looks like:
- `identical`: fdiff prints IDENTICAL; something outside the source keeps it unproven (a target
  object, a size, an address): look at relink.py's reasons;
- `registers`: same rows, every differing row differs only in register names (allocation);
- `operands`: same rows and mnemonics, other operands differ (offsets, constants, branch targets);
- `order`: the same instructions in another order (scheduling);
- `shape`: rows added or removed;
- `empty`: the source defines nothing yet (no `.text`): the function still has to be written;
- `error`: the source did not compile.
Run a full build and `relink.py --matched` first; several fdiffs run at once (each compiles one unit).
"""

import argparse
import collections
import concurrent.futures
import json
import os
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(os.path.abspath(__file__)).parent.parent
REGISTER = re.compile(r"\b(?:r1[0-5]|r[0-9]|sl|fp|ip|sp|lr|pc|[sd][0-9]{1,2})\b")


def unproven(game, min_score):
    proof = json.loads((ROOT / game / "build" / "relink" / "proof.json").read_text())
    proven = set(proof["proven"])
    third = set()
    for line in (ROOT / game / "config" / "third_party.txt").read_text(encoding="utf-8").splitlines():
        if line.strip() and not line.startswith("#"):
            third.add(line.split()[1])
    report = json.loads((ROOT / game / "build" / "report.json").read_text())
    scores = {f["name"]: (f.get("fuzzy_match_percent") or 0.0, int(f.get("size", 0)))
              for u in report["units"] for f in u.get("functions", [])}
    units = json.loads((ROOT / game / "config" / "project.json").read_text(encoding="utf-8"))["units"]
    rows = []
    for unit in units:
        name = unit["function"]
        if name in proven or name in third:
            continue
        score, size = scores.get(name, (0.0, unit["size"]))
        if score >= min_score:
            rows.append((game, name, score, size, f"{game}/{unit['source']}"))
    return rows


def classify(output):
    lines = output.splitlines()
    if not lines:
        return "error", 0, 0, 0
    head = lines[0]
    if head.startswith("IDENTICAL"):
        return "identical", 0, 0, 0
    match = re.match(r"DIFFERS: .*retail (\d+) vs built (\d+) rows", head)
    if not match:
        return "error", 0, 0, 0
    retail_rows, built_rows = int(match[1]), int(match[2])
    removed = [l[1:] for l in lines[1:] if l.startswith("-") and not l.startswith("---")]
    added = [l[1:] for l in lines[1:] if l.startswith("+") and not l.startswith("+++")]
    count = len(removed) + len(added)
    if retail_rows != built_rows or len(removed) != len(added):
        return "shape", retail_rows, built_rows, count
    if sorted(removed) == sorted(added):
        return "order", retail_rows, built_rows, count
    strip = lambda row: REGISTER.sub("R", row)
    if all(strip(a) == strip(b) for a, b in zip(removed, added)):
        return "registers", retail_rows, built_rows, count
    if sorted(map(strip, removed)) == sorted(map(strip, added)):
        return "registers", retail_rows, built_rows, count  # renamed and reordered
    mnemonic = lambda row: row.split(None, 1)[0] if row.strip() else ""
    if [mnemonic(r) for r in removed] == [mnemonic(a) for a in added]:
        return "operands", retail_rows, built_rows, count
    return "order" if sorted(map(mnemonic, removed)) == sorted(map(mnemonic, added)) else "shape", retail_rows, built_rows, count


def run(row):
    game, name, score, size, source = row
    done = subprocess.run([sys.executable, "-B", str(ROOT / "tools" / "fdiff.py"), game, name],
                          capture_output=True, text=True, errors="replace", cwd=ROOT)
    kind, retail_rows, built_rows, count = classify(done.stdout)
    if kind == "error" and "'.text' mentioned in a -j option, but not found" in done.stderr + done.stdout:
        kind = "empty"
    return (game, name, f"{score:.1f}", size, retail_rows, built_rows, count, kind, source)


def main():
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("--games", default="smt4,smt4a")
    parser.add_argument("--jobs", type=int, default=max(1, (os.cpu_count() or 4) - 2))
    parser.add_argument("--min-score", type=float, default=0.0)
    parser.add_argument("--out", default=str(ROOT / "build" / "triage.tsv"))
    args = parser.parse_args()
    rows = [row for game in args.games.split(",") for row in unproven(game, args.min_score)]
    results = []
    with concurrent.futures.ThreadPoolExecutor(args.jobs) as pool:
        for done, result in enumerate(pool.map(run, rows), 1):
            results.append(result)
            if done % 250 == 0:
                print(f"  {done}/{len(rows)}", flush=True)
    results.sort(key=lambda r: (r[7], r[6], r[0], r[1]))
    out = Path(args.out)
    out.parent.mkdir(parents=True, exist_ok=True)
    with out.open("w", encoding="utf-8", newline="\n") as fh:
        fh.write("# game\tfunction\tobjdiff%\tsize\tretail_rows\tbuilt_rows\tdiff_lines\tkind\tsource\n")
        for r in results:
            fh.write("\t".join(map(str, r)) + "\n")
    counts = collections.Counter((r[0], r[7]) for r in results)
    for game in args.games.split(","):
        print(game + ": " + ", ".join(f"{kind} {counts[(game, kind)]}" for kind in
                                      ("identical", "registers", "operands", "order", "shape", "empty", "error")))
    print(f"wrote {out}")


if __name__ == "__main__":
    main()

"""Compiler-flag neighbourhood audit: which unmatched units match under the flags their twin or their
address neighbours were built with, and how good the evidence for that flag set is.

    python -B tools/flag_audit.py [--game smt4|smt4a|both] [--jobs 8] [--tsv build/flag_audit.tsv]
                                  [--apply none|evidenced] [--recheck FUNC,...] [--no-shape]

armcc 4.1 built most units with the project's default flags (-O3 -Otime, VFP); some modules were built
with others (`--fpu=softvfp`, `--cpu=5TE`, `-Ospace`, `-O2`, ...), recorded per unit as `cflags` in
`<game>/config/project.json`. docs/CONTRIBUTING.md allows a non-default flag only with evidence that
the unit was built that way. This script looks for the flags that evidence would point at, instead of
trying every flag:

For every unmatched first-party unit (not proven by `build/relink/proof.json`, not 100% in
`build/report.json`, not listed in `config/third_party.txt`) the candidate flag sets are the distinct
cflags (other than the unit's own) of
  (a) its twin in the other game (tools/shared.py's exact and near twins, else a function with the
      same non-placeholder name in both games), and
  (b) the nearest units in address order, up to 3 on each side, in the same game.
Units with no candidate are not compiled. The others are compiled with their own flags (the baseline,
"default score") and with each candidate through tools/trial.py's Trial (the unit's real compile
command: multifile partners, carving, armlink NOPs) and scored as fdiff scores them (raw `-`/`+` lines,
0 = IDENTICAL; plus fdiff's --shape score).

Each candidate gets an evidence class (only proven units count as carrying a flag set):
  twin      the twin carries exactly that flag set and is proven with it;
  run       the preceding AND the following first-party units both carry it, or a contiguous run of
            >= 2 first-party units carries it on one side and the other side is a module boundary
            (no unit there, the adjacent unit is third-party, or the next first-party unit's
            translation unit, from config/tus.json / tus_extra.json or a named source directory,
            differs);
  one-side  only the immediate first-party neighbour on one side carries it;
  none      only a farther neighbour (or an unproven unit) carries it.

Output: a TSV (default build/flag_audit.tsv), one row per unit with candidates: game, function,
address, size, default score (raw/shape of the unit's current flags), best flag set, its score,
IDENTICAL?, evidence class, evidence detail, whether it beats the default score, then the unit's current
flags and every candidate's score (`label=raw/shape[evidence]`). The best flag set is the candidate with
the lowest raw score (then shape, then stronger evidence), even when it does not beat the default.

`--apply evidenced` writes `cflags` into config/project.json for the units whose best flag set is
IDENTICAL with `twin` or `run` evidence, and deletes their leading `/* NON_MATCHING ... */` comment;
no other source change. IDENTICAL hits with `one-side`/`none` evidence are only listed (for review).
Prove the result with build.py, report and relink.py --matched as usual.

`--recheck FUNC,...` (sanity check) audits only the named functions, proven or not, as if they had no
cflags of their own (their neighbours and twins keep theirs: leave-one-out); it never applies anything.
A third-party function given here is judged against its third-party neighbours instead (with the
first-party code as the boundary). For example the wave-49 IPC stubs (smt4 FUN_00351e54 ... FUN_003522f8,
smt4a FUN_0042687c, FUN_00426a1c) all come back IDENTICAL with --fpu=softvfp / --cpu=5TE and `twin`
evidence.

Scratch output (the TSV, trial's temporary objects under <game>/build/trial/) stays under build/;
nothing in the tree changes without --apply evidenced.
"""

import argparse
import collections
import concurrent.futures
import copy
import json
import os
import re
import sys
import time
from pathlib import Path

TOOLS = Path(os.path.abspath(__file__)).parent
ROOT = TOOLS.parent
sys.path.insert(0, str(TOOLS))
import shared  # noqa: E402
import trial  # noqa: E402

GAMES = ("smt4", "smt4a")
SIDE_UNITS = 3
PLACEHOLDER = re.compile(r"^(?:FUN|DAT|LAB|thunk_FUN)_[0-9a-fA-F]+$")
HEX_DIR = re.compile(r"^src/_code/[0-9a-f]{4}$")
MARKER = re.compile(r"/\*\s*NON_MATCHING\b.*?\*/[ \t]*\n?", re.S)
RANK = {"twin": 3, "run": 2, "one-side": 1, "none": 0}


# ---------------------------------------------------------------------------------------------
# Project state
# ---------------------------------------------------------------------------------------------

class Game:
    def __init__(self, name):
        self.name = name
        self.home = ROOT / name
        self.project_path = self.home / "config" / "project.json"
        self.project = json.loads(self.project_path.read_text(encoding="utf-8"))
        self.default = list(self.project["compiler"]["cflags"])
        self.units = sorted(self.project["units"], key=lambda u: int(u["address"], 16))
        self.by_function = {u["function"]: u for u in self.units}
        self.index = {u["function"]: i for i, u in enumerate(self.units)}
        third = self.home / "config" / "third_party.txt"
        self.third = {int(line.split()[0], 16) for line in third.read_text(encoding="utf-8").splitlines()
                      if line.strip() and not line.startswith("#")}
        self.scores = {}
        report = self.home / "build" / "report.json"
        if report.exists():
            for unit in json.loads(report.read_text(encoding="utf-8"))["units"]:
                for function in unit.get("functions", []):
                    self.scores[function["name"]] = function.get("fuzzy_match_percent", 0.0)
        proof = self.home / "build" / "relink" / "proof.json"
        proof = json.loads(proof.read_text(encoding="utf-8")) if proof.exists() else {}
        if proof.get("match"):
            self.proven, self.proven_by = set(proof["proven"]), "build/relink/proof.json"
        else:
            self.proven, self.proven_by = {n for n, s in self.scores.items() if s >= 100}, "build/report.json (100%)"
        self.matched = self.proven | {n for n, s in self.scores.items() if s >= 100}
        self.tus = {}
        for name in ("tus.json", "tus_extra.json"):
            path = self.home / "config" / name
            if path.exists():
                for row in json.loads(path.read_text(encoding="utf-8"))["units"]:
                    self.tus[int(row["address"], 16)] = row["tu"]

    def first_party(self, unit):
        return int(unit["address"], 16) not in self.third

    def flags(self, unit, ignore=()):
        """The unit's flag set as a delta from the default: (added, removed), () each when default."""
        if unit["function"] in ignore or "cflags" not in unit:
            return ((), ())
        return delta(self.default, unit["cflags"])

    def tu(self, unit):
        """The unit's translation unit: config/tus*.json, else its source directory unless that is an
        address bucket (src/_code/0019)."""
        known = self.tus.get(int(unit["address"], 16))
        if known:
            return known
        folder = str(Path(unit["source"]).parent).replace("\\", "/")
        return None if HEX_DIR.match(folder) else folder


def delta(default, cflags):
    return (tuple(sorted(set(cflags) - set(default))), tuple(sorted(set(default) - set(cflags))))


def label(flags):
    added, removed = flags
    if not added and not removed:
        return "default"
    return " ".join(added + tuple(f"no{f}" for f in removed if not replaced(f, added)))


def replaced(flag, added):
    """A default flag a candidate flag of the same kind replaces (-O3 by -O2, --cpu=MPCore by --cpu=5TE)."""
    kind = lambda f: "O" if re.match(r"^-O[0-3]$", f) else "goal" if f in ("-Otime", "-Ospace") else f.split("=")[0]
    return any(kind(a) == kind(flag) for a in added)


def materialise(default, flags, literal):
    """The cflags list for a flag set: a carrier's literal list when one is known, else the default with
    each removed flag replaced in place by an added one of the same kind, the rest appended."""
    if flags in literal:
        return list(literal[flags])
    added, removed = list(flags[0]), set(flags[1])
    out = []
    for f in default:
        if f in removed:
            same = [a for a in added if replaced(f, [a])]
            if same:
                out.append(same[0])
                added.remove(same[0])
            continue
        out.append(f)
    return out + added


def twin_map(games):
    """{(game, function): (other game, twin function, kind)} from tools/shared.py's exact and near twins,
    then same-name functions (names that are not placeholders)."""
    left, right = (shared.load_game(name) for name in GAMES)
    exact = shared.pairs(left, right)
    near, _ = shared.near_pairs(left, right, exact, 8)
    out = {}
    for kind, rows in (("exact", exact), ("near", [(a, b) for a, b, _m, _w in near])):
        for a, b in rows:
            fa, fb = left["functions"][a][0], right["functions"][b][0]
            out.setdefault((GAMES[0], fa), (GAMES[1], fb, kind))
            out.setdefault((GAMES[1], fb), (GAMES[0], fa, kind))
    names = set(games[GAMES[0]].by_function) & set(games[GAMES[1]].by_function)
    for name in names:
        if not PLACEHOLDER.match(name):
            out.setdefault((GAMES[0], name), (GAMES[1], name, "name"))
            out.setdefault((GAMES[1], name), (GAMES[0], name, "name"))
    return out


# ---------------------------------------------------------------------------------------------
# Candidates and evidence
# ---------------------------------------------------------------------------------------------

def neighbours(game, i, step, count, same_party):
    """Up to `count` units from index i in direction `step`; with `same_party`, only units on the same
    side of config/third_party.txt as unit i (first-party units for a first-party unit)."""
    out, j = [], i + step
    party = game.first_party(game.units[i])
    while 0 <= j < len(game.units) and len(out) < count:
        if not same_party or game.first_party(game.units[j]) == party:
            out.append(game.units[j])
        j += step
    return out


def evidence(games, twins, game, unit, flags, ignore):
    """(class, detail) of `flags` for `unit`: the stronger of the twin's and the neighbours' evidence,
    the detail giving both."""
    cls, detail = "none", []
    twin = twins.get((game.name, unit["function"]))
    if twin:
        other = games[twin[0]]
        tu = other.by_function.get(twin[1])
        if tu is not None:
            tflags = other.flags(tu)
            proven = tu["function"] in other.proven
            if tflags == flags and proven:
                cls = "twin"
                detail.append(f"twin {twin[0]} {twin[1]} ({twin[2]}) proven with it")
            else:
                detail.append(f"twin {twin[0]} {twin[1]} ({twin[2]}): {label(tflags)}{'' if proven else ', unproven'}")
    near_cls, near_detail = neighbour_evidence(game, unit, flags, ignore)
    if RANK[near_cls] > RANK[cls]:
        cls = near_cls
    if near_detail != "-":
        detail.append(f"neighbours [{near_cls}]: {near_detail}")
    return cls, "; ".join(detail) or "-"


def neighbour_evidence(game, unit, flags, ignore):
    """(run | one-side | none, detail) of `flags` from the unit's address neighbours."""
    i = game.index[unit["function"]]
    carries = lambda u: game.flags(u, ignore) == flags and u["function"] in game.proven
    describe = lambda u: f"{u['function']}@{u['address']}" + ("" if u["function"] in game.proven else "(unproven)")
    detail = []
    before = neighbours(game, i, -1, SIDE_UNITS, True)
    after = neighbours(game, i, +1, SIDE_UNITS, True)
    # A contiguous run of carriers on each side.
    run = {side: [] for side in ("before", "after")}
    for side, units in (("before", before), ("after", after)):
        for u in units:
            if not carries(u):
                break
            run[side].append(u)

    def boundary(step):
        """A module boundary on that side of the unit (or of the run behind it)."""
        nxt = neighbours(game, i, step, 1, False)
        if not nxt:
            return "end"
        if game.first_party(nxt[0]) != game.first_party(unit):
            return "third-party" if game.first_party(unit) else "first-party"
        fp = neighbours(game, i, step, 1, True)
        if not fp:
            return "end"
        own = game.tu(unit) or next((game.tu(u) for u in run["before" if step > 0 else "after"] if game.tu(u)), None)
        theirs = game.tu(fp[0])
        if own and theirs and own != theirs:
            return f"TU {theirs}"
        return None

    for side in ("before", "after"):
        if run[side]:
            detail.append(f"{side}: " + ", ".join(describe(u) for u in run[side]))
    if run["before"] and run["after"]:
        return "run", "between " + "; ".join(detail[-2:])
    for side, step in (("before", +1), ("after", -1)):
        if len(run[side]) >= 2:
            edge = boundary(step)
            if edge:
                return "run", f"{'; '.join(detail[-1:])}; other side is a boundary ({edge})"
    if run["before"] or run["after"]:
        return "one-side", "; ".join(detail)
    far = [u for u in before + after if game.flags(u, ignore) == flags]
    near_units = neighbours(game, i, -1, SIDE_UNITS, False) + neighbours(game, i, +1, SIDE_UNITS, False)
    far += [u for u in near_units if game.flags(u, ignore) == flags and u not in far]
    if far:
        party = game.first_party(unit)
        detail.append("carried by " + ", ".join(describe(u) + ("" if game.first_party(u) == party else "(other party)")
                                                for u in far))
    return "none", "; ".join(detail) or "-"


def candidates(games, twins, game, unit, ignore):
    """({flag set: literal cflags}) of the unit's twin and neighbours, without the unit's own flags."""
    i = game.index[unit["function"]]
    own = game.flags(unit, ignore)
    found = {}
    twin = twins.get((game.name, unit["function"]))
    if twin and twin[1] in games[twin[0]].by_function:
        tu = games[twin[0]].by_function[twin[1]]
        found.setdefault(games[twin[0]].flags(tu), tu.get("cflags"))
    for u in neighbours(game, i, -1, SIDE_UNITS, False) + neighbours(game, i, +1, SIDE_UNITS, False):
        flags = game.flags(u, ignore)
        if flags not in found or found[flags] is None:
            found[flags] = u.get("cflags")
    found.pop(own, None)
    return found


# ---------------------------------------------------------------------------------------------
# Compiling, through tools/trial.py
# ---------------------------------------------------------------------------------------------

class LocalDirs:
    """Stands in for Trial.local: remembers which temporary source needs its real directory on -I."""

    def __init__(self, table, folder):
        self.table, self.folder = table, folder

    def add(self, source):
        self.table[source] = self.folder

    def __contains__(self, source):
        return source in self.table


class Compiler:
    """One tools/trial.py Trial per game, copied per unit (its build module, compiler, objdump and
    scratch directory are shared)."""

    def __init__(self, game, shape):
        some = game.units[0]["function"]
        self.base = trial.Trial(ROOT, game.name, some)
        self.base.shape = shape
        self.local = {}
        inner, table = self.base.build.command, self.local

        def command(compiler, unit, source, obj):
            cmd = inner(compiler, unit, source, obj)
            folder = table.get(str(source))
            if folder is not None and "-I" in cmd:
                at = cmd.index("-I")
                cmd[at:at] = ["-I", str(folder)]
            return cmd
        self.base.build.command = command

    def for_unit(self, unit):
        t = copy.copy(self.base)
        t.unit = unit
        t.source = t.home / unit["source"]
        t.target = t.home / unit["target"]
        t.local = LocalDirs(self.local, t.source.parent)
        return t

    def close(self):
        self.base.close()


# ---------------------------------------------------------------------------------------------

def audit(games, twins, name, args, ignore, only):
    game = games[name]
    work = []  # (unit, {flags: literal})
    for unit in game.units:
        if only is not None:
            if unit["function"] not in only:
                continue
        elif unit["function"] in game.matched or not game.first_party(unit):
            continue
        if not (game.home / unit["source"]).exists() or not (game.home / unit["target"]).exists():
            continue
        found = candidates(games, twins, game, unit, ignore & {unit["function"]})
        if found:
            work.append((unit, found))
    compiler = Compiler(game, not args.no_shape)
    results = collections.defaultdict(dict)
    jobs = []
    for unit, found in work:
        base_unit = {k: v for k, v in unit.items() if k != "cflags"} if unit["function"] in ignore else unit
        own = game.flags(unit, ignore & {unit["function"]})
        jobs.append((unit, own, base_unit))
        for flags, literal in found.items():
            cflags = materialise(game.default, flags, {flags: literal} if literal else {})
            jobs.append((unit, flags, dict(base_unit, cflags=cflags)))
    print(f"{name}: {len(work)} units with candidate flags ({len(jobs)} compiles, {args.jobs} jobs)", flush=True)
    start = time.time()
    try:
        with concurrent.futures.ThreadPoolExecutor(max_workers=max(1, args.jobs)) as pool:
            def one(job):
                unit, flags, as_unit = job
                t = compiler.for_unit(unit)
                text = t.source.read_bytes().decode("utf-8", "surrogateescape")
                try:
                    return job, t.run(text, as_unit)
                except Exception as error:  # noqa: BLE001 - one unit must not stop the audit
                    return job, dict(status="FAIL", score=None, error=repr(error))
            futures = [pool.submit(one, job) for job in jobs]
            for done, future in enumerate(concurrent.futures.as_completed(futures), 1):
                (unit, flags, as_unit), result = future.result()
                result.pop("diff", None)
                results[unit["function"]][flags] = (result, as_unit.get("cflags"))
                if done % 200 == 0:
                    print(f"  {done}/{len(jobs)} ({time.time() - start:.0f}s)", flush=True)
    finally:
        compiler.close()

    rows = []
    for unit, found in work:
        own = game.flags(unit, ignore & {unit["function"]})
        res = results[unit["function"]]
        base = res[own][0]
        scored = []
        for flags in found:
            result, cflags = res[flags]
            cls, detail = evidence(games, twins, game, unit, flags, ignore & {unit["function"]}) if flags != ((), ()) else ("none", "default flags")
            scored.append((flags, result, cflags, cls, detail))
        ok = [s for s in scored if s[1]["score"] is not None]
        ok.sort(key=lambda s: (s[1]["score"], s[1].get("shape") or 0, -RANK[s[3]]))
        best = ok[0] if ok else scored[0]
        fmt = lambda r: "FAIL" if r["score"] is None else f"{r['score']}/{r.get('shape', '-')}"
        rows.append(dict(
            game=name, function=unit["function"], address=unit["address"], size=unit["size"],
            default=fmt(base), default_raw=base["score"], best=label(best[0]), best_score=fmt(best[1]),
            best_raw=best[1]["score"], identical=best[1]["score"] == 0, evidence=best[3], detail=best[4],
            current=label(own), cflags=best[2], improves=best[1]["score"] is not None and
            (base["score"] is None or best[1]["score"] < base["score"]),
            all="; ".join(f"{label(s[0])}={fmt(s[1])}[{s[3]}]" for s in scored), source=unit["source"]))
    print(f"{name}: compiled in {time.time() - start:.0f}s", flush=True)
    return rows


def remove_marker(path):
    text = path.read_bytes().decode("utf-8", "surrogateescape")
    new, count = MARKER.subn("", text, count=1)
    if count:
        with open(path, "w", encoding="utf-8", errors="surrogateescape", newline="\n") as f:
            f.write(new)
    return bool(count)


def apply(games, rows):
    applied = []
    for name in GAMES:
        todo = {r["address"]: r for r in rows if r["game"] == name and r["identical"]
                and r["evidence"] in ("twin", "run") and r["best"] != "default"}
        if not todo:
            continue
        game = games[name]
        for unit in game.project["units"]:
            row = todo.get(unit["address"])
            if row:
                unit["cflags"] = row["cflags"]
                row["marker_removed"] = remove_marker(game.home / unit["source"])
                applied.append(row)
        with open(game.project_path, "w", encoding="utf-8", newline="\n") as f:
            f.write(json.dumps(game.project, indent=2) + "\n")
    return applied


def main():
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("--game", choices=GAMES + ("both",), default="both")
    parser.add_argument("--jobs", "-j", type=int, default=8)
    parser.add_argument("--tsv", type=Path, default=ROOT / "build" / "flag_audit.tsv")
    parser.add_argument("--apply", choices=("none", "evidenced"), default="none")
    parser.add_argument("--recheck", help="comma-separated functions to audit as if they had no cflags (sanity check)")
    parser.add_argument("--no-shape", action="store_true", help="skip fdiff's shape score (faster)")
    args = parser.parse_args()
    started = time.time()
    names = GAMES if args.game == "both" else (args.game,)
    games = {name: Game(name) for name in GAMES}
    for name in names:
        print(f"{name}: proven set from {games[name].proven_by} ({len(games[name].proven)})")
    twins = twin_map(games)
    ignore = set(args.recheck.split(",")) if args.recheck else set()
    if ignore and args.apply != "none":
        parser.error("--recheck never applies")

    rows = []
    for name in names:
        only = {f for f in ignore if f in games[name].by_function} if ignore else None
        if only is not None and not only:
            continue
        rows += audit(games, twins, name, args, ignore, only)

    rows.sort(key=lambda r: (r["game"], int(r["address"], 16)))
    columns = ["game", "function", "address", "size", "default", "best", "best_score", "identical", "evidence",
               "detail", "improves", "current", "all"]
    args.tsv.parent.mkdir(parents=True, exist_ok=True)
    with open(args.tsv, "w", encoding="utf-8", newline="\n") as f:
        f.write("\t".join(["game", "function", "address", "size", "default_score(raw/shape)", "best_flags",
                           "best_score(raw/shape)", "identical", "evidence", "evidence_detail", "improves", "current_flags",
                           "candidates"]) + "\n")
        for r in rows:
            f.write("\t".join(str(r[c]) for c in columns) + "\n")

    print(f"\n{len(rows)} units with candidate flag sets -> {args.tsv}")
    for name in names:
        mine = [r for r in rows if r["game"] == name]
        by = collections.Counter(r["evidence"] for r in mine)
        better = collections.Counter(r["evidence"] for r in mine if r["improves"])
        same = collections.Counter(r["evidence"] for r in mine if r["identical"] and r["improves"])
        print(f"{name}: " + ", ".join(f"{c}: {by[c]} rows / {better[c]} improve / {same[c]} IDENTICAL"
                                       for c in RANK))
    hits = [r for r in rows if r["identical"] and r["improves"]]
    print("\nIDENTICAL under a candidate flag set:")
    for r in hits:
        print(f"  {r['game']} {r['function']} {r['address']} ({r['size']} B): {r['default']} -> {r['best']} "
              f"[{r['evidence']}] {r['detail']}")
    clusters = collections.Counter((r["game"], str(Path(r["source"]).parent).replace("\\", "/"), r["best"])
                                   for r in hits)
    if clusters:
        print("\nclusters (game, directory, flags: IDENTICAL count):")
        for (g, folder, flags), n in clusters.most_common():
            print(f"  {g} {folder} {flags}: {n}")
    review = [r for r in hits if r["evidence"] not in ("twin", "run")]
    if args.apply == "evidenced":
        applied = apply(games, rows)
        print(f"\napplied {len(applied)} (IDENTICAL with twin/run evidence):")
        for r in applied:
            print(f"  {r['game']} {r['function']} {r['address']}: {r['best']} [{r['evidence']}] {r['detail']}"
                  + ("" if r.get("marker_removed") else " (no NON_MATCHING marker)"))
    print(f"\nreview (IDENTICAL with one-side/none evidence, not applied): {len(review)}")
    for r in review:
        print(f"  {r['game']} {r['function']} {r['address']}: {r['best']} [{r['evidence']}] {r['detail']}")
    print(f"\nruntime {time.time() - started:.0f}s")


if __name__ == "__main__":
    main()

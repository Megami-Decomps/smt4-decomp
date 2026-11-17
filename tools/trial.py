"""Score many source variants of one function at once, without touching its source.

    python -B tools/trial.py <game> <function> <variants.py | DIR> [--jobs N] [--show K] [--keep]
    python -B tools/trial.py <game> <function> --flags [--jobs N] [--show K]

`variants.py` defines `def variants(src):` yielding `(label, text)` pairs, each text a whole source
for the unit (`src` is the current one); a directory gives one variant per `.cpp` file in it, labelled
with the file name. The current source is always scored first, as `baseline`.

Each variant is written to a private directory under `<game>/build/trial/` and compiled there with the
unit's own compile command (cflags, multifile partners, carving and armlink's NOPs: build.py's code)
into its own object, so variants compile in parallel and the real source and object are left alone.
Each is scored as `tools/fdiff.py` scores it: the same listing, relocations and comparison, the score
being the number of `-`/`+` lines in its diff (0 = IDENTICAL). A variant that does not compile is FAIL,
with its first error line. The table lists the variants by score; `--show K` prints the diffs of the
best K.

`--keep` writes the best variant over the real source, only when it scores strictly better than the
baseline. It never adds or removes a `NON_MATCHING` comment: that stays your edit.

`--flags` scores, instead of variants, the current source under other compiler flags (-O2/-O3,
-Otime/-Ospace, --fpu=softvfp and their combinations) and in a `--multifile` run with each direct
callee that has a unit, without editing config/project.json. These are diagnostics: a flag or a
multifile partner that helps is a lead, and needs the evidence docs/CONTRIBUTING.md asks for before
it goes into the config.
"""

import argparse
import concurrent.futures
import hashlib
import importlib.util
import itertools
import json
import os
import re
import shutil
import sys
import tempfile
from pathlib import Path

TOOLS = Path(os.path.abspath(__file__)).parent
sys.path.insert(0, str(TOOLS))
import fdiff  # noqa: E402

CALL = re.compile(r"\[R_ARM_(?:THM_)?(?:CALL|JUMP24|PC24|PC22) (\S+)\]")
OPTIMISE = re.compile(r"^-O(?:[0-3]|time|space)$")


def score(diff):
    """The number of lines the diff removes or adds (its `^[-+][^-+]` lines): 0 is IDENTICAL."""
    return sum(1 for line in diff if re.match(r"^[-+][^-+]", line))


def first_error(output, temp, real, home):
    """The compiler's first error line, naming the real source instead of its temporary copy and
    other sources relative to the game directory."""
    lines = [line.replace(temp, real).replace(home + os.sep, "") for line in output.splitlines() if line.strip()]
    return next((line for line in lines if re.search(r"\b(?:Error|Fatal error):", line)),
                next((line for line in lines if "error" in line.lower()), lines[0] if lines else "failed")).strip()


class Trial:
    def __init__(self, root, game, function):
        self.root, self.game = root, game
        self.home = root / game
        self.build = fdiff.load_build(game, root)
        self.unit = self.build.UNITS_BY_FUNCTION.get(function)
        if self.unit is None:
            raise SystemExit(f"{function}: no such function in {game}")
        self.source = self.home / self.unit["source"]
        self.target = self.home / self.unit["target"]
        self.compiler = self.build.find_compiler(argparse.Namespace(armcc=None, clang=None))
        self.tool = fdiff.objdump(game, root)
        (self.home / "build" / "trial").mkdir(parents=True, exist_ok=True)
        # Short: Windows' 260-character path limit applies to armcc, and unit names can be long.
        self.scratch = Path(tempfile.mkdtemp(prefix=f"{function[:16]}-", dir=self.home / "build" / "trial"))
        self.counter = itertools.count()
        self.local = set()  # temporary sources that include a file next to the real source
        # A variant that includes a file next to the real source (`#include "File.cpp"`) still finds it
        # from its temporary copy: that directory is searched first, as it is for the real source.
        real_command, here, local = self.build.command, self.source.parent, self.local

        def command(compiler, unit, source, obj):
            cmd = real_command(compiler, unit, source, obj)
            if str(source) in local and "-I" in cmd:
                at = cmd.index("-I")
                cmd[at:at] = ["-I", str(here)]
            return cmd
        self.build.command = command  # finish_object's --split_sections recompile goes through it too

    def close(self):
        shutil.rmtree(self.scratch, ignore_errors=True)

    def run(self, text, unit=None):
        """{status, score, diff, note, rows, error} of `text` compiled as the unit (or a copy of the
        unit with other cflags/multifile)."""
        unit = unit or self.unit
        work = self.scratch / str(next(self.counter))
        work.mkdir()
        source = work / self.source.name
        obj = work / (self.source.stem + ".o")
        source.write_bytes(text.encode("utf-8", "surrogateescape"))
        if any((self.source.parent / name).is_file() for name in re.findall(r'#include\s+"([^"]+)"', text)):
            self.local.add(str(source))
        failed = fdiff.compile_unit(self.build, self.compiler, unit, source, obj)
        if failed is not None:
            return dict(status="FAIL", score=None, error=first_error(failed, str(source), self.unit["source"], str(self.home)))
        try:
            diff, note, retail_rows, built_rows = fdiff.compare(self.tool, self.target, obj, f"{self.game} {self.unit['function']}")
        except SystemExit as stop:  # an object objdump cannot read, an empty function
            return dict(status="FAIL", score=None, error=str(stop))
        return dict(status="DIFFERS" if diff else "IDENTICAL", score=score(diff), diff=diff, note=note,
                    rows=(retail_rows, built_rows))

    def callees(self, src):
        """Functions with a unit that retail's code calls directly, and unit functions the source names."""
        names = {m[1] for m in CALL.finditer("\n".join(fdiff.listing(self.tool, self.target)))}
        names |= set(re.findall(r"\b([A-Za-z_]\w*)\s*\(", strip_comments(src)))
        units = self.build.UNITS_BY_FUNCTION
        return sorted(n for n in names if n in units and n != self.unit["function"]
                      and (self.home / units[n]["source"]).exists() and units[n]["source"] != self.unit["source"])


def strip_comments(text):
    return re.sub(r"/\*.*?\*/|//[^\n]*", "", text, flags=re.S)


def load_variants(spec, src):
    path = Path(spec)
    if path.is_dir():
        files = sorted(path.glob("*.cpp"))
        if not files:
            raise SystemExit(f"{path}: no .cpp files")
        return [(f.name, f.read_bytes().decode("utf-8", "surrogateescape")) for f in files]
    if not path.is_file():
        raise SystemExit(f"{path}: no such file or directory")
    module_spec = importlib.util.spec_from_file_location("trial_variants", path)
    module = importlib.util.module_from_spec(module_spec)
    module_spec.loader.exec_module(module)
    if not hasattr(module, "variants"):
        raise SystemExit(f"{path}: defines no variants(src)")
    out = []
    for item in module.variants(src):
        label, text = item
        out.append((str(label), text))
    return out


def flag_probes(trial, src):
    """(label, unit copy) pairs: the -O2/-O3 x -Otime/-Ospace x VFP/softvfp grid, then multifile."""
    unit = trial.unit
    base = list(unit.get("cflags", trial.build.COMPILER["cflags"]))
    rest = [f for f in base if not OPTIMISE.match(f) and not f.startswith("--fpu=")]
    probes = []
    for level, goal, fpu in itertools.product(("-O3", "-O2"), ("-Otime", "-Ospace"), (None, "--fpu=softvfp")):
        flags = rest + [level, goal] + ([fpu] if fpu else [])
        if sorted(flags) != sorted(base):
            probes.append(("cflags " + " ".join([level, goal] + ([fpu] if fpu else [])), dict(unit, cflags=flags)))
    together = list(unit.get("multifile", ()))
    if together:
        probes.append(("without multifile", {k: v for k, v in unit.items() if k != "multifile"}))
    callees = [c for c in trial.callees(src) if c not in together]
    for callee in callees:
        probes.append((f"multifile +{callee}", dict(unit, multifile=together + [callee])))
    if len(callees) > 1:
        probes.append(("multifile +all " + str(len(callees)), dict(unit, multifile=together + callees)))
    return probes


def main():
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("game", choices=["smt4", "smt4a"])
    parser.add_argument("function")
    parser.add_argument("variants", nargs="?", help="a variants.py defining variants(src), or a directory of .cpp files")
    parser.add_argument("--jobs", "-j", type=int, default=os.cpu_count() or 2)
    parser.add_argument("--show", type=int, default=0, metavar="K", help="print the diffs of the best K")
    parser.add_argument("--keep", action="store_true", help="write the best variant to the source if strictly better")
    parser.add_argument("--flags", action="store_true", help="diagnostics: score the source under other cflags and multifile")
    parser.add_argument("--root", type=Path, default=TOOLS.parent, help=argparse.SUPPRESS)  # another checkout
    args = parser.parse_args()
    if args.flags == bool(args.variants):
        parser.error("give either a variants file/directory or --flags")
    if args.flags and args.keep:
        parser.error("--flags changes no file: put a proven flag in config/project.json yourself")

    trial = Trial(args.root.resolve(), args.game, args.function)
    try:
        raw = trial.source.read_bytes()
        src = raw.decode("utf-8", "surrogateescape")
        jobs = [("baseline", src, None)]
        if args.flags:
            jobs += [(label, src, unit) for label, unit in flag_probes(trial, src)]
        else:
            jobs += [(label, text, None) for label, text in load_variants(args.variants, src)]

        # Compile each distinct (text, unit) once; duplicates share the result.
        key = lambda text, unit: hashlib.sha1(text.encode("utf-8", "surrogateescape")
                                              + json.dumps(unit, sort_keys=True).encode()).hexdigest()
        first = {}
        for index, (label, text, unit) in enumerate(jobs):
            first.setdefault(key(text, unit), index)
        results = {}
        with concurrent.futures.ThreadPoolExecutor(max_workers=max(1, args.jobs)) as pool:
            futures = {pool.submit(trial.run, jobs[i][1], jobs[i][2]): i for i in sorted(set(first.values()))}
            for future in concurrent.futures.as_completed(futures):
                results[futures[future]] = future.result()
    finally:
        trial.close()

    rows = []
    for index, (label, text, unit) in enumerate(jobs):
        origin = first[key(text, unit)]
        result = dict(results[origin])
        if origin != index:
            result["same"] = jobs[origin][0]
        rows.append((index, label, result))
    order = sorted(rows, key=lambda r: (r[2]["score"] is None, r[2]["score"] or 0, r[0]))

    print(f"{args.game} {args.function} ({trial.unit['source']}): {len(jobs) - 1} "
          f"{'probes' if args.flags else 'variants'} and the baseline, {len(results)} compiled")
    if args.flags:
        print("DIAGNOSTICS ONLY: a flag or multifile partner that scores better is a lead, not evidence; see "
              "docs/CONTRIBUTING.md (\"Compiler flags need evidence\", \"--multifile\") before changing config/project.json")
    width = max(len(label) for _i, label, _r in rows)
    for _index, label, result in order:
        shown = "FAIL" if result["score"] is None else str(result["score"])
        detail = result["error"] if result["status"] == "FAIL" else result["status"]
        if result.get("same"):
            detail += f" (same text as {result['same']})"
        print(f"  {shown:>6}  {label:<{width}}  {detail}")

    shown = [r for r in order if r[2]["score"] is not None][:args.show]
    for _index, label, result in shown:
        print(f"\n=== {label} (score {result['score']})")
        if not result["diff"]:
            print(f"IDENTICAL: {args.game} {args.function} ({trial.unit['source']}){result['note']}")
            continue
        print(f"DIFFERS: {args.game} {args.function} ({trial.unit['source']}), "
              f"retail {result['rows'][0]} vs built {result['rows'][1]} rows")
        for line in result["diff"]:
            print(line)

    if args.keep:
        baseline = rows[0][2]["score"]
        best = next((r for r in order if r[0] != 0 and r[2]["score"] is not None), None)
        if best is None or (baseline is not None and best[2]["score"] >= baseline):
            print("\n--keep: no variant scores strictly better than the baseline; source unchanged")
        else:
            trial.source.write_bytes(jobs[best[0]][1].encode("utf-8", "surrogateescape"))
            print(f"\n--keep: wrote {best[1]} to {trial.unit['source']} "
                  f"(score {'FAIL' if baseline is None else baseline} -> {best[2]['score']})")
            print("  its NON_MATCHING comment, if any, is as the variant had it: "
                  + ("remove it yourself if this match follows the rules, then prove it with build.py and relink.py --matched"
                     if best[2]["score"] == 0 else "update it to say what still differs"))
    elif not args.flags and rows[0][2]["score"] != 0 and any(r[2]["score"] == 0 for r in rows):
        print("\nan IDENTICAL variant: check it against the matching rules before keeping it (--keep, or edit by hand)")


if __name__ == "__main__":
    main()

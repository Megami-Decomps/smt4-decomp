"""Re-score every unit a change can affect, at BASE and now, and list the ones whose score changed.

    python -B tools/usercheck.py [BASE] [--jobs N] [--game smt4|smt4a] [--all-units]

BASE (default HEAD) is any revision; the change is the working tree against it, untracked files
included. The affected units are those whose source the change modifies, adds or deletes, those whose
source includes a changed, new or deleted file directly or through other headers, those compiled in a
`multifile` run with such a source, and those whose `config/project.json` entry changed. Includes
resolve as armcc's do in the build: the including file's directory for `"..."`, then the game's
`<game>/include` and the shared `include/` (`build.py`'s `-I` order), in the working tree and at BASE,
so a header that a new one shadows or a deleted one used to provide counts too. A source holding
several units counts for each. `--all-units` checks every unit (slow; for sanity).

Each affected unit is compiled twice, as `tools/fdiff.py` compiles it (the unit's command, cflags,
multifile partners, carving and armlink's NOPs) and scored as `tools/trial.py` scores it (the number
of `-`/`+` lines of fdiff's diff, 0 = IDENTICAL): once from the working tree, once from BASE's files
written into a private tree under `build/` (BASE's headers, config and the sources it needs, with
`orig/` and `build/tools/` linked as `tools/worktrees.py` links them). Objects go to that private
tree, which is removed afterwards: nothing in `src/`, `include/` or `build/obj/` is written, so
several checks, fdiffs and builds can run at once. Both sides are compared with this checkout's retail
objects (`orig/target/`): a function renamed since BASE differs at BASE.

Prints the units whose score changed (regressions and new compile failures first) and a summary.
Exit status 1 when a unit regressed or newly fails to compile, else 0. A change to build.py, the
build tools or config the compile reads (symbols, inlined bodies) can move any unit: the check
says so, and `--all-units` covers it.
"""

import argparse
import concurrent.futures
import importlib.util
import json
import os
import posixpath
import re
import shutil
import signal
import subprocess
import sys
import threading
import time
from collections import defaultdict
from pathlib import Path

TOOLS = Path(os.path.abspath(__file__)).parent
ROOT = TOOLS.parent
sys.path.insert(0, str(TOOLS))
import fdiff  # noqa: E402
import trial  # noqa: E402
import worktrees  # noqa: E402

GAMES = ("smt4", "smt4a")
INCLUDE = re.compile(rb'^[ \t]*#[ \t]*include[ \t]*([<"])([^>"\r\n]+)[>"]', re.M)
SCANNED = (".h", ".hpp", ".hh", ".inc", ".inl", ".c", ".cc", ".cpp", ".cxx")
# Changes that can move any unit's score without touching its inputs.
GLOBAL = re.compile(r"^(?:smt4a?/(?:build\.py|tools/|config/(?:symbols\.txt|inlined\.txt|numbers\.txt|toolchain\.json|modules\.json))"
                    r"|tools/(?:fdiff|split|n3ds)\.py$)")
ABSENT = "absent"
SHORT = {"smt4": "4", "smt4a": "a"}  # game directories in the BASE tree


def key(path):
    """A path as the file system compares it: Windows' is case-insensitive."""
    return path.lower() if os.name == "nt" else path


def git(*args, binary=False):
    done = subprocess.run(["git", *args], cwd=ROOT, capture_output=True)
    if done.returncode:
        raise SystemExit(f"git {' '.join(args)}: {done.stderr.decode('utf-8', 'replace').strip()}")
    return done.stdout if binary else done.stdout.decode("utf-8", "surrogateescape")


class Blobs:
    """BASE's files, through one `git cat-file --batch`."""

    def __init__(self, commit):
        self.commit = commit

    def fetch(self, paths):
        """{path: bytes} for the paths that exist at BASE as files."""
        paths = list(dict.fromkeys(paths))
        if not paths:
            return {}
        proc = subprocess.Popen(["git", "cat-file", "--batch"], cwd=ROOT, stdin=subprocess.PIPE, stdout=subprocess.PIPE)

        def feed():  # a writer thread: the responses are read while requests are still going in
            try:
                for path in paths:
                    proc.stdin.write(f"{self.commit}:{path}\n".encode("utf-8", "surrogateescape"))
                proc.stdin.close()
            except OSError:
                pass
        writer = threading.Thread(target=feed, daemon=True)
        writer.start()
        out = {}
        for path in paths:
            header = proc.stdout.readline().split()
            if len(header) == 3 and header[1] in (b"blob",):
                size = int(header[2])
                out[path] = proc.stdout.read(size)
                proc.stdout.read(1)
            elif len(header) == 3:  # a tree or submodule: skip its body
                proc.stdout.read(int(header[2]) + 1)
        writer.join()
        proc.stdout.close()
        proc.wait()
        return out


class Files:
    """One tree's file set: the working tree (the file system) or BASE (its `git ls-tree`)."""

    def __init__(self, listing=None):
        self.listing = None if listing is None else {key(p): p for p in listing}
        self.memo = {}
        self.resolved = {}

    def add(self, rels):
        """Working-tree files already known to exist (a directory walk): no stat needed."""
        for rel in rels:
            self.memo[key(rel)] = rel

    def find(self, rel):
        """The real relative path of `rel` when it is a file in this tree, else None."""
        k = key(rel)
        if k not in self.memo:
            if self.listing is not None:
                self.memo[k] = self.listing.get(k)
            else:
                self.memo[k] = rel if os.path.isfile(os.path.join(ROOT, rel)) else None
        return self.memo[k]


def resolve(files, game, including, quote, name):
    """The file `#include <quote>name` in `including` (relative to the checkout) reads in this tree:
    the including file's directory for quoted names, then `-I <game>/include -I include`."""
    directory = posixpath.dirname(including) if quote == b'"' else None
    memo = (game, directory, name)
    if memo in files.resolved:
        return files.resolved[memo]
    found = None
    clean = name.strip().replace("\\", "/")
    if clean and not clean.startswith("/") and not re.match(r"^[A-Za-z]:", clean):
        candidates = [posixpath.join(directory, clean)] if directory is not None else []
        candidates += [f"{game}/include/{clean}", f"include/{clean}"]
        for candidate in candidates:
            candidate = posixpath.normpath(candidate)
            if not candidate.startswith("../"):
                found = files.find(candidate)
                if found:
                    break
    files.resolved[memo] = found
    return found


def includes_of(data):
    return [(m[1], m[2].decode("utf-8", "surrogateescape")) for m in INCLUDE.finditer(data)]


def scan(game, cache, files):
    """{path: [(quote, name)]} for the working tree's headers and sources this game compiles."""
    out = {}
    root = str(ROOT)
    for top in ("include", f"{game}/include", f"{game}/src"):
        for directory, _dirs, names in os.walk(os.path.join(root, top)):
            base = os.path.relpath(directory, root).replace(os.sep, "/")
            rels = [f"{base}/{name}" for name in names]
            files.add(rels)
            for rel in rels:
                if not rel.lower().endswith(SCANNED):
                    continue
                if rel not in cache:
                    with open(os.path.join(root, rel), "rb") as handle:
                        cache[rel] = includes_of(handle.read())
                out[rel] = cache[rel]
    return out


def tainted_files(game, changed, now, base, cache):
    """Keys of the files whose compile reads a changed path, directly or through includes, in either
    tree. An unchanged file has the same includes in both; only their resolution can differ."""
    reverse = defaultdict(set)
    for rel, names in scan(game, cache, now).items():
        for quote, name in names:
            for files in (now, base):
                target = resolve(files, game, rel, quote, name)
                if target:
                    reverse[key(target)].add(key(rel))
    tainted = set(changed)
    todo = list(tainted)
    while todo:
        for user in reverse.get(todo.pop(), ()):
            if user not in tainted:
                tainted.add(user)
                todo.append(user)
    return tainted


def entry(unit):
    return json.dumps(unit, sort_keys=True)


def affected_units(game, now_units, base_units, now_present, base_present, tainted, all_units):
    """Sorted functions to check: present (with a source) on either side and touched by the change."""
    out = []
    for function in sorted(set(now_units) | set(base_units)):
        now, base = now_units.get(function), base_units.get(function)
        if not ((now and now_present(now)) or (base and base_present(base))):
            continue
        if all_units or (now and base and entry(now) != entry(base)) or not (now and base):
            out.append(function)
            continue
        sources = set()
        for unit, table in ((now, now_units), (base, base_units)):
            sources.add(f"{game}/{unit['source']}")
            sources |= {f"{game}/{table[name]['source']}" for name in unit.get("multifile", ()) if name in table}
        if any(key(s) in tainted for s in sources):
            out.append(function)
    return out


class BaseTree:
    """BASE's headers, game config, build scripts and the sources a check needs, under build/u<N>, with
    `<game>/orig` and `<game>/build/tools` linked to this checkout's. Each game directory has a one-letter
    name there (build.py finds everything from its own directory): armcc is held to Windows' 260
    characters even for relative paths, and the longest unit source is 210 below the game directory."""

    def __init__(self, blobs, listing):
        self.blobs, self.listing = blobs, listing
        self.files = Files(listing)
        self.links = []
        (ROOT / "build").mkdir(exist_ok=True)
        for number in range(10000):
            path = ROOT / "build" / f"u{number}"
            try:
                path.mkdir()
            except FileExistsError:
                continue
            self.root = path
            break
        else:
            raise SystemExit("no free build/u<N> directory")
        self.written = set()
        self.scratch = self.root / "o"
        self.scratch.mkdir()

    def path(self, rel):
        """Where a checkout-relative path lives in the tree."""
        first, _, rest = rel.partition("/")
        return self.root / (SHORT[first] + "/" + rest if first in SHORT else rel)

    def write(self, contents):
        for rel, data in contents.items():
            path = self.path(rel)
            path.parent.mkdir(parents=True, exist_ok=True)
            path.write_bytes(data)
            self.written.add(rel)

    def prepare(self, game, sources):
        """Write the game's side of BASE: headers, config, build.py, the tools it imports, then the sources
        and every file they include (a `#include "Other.cpp"` next to them), as BASE has them."""
        prefixes = ("include/", f"{game}/include/", f"{game}/config/", f"{game}/tools/", "tools/split.py", "tools/n3ds.py")
        bulk = [p for p in self.listing if p.startswith(prefixes) or p == f"{game}/build.py"]
        self.write(self.blobs.fetch(p for p in bulk if p not in self.written))
        for shared in worktrees.SHARED:
            link_path, target = self.path(f"{game}/{shared}"), ROOT / game / shared
            if target.is_dir() and not worktrees.is_link(link_path):
                worktrees.link(link_path, target)
                self.links.append(link_path)
        todo = [s for s in sources if self.files.find(s)]
        seen = set()
        while todo:
            todo = [self.files.find(p) for p in dict.fromkeys(todo) if p not in seen]
            seen.update(todo)
            self.write(self.blobs.fetch(p for p in todo if p not in self.written))
            following = []
            for rel in todo:
                for quote, name in includes_of(self.path(rel).read_bytes()):
                    target = resolve(self.files, game, rel, quote, name)
                    if target and target not in seen:
                        following.append(target)
            todo = following

    def close(self):
        """Unlink first: removing the tree must never reach the linked directories."""
        failed = []
        for link_path in self.links:
            try:
                worktrees.unlink(link_path)
            except (OSError, SystemExit) as error:
                failed.append(f"{link_path}: {error}")
        if failed:
            print(f"usercheck: left {self.root} in place, could not unlink: {'; '.join(failed)}", file=sys.stderr)
            return
        shutil.rmtree(self.root, ignore_errors=True)


class Side:
    """One side of the comparison for one game: its build.py module, compiler and units."""

    def __init__(self, home, game):
        self.home, self.game = home, game  # the game directory: <checkout>/<game> or the BASE tree's
        spec = importlib.util.spec_from_file_location(f"build_{game}", home / "build.py")
        self.build = importlib.util.module_from_spec(spec)
        spec.loader.exec_module(self.build)
        self.compiler = None
        self.units = {u["function"]: u for u in self.build.PROJECT["units"]}

    def compile_and_score(self, function, obj, tool):
        unit = self.units[function]
        home = self.home
        try:
            if self.compiler is None:
                self.compiler = self.build.find_compiler(argparse.Namespace(armcc=None, clang=None))
            failed = fdiff.compile_unit(self.build, self.compiler, unit, home / unit["source"], obj)
            if failed is not None:
                return None, trial.first_error(failed, str(home) + os.sep, "", str(home))
            # Retail is the checkout's own orig/ (the BASE tree links it).
            target = ROOT / self.game / unit["target"]
            diff, _note, _retail, _built = fdiff.compare(tool, target, obj, f"{self.game} {function}")
        except SystemExit as stop:  # an object objdump cannot read, an empty listing
            return None, str(stop)
        except Exception as error:  # noqa: BLE001  (carving, a broken object: a failure of this unit)
            return None, f"{type(error).__name__}: {error}"
        return trial.score(diff), None


def classify(base, now):
    """(category, sort rank) of a unit's base -> now scores (int, None = FAIL, ABSENT)."""
    if base == ABSENT:
        return ("newly failing", 0) if now is None else ("new", 3)
    if base is None and now is None:
        return "unchanged", 4
    if now is None:
        return "newly failing", 0
    if base is None:
        return "improved", 2
    if now > base:
        return "regressed", 1
    if now < base:
        return "improved", 2
    return "unchanged", 4


def shown(score):
    return "-" if score == ABSENT else "FAIL" if score is None else "IDENTICAL" if score == 0 else str(score)


def main():
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("base", nargs="?", default="HEAD", help="the revision to compare against (default HEAD)")
    parser.add_argument("--jobs", "-j", type=int, default=os.cpu_count() or 2)
    parser.add_argument("--game", choices=GAMES, help="only this game's units")
    parser.add_argument("--all-units", action="store_true", help="check every unit, not only the affected ones (slow)")
    args = parser.parse_args()
    started = time.time()
    games = (args.game,) if args.game else GAMES

    try:
        commit = git("rev-parse", "--verify", "--quiet", f"{args.base}^{{commit}}").strip()
    except SystemExit:
        raise SystemExit(f"{args.base}: not a revision")
    changed = set(git("diff", "--name-only", "--no-renames", "-z", commit).split("\0"))
    changed |= set(git("ls-files", "--others", "--exclude-standard", "-z").split("\0"))
    changed.discard("")
    listing = [p for p in git("ls-tree", "-r", "-z", "--name-only", commit).split("\0") if p]
    blobs = Blobs(commit)
    now_files, base_files = Files(), Files(listing)
    changed_keys = {key(p) for p in changed}
    global_changes = sorted(p for p in changed if GLOBAL.match(p))

    plan, cache = {}, {}
    now_sides = {}
    for game in games:
        now_side = Side(ROOT / game, game)
        now_sides[game] = now_side
        raw = blobs.fetch([f"{game}/config/project.json"]).get(f"{game}/config/project.json")
        base_units = {u["function"]: u for u in json.loads(raw)["units"]} if raw else {}
        # Only a file under the include directories or the sources can be compiled into a unit.
        compiled = any(p.startswith(("include/", f"{game}/include/", f"{game}/src/")) for p in changed)
        tainted = (tainted_files(game, changed_keys, now_files, base_files, cache) if compiled and not args.all_units
                   else changed_keys)
        if not changed and not args.all_units:
            plan[game] = ([], base_units)
            continue
        functions = affected_units(game, now_side.units, base_units,
                                   lambda u: now_files.find(f"{game}/{u['source']}") is not None,
                                   lambda u: base_files.find(f"{game}/{u['source']}") is not None,
                                   tainted, args.all_units)
        plan[game] = (functions, base_units)

    short = commit[:9]
    total = sum(len(f) for f, _b in plan.values())
    print(f"BASE {args.base} ({short}): {len(changed)} changed files; {total} affected units"
          + (" (" + ", ".join(f"{g} {len(plan[g][0])}" for g in games) + ")" if len(games) > 1 else ""))
    for path in global_changes:
        print(f"  note: {path} changed: it can move any unit's score; --all-units checks every unit")
    if not total:
        print("summary: 0 units checked, 0 improved, 0 unchanged, 0 regressed, 0 newly failing, 0 newly IDENTICAL")
        return 0

    # A termination request unwinds through `finally`, which unlinks orig/ and build/tools/ first.
    def stop(_signum, _frame):
        raise KeyboardInterrupt
    for name in ("SIGTERM", "SIGBREAK"):
        if hasattr(signal, name):
            signal.signal(getattr(signal, name), stop)

    tree = BaseTree(blobs, listing)
    removed, results = [], {}
    try:
        jobs = []
        for game in games:
            functions, base_units = plan[game]
            now_side = now_sides[game]
            on_base = []
            for function in functions:
                now = now_side.units.get(function)
                base = base_units.get(function)
                now_ok = now is not None and now_files.find(f"{game}/{now['source']}") is not None
                base_ok = base is not None and base_files.find(f"{game}/{base['source']}") is not None
                if not now_ok:
                    removed.append((game, function))
                    continue
                if base_ok:
                    on_base.append(function)
                else:
                    results[("base", game, function)] = (ABSENT, None)
                jobs.append(("now", game, function))
            if on_base:
                sources = []
                for function in on_base:
                    unit = base_units[function]
                    sources.append(f"{game}/{unit['source']}")
                    sources += [f"{game}/{base_units[n]['source']}" for n in unit.get("multifile", ()) if n in base_units]
                tree.prepare(game, sources)
                base_side = Side(tree.path(game), game)
                if base_side.build.COMPILER == now_side.build.COMPILER:  # the same compiler, wherever this checkout finds it
                    now_side.compiler = now_side.compiler or now_side.build.find_compiler(argparse.Namespace(armcc=None, clang=None))
                    base_side.compiler = now_side.compiler
                for function in on_base:
                    jobs.append(("base", game, function))
                    where = tree.path(f"{game}/{base_units[function]['source']}")
                    if os.name == "nt" and len(str(where)) > worktrees.MAX_PATH:
                        print(f"  note: {game} {function}: its BASE copy's path has {len(str(where))} characters, over the "
                              f"{worktrees.MAX_PATH} armcc can open: BASE fails to compile it (use a shorter checkout path)")
            else:
                base_side = None
            now_sides[game] = (now_side, base_side)

        tools = {game: fdiff.objdump(game) for game in games}

        def run(index, job):
            side, game, function = job
            now_side, base_side = now_sides[game]
            obj = tree.scratch / side / f"{index}.o"
            return (now_side if side == "now" else base_side).compile_and_score(function, obj, tools[game])

        done = 0
        pool = concurrent.futures.ThreadPoolExecutor(max_workers=max(1, args.jobs))
        try:
            futures = {pool.submit(run, i, job): job for i, job in enumerate(jobs)}
            for future in concurrent.futures.as_completed(futures):
                results[futures[future]] = future.result()
                done += 1
                if sys.stderr.isatty() and (done % 20 == 0 or done == len(jobs)):
                    print(f"\r  {done}/{len(jobs)} compiled", end="", file=sys.stderr, flush=True)
        except BaseException:
            pool.shutdown(wait=True, cancel_futures=True)
            raise
        pool.shutdown(wait=True)
        if sys.stderr.isatty():
            print(file=sys.stderr)
    finally:
        tree.close()

    rows, counts = [], defaultdict(int)
    for game in games:
        for function in plan[game][0]:
            if (game, function) in removed:
                continue
            (base, base_error), (now, now_error) = results[("base", game, function)], results[("now", game, function)]
            category, rank = classify(base, now)
            counts[category] += 1
            if category == "improved" and now == 0:
                counts["newly IDENTICAL"] += 1
            counts["IDENTICAL now"] += now == 0
            counts["failing on both"] += base is None and now is None
            if category == "unchanged":
                continue
            delta = now - base if isinstance(base, int) and isinstance(now, int) else 0
            unit = now_sides[game][0].units[function]
            detail = now_error if now is None else base_error if base is None else unit["source"]
            rows.append((rank, -delta if rank == 1 else delta, game, function, base, now, detail))
    rows.sort(key=lambda r: r[:4])

    if rows:
        width = max(len(r[3]) for r in rows)
        label = {0: "NEWLY FAILING", 1: "REGRESSED", 2: "improved", 3: "new"}
        for rank, _d, game, function, base, now, detail in rows:
            change = f"{shown(base)} -> {shown(now)}"
            if isinstance(base, int) and isinstance(now, int):
                change += f" ({now - base:+d})"
            print(f"  {label[rank]:<13}  {game:<5}  {function:<{width}}  {change:<26}  {detail}")
    for game, function in removed:
        print(f"  removed        {game:<5}  {function}: no source now, not checked")
    checked = sum(counts[c] for c in ("improved", "unchanged", "regressed", "newly failing", "new"))
    print(f"summary: {checked} units checked, {counts['improved']} improved, {counts['unchanged']} unchanged, "
          f"{counts['regressed']} regressed, {counts['newly failing']} newly failing, "
          f"{counts['newly IDENTICAL']} newly IDENTICAL" + (f", {counts['new']} new" if counts["new"] else ""))
    print(f"  {counts['IDENTICAL now']} of them IDENTICAL now" + (f"; {counts['failing on both']} FAIL at BASE and now"
                                                                 if counts["failing on both"] else ""))
    print(f"usercheck: {time.time() - started:.0f}s with {args.jobs} jobs", file=sys.stderr)
    return 1 if counts["regressed"] or counts["newly failing"] else 0


if __name__ == "__main__":
    sys.exit(main())

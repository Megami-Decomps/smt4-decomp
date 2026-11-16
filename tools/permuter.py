"""Search source variants of near-miss functions for one that compiles to the retail bytes.

    python3 -B tools/permuter.py FUNCTIONS.tsv [--jobs N] [--minutes M] [--out build/permuter]

FUNCTIONS.tsv rows: `<game> <function>` (more columns are ignored; `#` lines skipped). Each worker
takes the next function, then repeatedly applies one random source mutation to the bodies of the
functions in its unit file, compiles the variant with the game's build.py command, and scores it
against the retail target object with fdiff's listing (number of differing rows). Variants that score
at least as well are kept; the search restarts from the best variant when it stalls, and stops at a
score of 0 or after --minutes.

The mutations change only how the source is written (statement and declaration order, operand
order of commutative operators, comparison direction, condition spelling, integer local types), so
a variant scoring 0 compiles to the same bytes as retail and therefore does the same thing. It still
needs a reader's eye before it is committed: the tool writes `<out>/<game>/<function>.cpp` (the best
variant of the whole unit file) and appends one row per function to `<out>/results.tsv`
(game, function, start score, best score, variants tried, seconds).

Needs `build.py fetch` and `build.py split` in each game directory. Runs on Linux (armcc under wibo)
or Windows; armcc compiles one unit in a fraction of a second, so a worker tries a few variants a
second.
"""

import argparse
import difflib
import importlib.util
import multiprocessing
import os
import random
import re
import subprocess
import sys
import tempfile
import time
from pathlib import Path

ROOT = Path(os.path.abspath(__file__)).parent.parent
sys.path.insert(0, str(ROOT / "tools"))

_builds = {}


def build_module(game):
    if game not in _builds:
        import argparse as _argparse
        spec = importlib.util.spec_from_file_location(f"build_{game}", ROOT / game / "build.py")
        module = importlib.util.module_from_spec(spec)
        spec.loader.exec_module(module)
        compiler = module.find_compiler(_argparse.Namespace(armcc=None, clang=None))
        module.inlined_bodies()
        module.veneer_stubs()
        _builds[game] = (module, compiler)
    return _builds[game]


# ---------------------------------------------------------------- scoring

def listing_rows(game, obj, target):
    import fdiff
    tool = fdiff.objdump(game)
    retail = fdiff.listing(tool, target)
    built = fdiff.listing(tool, obj)
    fdiff.data_as_bytes(retail, built, fdiff.text_bytes(tool, target), fdiff.text_bytes(tool, obj))
    fdiff.data_relocations(retail, built)
    fdiff.integer_words(retail, built)
    strip = lambda rows: [re.sub(r"^\s*[0-9a-f]+: ", "", r) for r in rows]
    retail, built = strip(retail), strip(built)
    while len(built) > len(retail) and built[-1] in ("movs r0, r0", "nop", ".short 0x0000"):
        built.pop()
    return retail, built


def score(game, unit, source_text, source_path, scratch):
    """Differing rows between the variant's code and retail (0 = identical), or None if it fails."""
    module, compiler = build_module(game)
    temp_source = source_path.with_name(f".perm_{os.getpid()}_{source_path.name}")
    obj = Path(scratch) / f"{os.getpid()}.o"
    temp_source.write_text(source_text, encoding="utf-8", newline="\n")
    try:
        if obj.exists():
            obj.unlink()
        done = subprocess.run(module.command(compiler, unit, temp_source, obj), capture_output=True,
                              text=True, encoding="utf-8", errors="replace", cwd=ROOT / game)
        if done.returncode or not obj.exists():
            return None
        module.finish_object(compiler, unit, temp_source, obj)
        retail, built = listing_rows(game, obj, ROOT / game / unit["target"])
    except (SystemExit, Exception):
        return None
    finally:
        try:
            temp_source.unlink()
        except FileNotFoundError:
            pass
    if retail == built:
        return 0
    extra = built[len(retail):]
    if extra and built[:len(retail)] == retail and all(r.startswith((".word", ".short", ".byte", ".ascii")) for r in extra):
        return 0
    diff = difflib.unified_diff(retail, built, n=0, lineterm="")
    return sum(1 for line in diff if line[:1] in "+-" and not line.startswith(("---", "+++")))


# ---------------------------------------------------------------- source regions

def body_regions(text):
    """(start, end) of every top-level function body in the file (the text between its braces),
    found by brace matching that skips comments, strings and character literals."""
    regions, stack, i, n = [], [], 0, len(text)
    while i < n:
        c = text[i]
        if text.startswith("//", i):
            i = text.find("\n", i) if text.find("\n", i) >= 0 else n
            continue
        if text.startswith("/*", i):
            j = text.find("*/", i + 2)
            i = n if j < 0 else j + 2
            continue
        if c in "\"'":
            j = i + 1
            while j < n and text[j] != c:
                j += 2 if text[j] == "\\" else 1
            i = j + 1
            continue
        if c == "{":
            before = text[:i].rstrip()
            is_function = before.endswith(")") or before.endswith("const")
            stack.append((i, is_function and not any(f for _, f in stack)))
        elif c == "}" and stack:
            start, is_function = stack.pop()
            if is_function:
                regions.append((start + 1, i))
        i += 1
    return regions


SIMPLE_STATEMENT = re.compile(r"^\s*(?!return\b|break\b|continue\b|case\b|default\b|goto\b|if\b|for\b|while\b|do\b|switch\b|else\b)[^{}#]*;\s*(//.*)?$")
INT_DECL = re.compile(r"^(\s*)(s32|u32|int|s16|u16|s8|u8)(\s+\w+\s*(=|;))")
OPERAND = r"[A-Za-z_]\w*(?:(?:\.|->)\w+|\[[^\[\]]*\])*|\d+[uUlL]*|0x[0-9a-fA-F]+[uUlL]*"
LEFT = r"(?:(?<=\()|(?<=,)|(?<=[^=!<>]=)|(?<=&&)|(?<=\|\|)|(?<=\?)|(?<=:)|(?<=return))"
RIGHT = r"(?=\s*(?:\)|,|;|&&|\|\||\?|:|\]))"
COMMUTE = re.compile(LEFT + r"(\s*)(" + OPERAND + r")\s*(==|!=|\+|\*|&(?!&)|\|(?!\|)|\^)\s*(" + OPERAND + r")" + RIGHT)
COMPARE = re.compile(LEFT + r"(\s*)(" + OPERAND + r")\s*(<=|>=|<|>)\s*(" + OPERAND + r")" + RIGHT)
FLIP = {"<": ">", ">": "<", "<=": ">=", ">=": "<="}
NONZERO = re.compile(r"\((\s*)(" + OPERAND + r")\s*!=\s*0\s*\)")
BARE_COND = re.compile(r"\b(if|while)\s*\((\s*)(" + OPERAND + r")\s*\)")
ZERO = re.compile(r"\((\s*)(" + OPERAND + r")\s*==\s*0\s*\)")
NOT_COND = re.compile(r"\b(if|while)\s*\((\s*)!(" + OPERAND + r")\s*\)")


ASSIGN_CONST = re.compile(r"^(\s*)([^=;{}]*[^=!<>+\-*/&|^])=\s*(-?\d+|0x[0-9a-fA-F]+|-1|~0[uU]?|NULL)\s*;\s*$")
DECL_INIT = re.compile(r"^(\s*)((?:const\s+)?[A-Za-z_][\w:]*(?:\s*\*+\s*|\s+))(\w+)\s*=\s*([^;]+);\s*$")
IF_ELSE = re.compile(r"\bif\s*\(([^(){};]*(?:\([^(){};]*\)[^(){};]*)*)\)\s*\{([^{}]*)\}\s*else\s*\{([^{}]*)\}")
FOR_LOOP = re.compile(r"\bfor\s*\(([^;()]*);([^;()]*(?:\([^()]*\)[^;()]*)*);([^;()]*(?:\([^()]*\)[^;()]*)*)\)\s*\{([^{}]*)\}")
_temp_counter = [0]


def indent(line):
    return len(line) - len(line.lstrip())


def mutate(text, rng):
    """One random source mutation inside a function body, or None when none applies."""
    regions = body_regions(text)
    if not regions:
        return None
    start, end = rng.choice(regions)
    body = text[start:end]
    lines = body.split("\n")
    kinds = ["swap", "swap", "swap", "move", "move", "commute", "commute", "compare", "cond", "type",
             "constant", "constant", "split", "ifelse", "minus", "loop"]
    for _ in range(16):
        kind = rng.choice(kinds)
        if kind == "swap":
            pairs = [i for i in range(len(lines) - 1)
                     if SIMPLE_STATEMENT.match(lines[i]) and SIMPLE_STATEMENT.match(lines[i + 1])
                     and indent(lines[i]) == indent(lines[i + 1])]
            if not pairs:
                continue
            i = rng.choice(pairs)
            lines[i], lines[i + 1] = lines[i + 1], lines[i]
            new_body = "\n".join(lines)
        elif kind == "move":
            # move one simple statement up or down past up to four simple statements of the same block
            simple = [i for i, line in enumerate(lines) if SIMPLE_STATEMENT.match(line)]
            if not simple:
                continue
            i = rng.choice(simple)
            step = rng.choice([-4, -3, -2, 2, 3, 4])
            j = i + step
            span = range(min(i, j), max(i, j) + 1)
            if j < 0 or j >= len(lines) or any(not SIMPLE_STATEMENT.match(lines[k]) or indent(lines[k]) != indent(lines[i]) for k in span):
                continue
            line = lines.pop(i)
            lines.insert(j, line)
            new_body = "\n".join(lines)
        elif kind == "constant":
            # hold an assigned constant in a named local first: `x = -1;` -> `s32 value = -1; x = value;`
            found = [i for i, line in enumerate(lines) if ASSIGN_CONST.match(line)]
            if not found:
                continue
            i = rng.choice(found)
            m = ASSIGN_CONST.match(lines[i])
            _temp_counter[0] += 1
            temp = f"value{_temp_counter[0]}"
            ctype = "void *" if m[3] == "NULL" else "s32 "
            lines[i] = f"{m[1]}{ctype}{temp} = {m[3]};\n{m[1]}{m[2].rstrip()} = {temp};"
            new_body = "\n".join(lines)
        elif kind == "split":
            # `T x = e;` -> `T x;\n x = e;` or merge back
            found = [i for i, line in enumerate(lines) if DECL_INIT.match(line) and not line.lstrip().startswith("return")]
            if not found:
                continue
            i = rng.choice(found)
            m = DECL_INIT.match(lines[i])
            if m[2].strip() in ("return", "else", "case", "delete"):
                continue
            lines[i] = f"{m[1]}{m[2]}{m[3]};\n{m[1]}{m[3]} = {m[4]};"
            new_body = "\n".join(lines)
        elif kind == "ifelse":
            matches = list(IF_ELSE.finditer(body))
            if not matches:
                continue
            m = rng.choice(matches)
            new_body = body[:m.start()] + f"if (!({m[1].strip()})) {{{m[3]}}} else {{{m[2]}}}" + body[m.end():]
        elif kind == "minus":
            spots = [m for m in re.finditer(r"(?<![\w.])(-1|~0)(?![\w.xX])", body)]
            if not spots:
                continue
            m = rng.choice(spots)
            new_body = body[:m.start()] + ("~0" if m[1] == "-1" else "-1") + body[m.end():]
        elif kind == "loop":
            matches = list(FOR_LOOP.finditer(body))
            if not matches:
                continue
            m = rng.choice(matches)
            init, cond, step, inner = (part.strip() for part in m.groups())
            if not cond or "continue" in inner:
                continue
            new_body = (body[:m.start()] + (f"{init}; " if init else "") + f"while ({cond}) {{{m[4]}"
                        + (f"    {step};\n" if step else "") + "}" + body[m.end():])
        elif kind in ("commute", "compare", "cond"):
            if kind == "commute":
                matches = list(COMMUTE.finditer(body))
                repl = lambda m: f"{m[1]}{m[4]} {m[3]} {m[2]}"
            elif kind == "compare":
                matches = list(COMPARE.finditer(body))
                repl = lambda m: f"{m[1]}{m[4]} {FLIP[m[3]]} {m[2]}"
            else:
                choice = rng.randrange(4)
                pattern = (NONZERO, BARE_COND, ZERO, NOT_COND)[choice]
                matches = list(pattern.finditer(body))
                repl = (lambda m: f"({m[1]}{m[2]})",
                        lambda m: f"{m[1]} ({m[2]}{m[3]} != 0)",
                        lambda m: f"({m[1]}!{m[2]})",
                        lambda m: f"{m[1]} ({m[2]}{m[3]} == 0)")[choice]
            if not matches:
                continue
            m = rng.choice(matches)
            new_body = body[:m.start()] + repl(m) + body[m.end():]
        else:
            decls = [i for i, line in enumerate(lines) if INT_DECL.match(line)]
            if not decls:
                continue
            i = rng.choice(decls)
            m = INT_DECL.match(lines[i])
            alternatives = {"s32": ["u32", "int"], "int": ["s32", "u32"], "u32": ["s32"],
                            "s16": ["u16", "s32"], "u16": ["s16", "u32"], "s8": ["u8", "s32"], "u8": ["s8", "u32"]}
            lines[i] = m[1] + rng.choice(alternatives[m[2]]) + m[3] + lines[i][m.end():]
            new_body = "\n".join(lines)
        if new_body != body:
            return text[:start] + new_body + text[end:]
    return None


# ---------------------------------------------------------------- search

def search(job):
    game, name, minutes, out, seed = job
    import json
    rng = random.Random(seed)
    module, _compiler = build_module(game)
    unit = module.UNITS_BY_FUNCTION.get(name)
    if unit is None:
        return game, name, None, None, 0, 0.0
    source_path = ROOT / game / unit["source"]
    original = source_path.read_text(encoding="utf-8")
    started = time.time()
    with tempfile.TemporaryDirectory() as scratch:
        start_score = score(game, unit, original, source_path, scratch)
        if start_score is None:
            return game, name, None, None, 0, 0.0
        best_text, best = original, start_score
        current_text, current = original, start_score
        tried, stall = 0, 0
        while best > 0 and time.time() - started < minutes * 60:
            variant = mutate(current_text, rng)
            if variant is None:
                current_text, current, stall = best_text, best, 0
                variant = mutate(current_text, rng)
                if variant is None:
                    break
            tried += 1
            value = score(game, unit, variant, source_path, scratch)
            if value is None:
                continue
            if value < best:
                best_text, best, stall = variant, value, 0
            if value <= current or rng.random() < 0.02:
                current_text, current = variant, value
            else:
                stall += 1
            if stall > 400:                       # restart from the best variant found so far
                current_text, current, stall = best_text, best, 0
        if best < start_score:
            target = Path(out) / game / f"{name}.cpp"
            target.parent.mkdir(parents=True, exist_ok=True)
            target.write_text(best_text, encoding="utf-8", newline="\n")
    return game, name, start_score, best, tried, round(time.time() - started, 1)


def main():
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("functions")
    parser.add_argument("--jobs", type=int, default=max(1, (os.cpu_count() or 2)))
    parser.add_argument("--minutes", type=float, default=10.0, help="search time per function")
    parser.add_argument("--out", default=str(ROOT / "build" / "permuter"))
    args = parser.parse_args()
    jobs = []
    for line in Path(args.functions).read_text(encoding="utf-8").splitlines():
        if line.strip() and not line.startswith("#"):
            game, name = line.split()[:2]
            jobs.append((game, name, args.minutes, args.out, hash((game, name)) & 0xFFFFFFFF))
    Path(args.out).mkdir(parents=True, exist_ok=True)
    results = Path(args.out) / "results.tsv"
    with multiprocessing.Pool(args.jobs) as pool:
        for game, name, start, best, tried, seconds in pool.imap_unordered(search, jobs):
            row = f"{game}\t{name}\t{start}\t{best}\t{tried}\t{seconds}"
            print(("MATCH " if best == 0 and start else "") + row, flush=True)
            with results.open("a", encoding="utf-8") as fh:
                fh.write(row + "\n")


if __name__ == "__main__":
    main()

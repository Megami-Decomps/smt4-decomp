"""Translation units: several units built from one source file.

    python -B tools/tu.py check [GAME...]    the rules below, and a self-test of the definition finder; exit 1 on a problem
    python -B tools/tu.py sync [GAME...]     write objdiff.json's source paths from config/project.json
    python -B tools/tu.py list [GAME...]     each shared source and the functions built from it

Most units have a source of their own. Units whose `source` in `config/project.json` names the same file are
one translation unit (TU), as the original file was: armcc compiles the whole file for each of them, and
build.py keeps only that unit's function in its object (`--split_sections`, then `carve`), so objdiff, fdiff
and relink still see one function per object. A TU's file-local `static` helpers and data are compiled with
every function of the file, which is what decides, for example, when armcc inlines a plain `static` helper:
late when the file calls it from several functions, early when it has one call.

Rules (`check`):
- each unit of a TU has its own definition in the file, found by its name (a mangled name by its
  `Class::method`), except a member defined in its class's header and one function at most (the file's
  static initialiser, which armcc generates); each has its own `object` and `target`;
- the units of a TU agree on `cflags`, `thumb` and `multifile`: the original compiled the file once;
- objdiff.json's entries name the unit's object as `base_path` and its source as `source_path` (`sync`
  rewrites the source paths).

A function's own text in a TU is the comment directly before its definition plus the definition; what is
outside every unit's definition (includes, declarations, static helpers, file comments) belongs to all of
them. tools/progress_site.py judges readability on that text and takes a function's `NON_MATCHING` note
from the comment before its definition (or from a note at the top of the file that names it, or names
none of the file's functions).
"""
import argparse
import json
import os
import re
import sys
from collections import defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(os.path.abspath(__file__)).parent))
from cxxnames import demangle  # noqa: E402

ROOT = Path(os.path.abspath(__file__)).parent.parent
GAMES = ("smt4", "smt4a")
SAME = ("cflags", "thumb", "multifile")


def load_project(game, root=ROOT):
    return json.loads((root / game / "config" / "project.json").read_text(encoding="utf-8"))


def by_source(units):
    """{source: [units]} in project order."""
    out = defaultdict(list)
    for unit in units:
        out[unit["source"]].append(unit)
    return out


def shared_sources(units):
    """{source: [units]} of the sources more than one unit is built from."""
    return {source: group for source, group in by_source(units).items() if len(group) > 1}


def mask(text):
    """`text` with comments and string/char literals blanked (same length, newlines kept): braces and
    names inside them do not count."""
    def blank(m):
        return re.sub(r"[^\n]", " ", m[0])
    return re.sub(r"/\*.*?\*/|//[^\n]*|\"(?:\\.|[^\"\\\n])*\"|'(?:\\.|[^'\\\n])*'", blank, text, flags=re.S)


def qualified(function):
    """What a definition of `function` spells: the plain name, or `Class::method` for a mangled one."""
    if function.startswith("_Z"):
        readable = demangle(function)
        if readable != function:
            return readable.split("(")[0]
    return function


def definition_span(text, function, masked=None):
    """(start, end) of `function`'s definition in `text`: from the comments directly before it (blank lines
    between allowed) through its closing brace. None when the file holds no definition by that name (a
    static initialiser's `__sti___...`, a structor armcc emits from a class)."""
    masked = mask(text) if masked is None else masked
    name = re.escape(qualified(function))
    pattern = re.compile(r"(?<![\w:~])" + name + r"\s*\([^;{}]*\)\s*(?:const\s*)?\{")
    for match in pattern.finditer(masked):
        line_start = masked.rfind("\n", 0, match.start()) + 1
        if not re.fullmatch(r"[\w\s\*&:<>,~]*", masked[line_start:match.start()]):
            continue  # a call (`if (f(x)) {`), not a definition
        depth, at = 1, match.end()
        while at < len(masked) and depth:
            depth += {"{": 1, "}": -1}.get(masked[at], 0)
            at += 1
        if depth:
            return None
        end = at + 1 if masked[at:at + 1] == "\n" else at
        start = line_start
        # Take the comment blocks right above the definition with it (its doc comment, its NON_MATCHING note).
        while True:
            before = text[:start].rstrip()
            if before.endswith("*/"):
                opened = text.rfind("/*", 0, len(before))
                head = text.rfind("\n", 0, opened) + 1
                if opened < 0 or text[head:opened].strip():
                    break
                start = head
            elif re.search(r"(?:^|\n)[ \t]*//[^\n]*$", before):
                start = before.rfind("\n") + 1 if "\n" in before else 0
                if not text[start:].lstrip().startswith("//"):
                    break
            else:
                break
        return start, end
    return None


def own_text(text, function, functions):
    """The text that is `function`'s in a TU whose units are `functions`: the file without the other units'
    definitions. The whole text when the file is the function's alone or holds no definition of it."""
    others = [f for f in functions if f != function]
    if not others:
        return text
    masked = mask(text)
    mine = definition_span(text, function, masked)
    if mine is None:
        return text
    spans = sorted({span for span in (definition_span(text, f, masked) for f in others) if span and span != mine})
    out, at = [], 0
    for start, end in spans:
        if start >= at:
            out.append(text[at:start])
            at = end
    out.append(text[at:])
    return "".join(out)


def note(text, function, functions):
    """The comments that head `function`'s part of its file: the file's start for a file of its own, the
    comments directly before its definition in a TU (with the definition's first line)."""
    if len(functions) > 1:
        span = definition_span(text, function)
        if span is not None:
            part = text[span[0]:span[1]]
            return part[:mask(part).find("{")]
    return text.lstrip()[:200]


def is_draft(text, function, functions):
    """A hand-written NON_MATCHING note (romwright's generated ones do not count) heads its part."""
    head = note(text, function, functions)
    if len(functions) < 2 or definition_span(text, function) is None:
        return head.startswith("/* NON_MATCHING:") and "romwright" not in head.split("*/")[0]
    # A note at the top of a TU's file covers the functions it names, or all of them when it names none.
    top = text.lstrip()
    top = top[:top.find("*/")] if top.startswith("/* NON_MATCHING:") and "romwright" not in top[:top.find("*/")] else ""
    if top and (re.search(rf"(?<![\w:]){re.escape(qualified(function))}(?!\w)", top)
                or not any(re.search(rf"(?<![\w:]){re.escape(qualified(f))}(?!\w)", top) for f in functions)):
        return True
    return any(b.startswith("/* NON_MATCHING:") and "romwright" not in b for b in re.findall(r"/\*.*?\*/", head, re.S))


def self_test():
    """The definition finder on a small TU: calls, comments, strings and members."""
    text = ('/* file */\n#include "a.h"\nstatic void helper(int x) { g = x; }\n\n'
            '/* NON_MATCHING: two lines */\n/* Does a. */\nvoid a(int x)\n{\n    if (b(x)) {\n        helper("}");\n    }\n}\n\n'
            '// Does b.\nint b(int x) { return x; /* } */ }\n'
            'Obj::Obj() { a(1); }\n')
    problems = []
    a = definition_span(text, "a")
    if not a or not text[a[0]:a[1]].startswith("/* NON_MATCHING") or not text[a[0]:a[1]].endswith("}\n}\n"):
        problems.append(f"definition of a: {a}")
    b = definition_span(text, "b")
    if not b or not text[b[0]:b[1]].startswith("// Does b.") or "a(1)" in text[b[0]:b[1]]:
        problems.append(f"definition of b: {b}")
    if definition_span(text, "_ZN3ObjC1Ev") is None:
        problems.append("Obj::Obj() not found for _ZN3ObjC1Ev")
    own = own_text(text, "b", ["a", "b", "_ZN3ObjC1Ev"])
    if "void a" in own or "helper(int x)" not in own or "Does b" not in own:
        problems.append("own_text of b")
    if not is_draft(text, "a", ["a", "b"]) or is_draft(text, "b", ["a", "b"]):
        problems.append("is_draft")
    headed = "/* NON_MATCHING: b: one register */\n" + text
    if not is_draft(headed, "b", ["a", "b", "_ZN3ObjC1Ev"]) or is_draft(headed, "_ZN3ObjC1Ev", ["a", "b", "_ZN3ObjC1Ev"]):
        problems.append("is_draft with a note at the top of the file")
    return problems


def check(game, root=ROOT):
    problems = []
    project = load_project(game, root)
    units = project["units"]
    for source, group in shared_sources(units).items():
        path = root / game / source
        if not path.exists():
            problems.append(f"{game} {source}: missing ({', '.join(u['function'] for u in group)})")
            continue
        text = path.read_text(encoding="utf-8")
        masked = mask(text)
        # One unit may have no definition of its own: the file's static initialiser (armcc's `__sti___...`,
        # which build.py names after the unit) or a structor armcc emits from the class.
        undefined = [u["function"] for u in group
                     if not u["function"].startswith("_Z") and definition_span(text, u["function"], masked) is None]
        if len(undefined) > 1:
            problems.append(f"{game} {source}: no definition of {', '.join(undefined)}")
        for key in SAME:
            values = {json.dumps(u.get(key), sort_keys=True) for u in group}
            if len(values) > 1:
                problems.append(f"{game} {source}: its units differ in {key} ({', '.join(sorted(values))})")
    for key in ("object", "target"):
        seen = defaultdict(list)
        for unit in units:
            seen[unit[key]].append(unit["function"])
        problems += [f"{game}: {', '.join(names)} share the {key} {path}" for path, names in seen.items() if len(names) > 1]
    objdiff = json.loads((root / game / "objdiff.json").read_text(encoding="utf-8"))
    entries = {e["base_path"]: e for e in objdiff["units"]}
    for unit in units:
        entry = entries.get(unit["object"])
        if entry is None:
            problems.append(f"{game} {unit['function']}: no objdiff.json entry for {unit['object']}")
        elif entry["metadata"].get("source_path") != unit["source"]:
            problems.append(f"{game} {unit['function']}: objdiff.json source_path {entry['metadata'].get('source_path')} "
                            f"is not {unit['source']} (tools/tu.py sync)")
    return problems


def sync(game, root=ROOT):
    """objdiff.json's source paths from config/project.json; returns how many changed."""
    path = root / game / "objdiff.json"
    objdiff = json.loads(path.read_text(encoding="utf-8"))
    source = {u["object"]: u["source"] for u in load_project(game, root)["units"]}
    changed = 0
    for entry in objdiff["units"]:
        want = source.get(entry["base_path"])
        if want and entry["metadata"].get("source_path") != want:
            entry["metadata"]["source_path"] = want
            changed += 1
    if changed:
        path.write_text(json.dumps(objdiff, indent=2) + "\n", encoding="utf-8", newline="\n")
    return changed


def main():
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("command", choices=["check", "sync", "list"])
    parser.add_argument("games", nargs="*", help="smt4, smt4a (default both)")
    args = parser.parse_args()
    games = args.games or GAMES
    if set(games) - set(GAMES):
        parser.error(f"games are {', '.join(GAMES)}")
    if args.command == "list":
        for game in games:
            for source, group in shared_sources(load_project(game)["units"]).items():
                print(f"{game} {source}: {' '.join(u['function'] for u in group)}")
        return
    if args.command == "sync":
        for game in games:
            print(f"{game}: {sync(game)} objdiff.json source paths rewritten")
        return
    problems = [f"self-test: {p}" for p in self_test()]
    for game in games:
        problems += check(game)
    for problem in problems:
        print(problem)
    shared = sum(len(shared_sources(load_project(g)["units"])) for g in games)
    print(f"{shared} shared sources, {len(problems)} problems")
    sys.exit(1 if problems else 0)


if __name__ == "__main__":
    main()

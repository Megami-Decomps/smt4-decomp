"""Check the "one declaration" rule: a unit must not redeclare a function or global that a shared header
declares, nor define its own struct under a name a shared header defines.

    python -B tools/declcheck.py              compare with tools/declcheck_baseline.txt; fail on new cases
    python -B tools/declcheck.py --update     rewrite the baseline (after fixing cases, to lock them in)

Shared headers are everything under include/ and each game's <game>/include/. A unit (`<game>/src/**.cpp`)
that writes its own prototype or `extern` of a name one of them declares, or its own `struct X {` for a
type one of them defines, keeps a second description of something that already has one (see
docs/CONTRIBUTING.md, "One struct per object"). The units that did so before this check existed are
listed in the baseline; the check fails only on new ones, so the list can only shrink.
"""
import argparse
import os
import re
import sys
from pathlib import Path

ROOT = Path(os.path.abspath(__file__)).parent.parent
COMMENT = re.compile(r"/\*.*?\*/|//[^\n]*", re.S)
PROTO = re.compile(r"^[ \t]*(?:extern\s+(?:\"C\"\s+)?)?(?:static\s+)?(?:const\s+)?[A-Za-z_][\w:<>]*[\s\*&]+([A-Za-z_]\w*)\s*\([^;{}()]*(?:\([^()]*\)[^;{}()]*)*\)\s*;", re.M)
EXTERN = re.compile(r"^[ \t]*extern\s+(?:\"C\"\s+)?(?:const\s+)?(?:struct\s+)?[A-Za-z_][\w:]*[\s\*]+([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*;", re.M)
STRUCT = re.compile(r"\b(?:struct|class|union)\s+([A-Za-z_]\w*)\s*(?::[^{;]*)?\{")
SKIP = {"return", "if", "while", "for", "switch", "sizeof", "operator", "else", "new", "delete"}
BASELINE = ROOT / "tools" / "declcheck_baseline.txt"


def names_in(text):
    text = COMMENT.sub("", text)
    funcs = {m[1] for m in PROTO.finditer(text) if m[1] not in SKIP}
    globs = {m[1] for m in EXTERN.finditer(text)}
    types = {m[1] for m in STRUCT.finditer(text)}
    return funcs | globs, types


def shared_names(game):
    decls, types = set(), set()
    for base in (ROOT / "include", ROOT / game / "include"):
        for header in base.rglob("*.h"):
            d, t = names_in(header.read_text(encoding="utf-8", errors="replace"))
            decls |= d
            types |= t
    return decls, types


def cases():
    found = set()
    for game in ("smt4", "smt4a"):
        decls, types = shared_names(game)
        for unit in sorted((ROOT / game / "src").rglob("*.cpp")):
            text = unit.read_text(encoding="utf-8", errors="replace")
            d, t = names_in(text)
            stem = unit.stem
            rel = unit.relative_to(ROOT).as_posix()
            for name in sorted((d & decls) - {stem}):     # a unit defines its own function: not a redeclaration
                found.add(f"{rel}\tdecl\t{name}")
            for name in sorted(t & types):
                found.add(f"{rel}\ttype\t{name}")
    return found


def main():
    ap = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    ap.add_argument("--update", action="store_true")
    args = ap.parse_args()
    now = cases()
    if args.update:
        BASELINE.write_text("".join(f"{c}\n" for c in sorted(now)), encoding="utf-8", newline="\n")
        print(f"baseline: {len(now)} existing cases")
        return
    old = set(BASELINE.read_text(encoding="utf-8").splitlines()) if BASELINE.exists() else set()
    new = sorted(now - old)
    fixed = len(old - now)
    print(f"{len(now)} cases ({len(old)} in the baseline, {fixed} fixed since)")
    if new:
        print(f"{len(new)} new redeclarations of shared names (include the header instead):")
        for c in new[:50]:
            print("  " + c.replace("\t", "  "))
        sys.exit(1)


if __name__ == "__main__":
    main()

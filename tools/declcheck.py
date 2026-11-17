"""Check the "one declaration" rule on a change: the units it touches must not ADD a prototype, extern or
struct of a name that a shared header declares.

    python -B tools/declcheck.py [BASE]      check `git diff BASE` (default: HEAD~1); exit 1 on new cases
    python -B tools/declcheck.py --all       count every existing case in the tree (no failure)

Shared headers are everything under include/ and each game's <game>/include/. A unit (`<game>/src/**.cpp`)
that writes its own prototype or `extern` of a name one of them declares, or its own `struct X {` for a
type one of them defines, keeps a second description of something that already has one (see
docs/CONTRIBUTING.md, "One struct per object"). Only lines the change adds are checked: moving a
declaration into a shared header never fails, even while older units still carry local copies. A local
declaration kept on purpose (the shared one's types change this caller's code) carries the comment
`// declcheck: local (reason)` on its line.
"""
import os
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(os.path.abspath(__file__)).parent.parent
COMMENT = re.compile(r"/\*.*?\*/|//[^\n]*", re.S)
PROTO = re.compile(r"^[ \t]*(?:extern\s+(?:\"C\"\s+)?)?(?:static\s+)?(?:const\s+)?(?!(?:else|return|do|case|goto|throw|delete|new|if|while|for|switch)\b)[A-Za-z_][\w:<>]*[\s\*&]+([A-Za-z_]\w*)\s*\([^;{}()]*(?:\([^()]*\)[^;{}()]*)*\)\s*;", re.M)
EXTERN = re.compile(r"^[ \t]*extern\s+(?:\"C\"\s+)?(?:const\s+)?(?:struct\s+)?[A-Za-z_][\w:]*[\s\*]+([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*;", re.M)
STRUCT = re.compile(r"\b(?:struct|class|union)\s+([A-Za-z_]\w*)\s*(?::[^{;]*)?\{")
SKIP = {"return", "if", "while", "for", "switch", "sizeof", "operator", "else", "new", "delete"}


def names_in(text):
    # A line marked `// declcheck: local (reason)` keeps its local declaration on purpose (the shared
    # one's types do not fit this caller yet); it is not counted.
    text = "\n".join(line for line in text.splitlines() if "declcheck: local" not in line)
    text = COMMENT.sub("", text)
    decls = {m[1] for m in PROTO.finditer(text) if m[1] not in SKIP} | {m[1] for m in EXTERN.finditer(text)}
    return decls, {m[1] for m in STRUCT.finditer(text)}


def shared_names(game):
    decls, types = set(), set()
    for base in (ROOT / "include", ROOT / game / "include"):
        for header in base.rglob("*.h"):
            d, t = names_in(header.read_text(encoding="utf-8", errors="replace"))
            decls |= d
            types |= t
    return decls, types


def game_of(path):
    return path.split("/", 1)[0] if path.startswith(("smt4/", "smt4a/")) else None


def added_lines(base):
    """{unit path: text of the lines the change adds} for the .cpp units under <game>/src."""
    diff = subprocess.run(["git", "diff", "--unified=0", base, "--", "smt4/src", "smt4a/src"],
                          cwd=ROOT, capture_output=True, text=True, encoding="utf-8", errors="replace").stdout
    out, current = {}, None
    for line in diff.splitlines():
        if line.startswith("+++ "):
            current = line[6:] if line.startswith("+++ b/") and line.endswith(".cpp") else None
        elif current and line.startswith("+") and not line.startswith("+++"):
            out.setdefault(current, []).append(line[1:])
    return {path: "\n".join(lines) for path, lines in out.items()}


def main():
    if "--all" in sys.argv:
        total = 0
        for game in ("smt4", "smt4a"):
            decls, types = shared_names(game)
            for unit in (ROOT / game / "src").rglob("*.cpp"):
                d, t = names_in(unit.read_text(encoding="utf-8", errors="replace"))
                total += len((d & decls) - {unit.stem}) + len(t & types)
        print(f"{total} local redeclarations of names a shared header declares")
        return
    base = sys.argv[1] if len(sys.argv) > 1 else "HEAD~1"
    shared = {}
    new = []
    for path, text in sorted(added_lines(base).items()):
        game = game_of(path)
        if game is None:
            continue
        if game not in shared:
            shared[game] = shared_names(game)
        decls, types = shared[game]
        d, t = names_in(text)
        stem = Path(path).stem
        new += [f"{path}: declares {n}" for n in sorted((d & decls) - {stem})]
        new += [f"{path}: defines struct {n}" for n in sorted(t & types)]
    if new:
        print(f"{len(new)} new local redeclarations of names a shared header declares (include the header instead):")
        for c in new[:60]:
            print("  " + c)
        sys.exit(1)
    print(f"no new redeclarations against {base}")


if __name__ == "__main__":
    main()

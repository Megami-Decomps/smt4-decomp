"""Check the "one declaration" rule on a change: the units it touches must not ADD a prototype, extern or
struct of a name that a shared header declares.

    python -B tools/declcheck.py [BASE]      check `git diff BASE` (default: HEAD~1); exit 1 on new cases
    python -B tools/declcheck.py --all       count every existing case in the tree (no failure)
    python -B tools/declcheck.py --all --ratchet   exit 1 when the count exceeds config/declcheck_ceiling.txt
    python -B tools/declcheck.py --all --lower     write a count below the ceiling there

Shared headers are everything under include/ and each game's <game>/include/. A unit (`<game>/src/**.cpp`)
that writes its own prototype or `extern` of a name one of them declares, or its own `struct X {` for a
type one of them defines, keeps a second description of something that already has one (see
docs/style-and-naming.md, "One struct per object"). Only lines the change adds are checked: moving a
declaration into a shared header never fails, even while older units still carry local copies. A local
declaration kept on purpose (the shared one's types change this caller's code) carries the comment
`// declcheck: local (reason)` on its line.

It also reports, without failing, each `static` (or `static __inline`/`inline`) function the change adds
to a unit that the unit then calls only once: such a helper needs evidence besides the diff (a twin, a
sibling doing the same, a header declaring it, or a real function's body; see docs/CONTRIBUTING.md,
"Matching rules").
"""
import os
import re
import subprocess
import shutil
import tempfile
import sys
from pathlib import Path

ROOT = Path(os.path.abspath(__file__)).parent.parent
# The most local redeclarations the tree may hold (CI runs --all --ratchet): it only ever comes down.
CEILING = ROOT / "config" / "declcheck_ceiling.txt"
COMMENT = re.compile(r"/\*.*?\*/|//[^\n]*", re.S)
PROTO = re.compile(r"^[ \t]*(?:extern\s+(?:\"C\"\s+)?)?(?:static\s+)?(?:const\s+)?(?!(?:else|return|do|case|goto|throw|delete|new|if|while|for|switch)\b)[A-Za-z_][\w:<>]*[\s\*&]+([A-Za-z_]\w*)\s*\([^;{}()]*(?:\([^()]*\)[^;{}()]*)*\)\s*;", re.M)
EXTERN = re.compile(r"^[ \t]*extern\s+(?:\"C\"\s+)?(?:const\s+)?(?:struct\s+)?[A-Za-z_][\w:]*[\s\*]+([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*;", re.M)
STRUCT = re.compile(r"\b(?:struct|class|union)\s+([A-Za-z_]\w*)\s*(?::[^{;]*)?\{")
STATIC = re.compile(r"^[ \t]*static\s+(?:(?:__inline|inline|__forceinline)\s+)?(?:const\s+)?(?:struct\s+)?[A-Za-z_][\w:<>]*(?:\s+const)?[\s\*&]+([A-Za-z_]\w*)\s*\(", re.M)
KEYWORDS = r"(?!(?:return|else|case|goto|throw|delete|new|if|while|for|switch|do)\b)"
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
    """{unit path: text of the lines the change adds} for the .cpp units under <game>/src.

    The working tree is compared as CI will see it once committed: untracked sources (a file
    `names.py` renamed, a new unit) count too, and a renamed file only for the lines it changed.
    That runs on a private copy of the index, so the real one is never touched."""
    paths = ["smt4/src", "smt4a/src"]
    env = dict(os.environ)
    with tempfile.TemporaryDirectory() as tmp:
        index = subprocess.run(["git", "rev-parse", "--git-path", "index"], cwd=ROOT, capture_output=True,
                               text=True).stdout.strip()
        index = Path(index) if Path(index).is_absolute() else ROOT / index
        if index.exists():
            shutil.copyfile(index, Path(tmp) / "index")
        env["GIT_INDEX_FILE"] = str(Path(tmp) / "index")
        subprocess.run(["git", "add", "-A", "--", *paths], cwd=ROOT, env=env, capture_output=True)
        diff = subprocess.run(["git", "diff", "--cached", "-M", "--unified=0", base, "--", *paths], cwd=ROOT, env=env,
                              capture_output=True, text=True, encoding="utf-8", errors="replace").stdout
    out, current = {}, None
    for line in diff.splitlines():
        if line.startswith("+++ "):
            current = line[6:] if line.startswith("+++ b/") and line.endswith(".cpp") else None
        elif current and line.startswith("+") and not line.startswith("+++"):
            out.setdefault(current, []).append(line[1:])
    return {path: "\n".join(lines) for path, lines in out.items()}


def single_use_helpers(added, text):
    """Static functions whose definition the added lines hold and that the unit calls exactly once."""
    added, text = COMMENT.sub("", added), COMMENT.sub("", text)
    found = []
    for name in sorted({m[1] for m in STATIC.finditer(added)}):
        definition = re.search(rf"^[ \t]*static\b[^;{{}}]*\b{name}\s*\([^;{{}}]*\)\s*\{{", text, re.M)
        if definition is None:
            continue  # a prototype, or the line was not a function after all
        declarations = len(re.findall(rf"^[ \t]*{KEYWORDS}(?:static\s+)?(?:(?:__inline|inline|__forceinline)\s+)?(?:const\s+)?"
                                      rf"(?:struct\s+)?[A-Za-z_][\w:<>]*(?:\s+const)?[\s\*&]+{name}\s*\(", text, re.M))
        uses = len(re.findall(rf"\b{name}\b", text)) - declarations
        if uses == 1 and re.search(rf"\b{name}\s*\(", text[:definition.start()] + text[definition.end():]):
            found.append(name)
    return found


def defined_elsewhere(name, path):
    """The other units that define a static function of this name (a twin or sibling to compare)."""
    listed = subprocess.run(["git", "grep", "-l", "-w", name, "--", "smt4/src", "smt4a/src"], cwd=ROOT,
                            capture_output=True, text=True, encoding="utf-8", errors="replace").stdout.split()
    return [other for other in listed if other != path and name in
            {m[1] for m in STATIC.finditer((ROOT / other).read_text(encoding="utf-8", errors="replace"))}]


def ratchet(total, write=False):
    """Hold the --all count at or below the tracked ceiling; --lower records a lower count."""
    ceiling = int(CEILING.read_text(encoding="utf-8").split()[0])
    rel = CEILING.relative_to(ROOT).as_posix()
    if total > ceiling:
        print(f"{total - ceiling} above the ceiling of {ceiling} ({rel}): include the shared header instead of "
              "declaring its names again (`python -B tools/declcheck.py BASE` lists the new ones)")
        sys.exit(1)
    if total < ceiling and write:
        CEILING.write_text(f"{total}\n", encoding="utf-8", newline="\n")
        print(f"ceiling lowered from {ceiling} to {total} in {rel}: commit it")
    elif total < ceiling:
        print(f"{ceiling - total} below the ceiling of {ceiling}: lower it with "
              f"`python -B tools/declcheck.py --all --lower` (writes {total} to {rel}) and commit that")
    else:
        print(f"at the ceiling ({rel})")


def main():
    if "--all" in sys.argv:
        total = 0
        for game in ("smt4", "smt4a"):
            decls, types = shared_names(game)
            for unit in (ROOT / game / "src").rglob("*.cpp"):
                d, t = names_in(unit.read_text(encoding="utf-8", errors="replace"))
                total += len((d & decls) - {unit.stem}) + len(t & types)
        print(f"{total} local redeclarations of names a shared header declares")
        if "--ratchet" in sys.argv or "--lower" in sys.argv:
            ratchet(total, write="--lower" in sys.argv)
        return
    base = sys.argv[1] if len(sys.argv) > 1 else "HEAD~1"
    shared = {}
    new, helpers = [], []
    for path, text in sorted(added_lines(base).items()):
        game = game_of(path)
        if game is None:
            continue
        if (ROOT / path).exists():
            whole = (ROOT / path).read_text(encoding="utf-8", errors="replace")
            helpers += [(path, name) for name in single_use_helpers(text, whole)]
        if game not in shared:
            shared[game] = shared_names(game)
        decls, types = shared[game]
        d, t = names_in(text)
        stem = Path(path).stem
        new += [f"{path}: declares {n}" for n in sorted((d & decls) - {stem})]
        new += [f"{path}: defines struct {n}" for n in sorted(t & types)]
    if helpers:  # a report, never a failure
        print(f"{len(helpers)} new single-use helpers (needs evidence: twin, sibling, header, or real function body):")
        for path, name in helpers:
            others = defined_elsewhere(name, path)
            also = f" (also defined in {', '.join(others[:2])}{' ...' if len(others) > 2 else ''})" if others else ""
            print(f"  {path}: {name}{also}")
    if new:
        print(f"{len(new)} new local redeclarations of names a shared header declares (include the header instead):")
        for c in new[:60]:
            print("  " + c)
        sys.exit(1)
    print(f"no new redeclarations against {base}")


if __name__ == "__main__":
    main()

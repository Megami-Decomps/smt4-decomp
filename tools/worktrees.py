"""Git worktrees for parallel work, each able to build, fdiff and relink on its own.

    python -B tools/worktrees.py create NAME [NAME ...]   one detached worktree per name, at HEAD
    python -B tools/worktrees.py patch NAME [NAME ...]    write each one's changes to build/worktrees/NAME.patch
    python -B tools/worktrees.py remove NAME [NAME ...]   unlink the shared directories, then remove the worktree
    python -B tools/worktrees.py list

A worktree holds only tracked files; the dump, the retail target objects (`<game>/orig/`) and the
fetched toolchain (`<game>/build/tools/`) are ignored, so each worktree links those two directories to
this checkout's (a junction on Windows, a symlink elsewhere). Everything else under `build/` (objects,
report, relink output) is the worktree's own. Worktrees live in `wt/NAME` next to the repository
(`$WORKTREES_HOME` overrides `wt/`). Keep the path short: Windows' 260-character limit applies to
armcc and binutils, and the longest unit path (a mangled `__rb_tree` name) is over 220 characters below
the checkout root, so `create` refuses a worktree whose root would push it past the limit.

The linked directories are shared: do not run `tools/names.py` or `build.py split` in a worktree (both
rewrite `orig/target`). Rename in the main checkout after applying the patches.
"""

import argparse
import os
import shutil
import stat
import subprocess
import sys
from pathlib import Path

REPO = Path(os.path.abspath(__file__)).parent.parent
GAMES = ("smt4", "smt4a")
SHARED = ("orig", "build/tools")  # per game, relative to <game>/
HOME = Path(os.environ.get("WORKTREES_HOME") or REPO.parent / "wt")
PATCHES = REPO / "build" / "worktrees"
MAX_PATH = 259  # Windows' MAX_PATH (260) less the terminating NUL


def longest_unit_path():
    """The longest source, object or target path of any unit, relative to the checkout root."""
    import json
    longest = 0
    for game in GAMES:
        for unit in json.loads((REPO / game / "config" / "project.json").read_text(encoding="utf-8"))["units"]:
            longest = max(longest, *(len(f"{game}/{unit[key]}") for key in ("source", "object", "target") if key in unit))
    return longest


def git(*args, cwd=REPO, capture=False):
    done = subprocess.run(["git", *args], cwd=cwd, capture_output=capture, text=True, errors="replace")
    if done.returncode:
        raise SystemExit(f"git {' '.join(args)} failed in {cwd}{': ' + done.stderr.strip() if capture else ''}")
    return done.stdout if capture else ""


def is_link(path):
    """A symlink or a Windows junction (both reparse points)."""
    try:
        st = os.lstat(path)
    except FileNotFoundError:
        return False
    return stat.S_ISLNK(st.st_mode) or bool(getattr(st, "st_file_attributes", 0) & getattr(stat, "FILE_ATTRIBUTE_REPARSE_POINT", 0))


def link(path, target):
    path.parent.mkdir(parents=True, exist_ok=True)
    if os.name == "nt":
        # A junction needs no symlink privilege; mklink is a cmd builtin.
        done = subprocess.run(["cmd", "/c", "mklink", "/J", str(path), str(target)], capture_output=True, text=True, errors="replace")
        if done.returncode:
            raise SystemExit(f"mklink /J {path} {target}: {done.stdout.strip()} {done.stderr.strip()}")
    else:
        os.symlink(target, path, target_is_directory=True)


def unlink(path):
    """Remove a link without touching what it points to."""
    if not is_link(path):
        return
    if os.name == "nt":
        os.rmdir(path)  # removes the junction itself
    else:
        os.unlink(path)
    if is_link(path) or path.exists():
        raise SystemExit(f"could not unlink {path}")


def worktree(name):
    return HOME / name


def create(names):
    for game in GAMES:
        for shared in SHARED:
            if not (REPO / game / shared).is_dir():
                raise SystemExit(f"{game}/{shared} is missing in {REPO}: run `build.py fetch` and `build.py split` there first")
    longest = longest_unit_path() if os.name == "nt" else 0
    for name in names:
        path = worktree(name)
        if path.exists():
            raise SystemExit(f"{path} already exists")
        if longest and len(str(path)) + 1 + longest > MAX_PATH:
            raise SystemExit(f"{path} is too long: the longest unit path would be {len(str(path)) + 1 + longest} characters "
                             f"(limit {MAX_PATH}). Use a shorter NAME or set WORKTREES_HOME to a shorter directory.")
        try:
            git("worktree", "add", "--detach", str(path), "HEAD", capture=True)
        except SystemExit:
            if path.exists():
                subprocess.run(["git", "worktree", "remove", "--force", str(path)], cwd=REPO, capture_output=True)
                shutil.rmtree(path, ignore_errors=True)
            git("worktree", "prune")
            raise
        for game in GAMES:
            for shared in SHARED:
                link(path / game / shared, REPO / game / shared)
        print(f"{name}: {path}")


def patch(names):
    PATCHES.mkdir(parents=True, exist_ok=True)
    for name in names:
        path = worktree(name)
        if not path.is_dir():
            raise SystemExit(f"no worktree {path}")
        # Stage everything (new files included) to diff it, then unstage: the worktree stays as it was.
        git("add", "-A", cwd=path)
        try:
            diff = git("diff", "--cached", "--binary", "HEAD", cwd=path, capture=True)
        finally:
            git("reset", "-q", cwd=path)
        out = PATCHES / f"{name}.patch"
        out.write_text(diff, encoding="utf-8", newline="\n")
        files = sum(line.startswith("diff --git ") for line in diff.splitlines())
        print(f"{name}: {files} files -> {out.relative_to(REPO)}")


def remove(names):
    for name in names:
        path = worktree(name)
        if not path.is_dir():
            print(f"{name}: no worktree at {path}")
            continue
        for game in GAMES:
            for shared in SHARED:
                unlink(path / game / shared)
        git("worktree", "remove", "--force", str(path), capture=True)
        if path.exists():
            shutil.rmtree(path)
        print(f"{name}: removed")
    git("worktree", "prune")


def main():
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("command", choices=["create", "patch", "remove", "list"])
    parser.add_argument("names", nargs="*")
    args = parser.parse_args()
    if args.command == "list":
        sys.stdout.write(git("worktree", "list", capture=True))
        return
    if not args.names:
        parser.error(f"{args.command} needs at least one NAME")
    {"create": create, "patch": patch, "remove": remove}[args.command](args.names)


if __name__ == "__main__":
    main()

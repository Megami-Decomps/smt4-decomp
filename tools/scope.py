"""Which functions are third-party code: `python -B tools/scope.py [game ...]`.

Progress counts only first-party code: Atlus's engine (AsdSDK) and the game. Nintendo's SDK
(`nn`), NintendoWare (`nw`), the online library (NEX), the Mobiclip video library and the ARM
runtime are linked into the same image; they still have to relink byte-identically, but they are
not counted. There are no symbols to say which is which, so this writes
`<game>/config/third_party.txt` from evidence, and leaves everything uncertain counted:

- **name**: a function named as third-party code (`nn_`, `nw_`, `libc_`, `rt_`, `__`, `svc`,
  `online`/`nex`, `mwmo`/`mobiclip`, ...), most of them identified by matching Nintendo's SDK code;
- **callers**: every direct caller is third-party and it calls no first-party function (library
  code is reached from library code; Atlus code calls into libraries, never the reverse except
  through callbacks, which are not direct calls);
- **between**: unnamed, linked between third-party functions with nothing first-party in between,
  and no first-party caller.

First-party anchors: functions in an original source-file folder (`src/_code/<module>/<File>/`) and
names starting with `asd`. Run it again after naming passes.
"""
import argparse
import importlib.util
import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
GAMES = ("smt4", "smt4a")
THIRD_PARTY = re.compile(r"^(?:nn_|nw_|nngx|nnos|nnsnd|libc_|rt_|__|svc[A-Z]|online|nex|NEX|mwmo|mobiclip|Mobiclip"
                         r"|vldtr_|streamReader|streamWriter|sharedRef|wstr|_Z\w*(?:2nn|2nw)"
                         r"|_ZN?K?St|_ZN?K?4__rw|_Zn[wa]j|_Zd[la]Pv)")
FIRST_PARTY = re.compile(r"^(?:asd|Asd|_ZN\d+Asd)")
ADDRESS_FOLDER = re.compile(r"[0-9a-f]{4}")


def module(game, name):
    spec = importlib.util.spec_from_file_location(f"{name}_{game}", ROOT / game / "tools" / f"{name}.py")
    loaded = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(loaded)
    return loaded


def classify(game):
    """{address: (name, reason)} of the third-party functions."""
    root = ROOT / game
    split, n3ds = module(game, "split"), module(game, "n3ds")
    project = json.loads((root / "config" / "project.json").read_text(encoding="utf-8"))
    base, code, _segments = n3ds.load_code(root / project["image"]["orig"], "_code")
    functions = split.read_symbols(root / "config" / "symbols.txt")
    starts = sorted(functions)
    folder = {int(u["address"], 16): Path(u["source"]).parent.as_posix().removeprefix("src/_code/") for u in project["units"]}

    def owner(target):
        import bisect
        at = bisect.bisect_right(starts, target & ~1) - 1
        if at >= 0 and (target & ~1) < starts[at] + functions[starts[at]][1]:
            return starts[at]
        return None

    calls = {a: set() for a in starts}
    callers = {a: set() for a in starts}
    for a in starts:
        _name, size, thumb = functions[a]
        body = code[a - base:a - base + size]
        for _origin, target, _links in split.direct_branches(a, body, thumb, split.literal_pools(a, body, thumb)[0]):
            b = owner(target)
            if b is not None and b != a:
                calls[a].add(b)
                callers[b].add(a)

    def veneer(a):
        """armlink's code, not anyone's source: a long-branch veneer (`ldr pc, [pc, #-4]` and the
        address) or an ARM-to-Thumb entry (`add ip, pc, #1; bx ip`)."""
        import struct
        first, second = struct.unpack_from("<II", code, a - base)
        return not functions[a][2] and (first == 0xE51FF004 or (first & 0xFFFFFF00 == 0xE28FC000 and second == 0xE12FFF1C))

    label, reason = {}, {}
    for a in starts:
        name, where = functions[a][0], folder.get(a, "")
        if THIRD_PARTY.match(name):
            label[a], reason[a] = "third", "name"
        elif functions[a][1] <= 8 and veneer(a):
            label[a], reason[a] = "third", "linker"
        elif FIRST_PARTY.match(name) or (where and not ADDRESS_FOLDER.fullmatch(where)):
            label[a] = "first"
    changed = True
    while changed:
        changed = False
        for a in starts:
            if a in label or not callers[a]:
                continue
            if all(label.get(c) == "third" for c in callers[a]) and not any(label.get(b) == "first" for b in calls[a]):
                label[a], reason[a] = "third", "callers"
                changed = True
    following, last = {}, None
    for a in reversed(starts):
        following[a] = last
        if a in label:
            last = label[a]
    previous = None
    for a in starts:
        if a in label:
            previous = label[a]
        elif previous == "third" and following[a] == "third" and not any(label.get(c) == "first" for c in callers[a]):
            reason[a] = "between"
    return {a: (functions[a][0], reason[a]) for a in starts if a in reason}


def main():
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("games", nargs="*", default=GAMES)
    args = parser.parse_args()
    for game in args.games:
        third = classify(game)
        lines = [f"{a:#010x} {name} {why}" for a, (name, why) in sorted(third.items())]
        out = ROOT / game / "config" / "third_party.txt"
        out.write_text("# Third-party functions, not counted in progress: written by tools/scope.py.\n"
                       "# <address> <name at the time> <evidence: name | linker | callers | between>\n"
                       + "\n".join(lines) + "\n", encoding="utf-8", newline="\n")
        print(f"{game}: {len(third)} third-party functions -> {out.relative_to(ROOT)}")


if __name__ == "__main__":
    main()

"""Which functions are third-party code: `python -B tools/scope.py [game ...]`.

Progress counts only first-party code: Atlus's engine (AsdSDK) and the game. Nintendo's SDK
(`nn`), NintendoWare (`nw`), the online library (NEX), the Mobiclip video library and the ARM
runtime are linked into the same image; they still have to relink byte-identically, but they are
not counted. There are no symbols to say which is which, so this writes
`<game>/config/third_party.txt` from evidence, and leaves everything uncertain counted:

- **name**: a function named as third-party code (`nn_`, `nw_`, `libc_`, `libm_`, `rt_`, `__`, `svc`,
  `srv`, `online`/`nex`, `mwmo`/`mobiclip`, ...), most of them identified by matching Nintendo's SDK code;
- **library**: inside a library block listed with its evidence in `config/libraries.txt`;
- **callers**: every direct caller is third-party and it calls no first-party function (library
  code is reached from library code; Atlus code calls into libraries, never the reverse except
  through callbacks, which are not direct calls);
- **between**: unnamed, linked between third-party functions of its instruction set with nothing
  first-party in between, and no first-party caller;
- **twin**: the other game's twin of a function (`tools/shared.py`) gives the answer. An exact twin
  of a function third-party by name, library or linker is third-party, and one anchored first-party
  in the other game stays counted. A twin pair (exact or near) that the callers or between rules
  label in one game only is third-party when the other game also places it between third-party
  functions, or (callers) nothing first-party calls it or is called by it there; otherwise both stay
  counted, until `config/libraries.txt` gives evidence.

First-party anchors: functions in an original source-file folder (`src/_code/<module>/<File>/`) and
names starting with `asd`. Run it again after naming passes.
"""
import argparse
import bisect
import json
import os
import re
import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(os.path.abspath(__file__)).parent))
import n3ds  # noqa: E402
import shared  # noqa: E402
import split  # noqa: E402

ROOT = Path(os.path.abspath(__file__)).parent.parent
GAMES = ("smt4", "smt4a")
THIRD_PARTY = re.compile(r"^(?:nn_|nw_|nngx|nnos|nnsnd|libc_|libm_|mathlib_|rt_|__|svc[A-Z]|srv[A-Z]"
                         r"|online|nex|NEX|mwmo|mobiclip|Mobiclip"
                         r"|vldtr_|streamReader|streamWriter|sharedRef|wstr|_Z\w*(?:2nn|2nw)"
                         r"|_ZN?K?St|_ZN?K?4__rw|_Zn[wa]j|_Zd[la]Pv"
                         r"|(?:strn?cpy|strn?cmp|strn?cat|strlen|strchr|strrchr|strstr|memcpy|memset|memmove|memcmp)$)")
FIRST_PARTY = re.compile(r"^(?:asd|Asd|_ZN\d+Asd)")
ADDRESS_FOLDER = re.compile(r"[0-9a-f]{4}")


def evidence(game):
    """A game's functions, direct call graph and the labels its own evidence gives: "third" with a
    reason (name, library, linker) or "first" (an anchor)."""
    root = ROOT / game
    project = json.loads((root / "config" / "project.json").read_text(encoding="utf-8"))
    base, code, _segments = n3ds.load_code(root / project["image"]["orig"], "_code")
    functions = split.read_symbols(root / "config" / "symbols.txt")
    starts = sorted(functions)
    folder = {int(u["address"], 16): Path(u["source"]).parent.as_posix().removeprefix("src/_code/") for u in project["units"]}

    def owner(target):
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
        first, second = struct.unpack_from("<II", code, a - base)
        return not functions[a][2] and (first == 0xE51FF004 or (first & 0xFFFFFF00 == 0xE28FC000 and second == 0xE12FFF1C))

    # A library linked as one block, from evidence recorded in config/libraries.txt: each line
    # `<arm|thumb|any> <start> <end> <library> <evidence>`, the functions of that instruction set in
    # [start, end) (a block the linker interleaved with game code of the other set).
    libraries = []
    listing = root / "config" / "libraries.txt"
    for line in listing.read_text(encoding="utf-8").splitlines() if listing.exists() else ():
        if line.strip() and not line.startswith("#"):
            kind, start, end, *_ = line.split()
            libraries.append((kind, int(start, 16), int(end, 16)))

    label, reason = {}, {}
    for a in starts:
        name, where = functions[a][0], folder.get(a, "")
        if THIRD_PARTY.match(name):
            label[a], reason[a] = "third", "name"
        elif any(start <= a < end and kind in ("any", "thumb" if functions[a][2] else "arm") for kind, start, end in libraries):
            label[a], reason[a] = "third", "library"
        elif functions[a][1] <= 8 and veneer(a):
            label[a], reason[a] = "third", "linker"
        elif FIRST_PARTY.match(name) or (where and not ADDRESS_FOLDER.fullmatch(where)):
            label[a] = "first"
    return {"functions": functions, "starts": starts, "calls": calls, "callers": callers, "label": label, "reason": reason}


def twins():
    """The twin pairs of tools/shared.py, (smt4 address, smt4a address): the exact ones (the same code
    once the linker's addresses are masked, one candidate each way) and the near ones (the same code
    with struct offsets moved, paired by shape and call graph)."""
    left, right = (shared.load_game(game) for game in GAMES)
    exact = shared.pairs(left, right)
    near, _rejected = shared.near_pairs(left, right, exact, 8)
    return exact, [(a, b) for a, b, _moves, _why in near]


def derive(state, uncertain):
    """The rules that follow from the labels: callers, then between; a function in `uncertain` is
    left to neither (it stays counted) but does not stop them for its neighbours either. Returns the
    reasons and the functions placed between third-party ones (between, before its caller test)."""
    starts, calls, callers = state["starts"], state["calls"], state["callers"]
    functions = state["functions"]
    label, reason = dict(state["label"]), dict(state["reason"])
    changed = True
    while changed:
        changed = False
        for a in starts:
            if a in label or a in uncertain or not callers[a]:
                continue
            if all(label.get(c) == "third" for c in callers[a]) and not any(label.get(b) == "first" for b in calls[a]):
                label[a], reason[a] = "third", "callers"
                changed = True
    # Between: the neighbours are those of the same instruction set (the linker interleaves a Thumb
    # library with ARM game code, so a Thumb library function says nothing about the ARM function
    # next to it).
    placed = set()
    for thumb in (False, True):
        run = [a for a in starts if functions[a][2] == thumb]
        following, last = {}, None
        for a in reversed(run):
            following[a] = last
            if a in label:
                last = label[a]
        previous = None
        for a in run:
            if a in label:
                previous = label[a]
            elif previous == "third" and following[a] == "third":
                placed.add(a)
                if a not in uncertain and not any(label.get(c) == "first" for c in callers[a]):
                    reason[a] = "between"
    return reason, placed


def classify_all():
    """{game: {address: (name, reason)}} of the third-party functions of both games."""
    state = {game: evidence(game) for game in GAMES}
    one, two = (state[game] for game in GAMES)
    exact, near = twins()
    # Twins: an exact twin pair is one function compiled once, so it gets one answer. A function the
    # other game proves third-party (name, library, linker) is third-party ("twin"); one the other
    # game anchors first-party stays counted (it is left to no rule, but it is no anchor for its
    # neighbours: its place says nothing about theirs). A function's own evidence wins.
    uncertain = {game: set() for game in GAMES}
    for a, b in exact:
        for game, mine, theirs, x, y in (("smt4", one, two, a, b), ("smt4a", two, one, b, a)):
            if x in mine["label"] or y not in theirs["label"] or theirs["reason"].get(y) == "twin":
                continue
            if theirs["label"][y] == "third":
                mine["label"][x], mine["reason"][x] = "third", "twin"
            else:
                uncertain[game].add(x)
    # The callers and between rules only infer from neighbours and call sites, and the two games
    # place and call the same function differently. When they infer third-party in one game and
    # nothing in the other, the pair (exact or near) gets one answer: third-party ("twin") when the
    # other game also places the function between third-party ones (only a first-party caller kept
    # it out of the between rule there: game code calls into libraries), or when only third-party
    # code calls it in one game and nothing first-party calls it or is called by it in the other;
    # else it is uncertain and stays counted in both. Evidence for either side goes in
    # config/libraries.txt (a library block in one game reaches an exact twin above; a near twin
    # needs its own block).
    while True:
        reason, placed = {}, {}
        for game in GAMES:
            reason[game], placed[game] = derive(state[game], uncertain[game])
        found = False
        for a, b in exact + near:
            if (a in reason["smt4"]) == (b in reason["smt4a"]) or a in uncertain["smt4"]:
                continue
            game, x = ("smt4a", b) if a in reason["smt4"] else ("smt4", a)
            why = reason["smt4"].get(a) or reason["smt4a"].get(b)
            mine = state[game]
            if x not in mine["label"] and (x in placed[game] or (why == "callers" and not any(
                    mine["label"].get(c) == "first" for c in mine["callers"][x] | mine["calls"][x]))):
                reason[game][x] = "twin"
            else:
                uncertain["smt4"].add(a)
                uncertain["smt4a"].add(b)
                found = True
        if not found:
            break
    return {game: {a: (s["functions"][a][0], reason[game][a]) for a in s["starts"] if a in reason[game]}
            for game, s in state.items()}


def classify(game):
    """{address: (name, reason)} of one game's third-party functions."""
    return classify_all()[game]


def main():
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("games", nargs="*", default=GAMES)
    args = parser.parse_args()
    everything = classify_all()
    for game in args.games:
        third = everything[game]
        lines = [f"{a:#010x} {name} {why}" for a, (name, why) in sorted(third.items())]
        out = ROOT / game / "config" / "third_party.txt"
        out.write_text("# Third-party functions, not counted in progress: written by tools/scope.py.\n"
                       "# <address> <name at the time> <evidence: name | library | linker | twin | callers | between>\n"
                       + "\n".join(lines) + "\n", encoding="utf-8", newline="\n")
        print(f"{game}: {len(third)} third-party functions -> {out.relative_to(ROOT)}")


if __name__ == "__main__":
    main()

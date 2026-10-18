#!/usr/bin/env python3
"""Assign SMT IV's functions to their original source files (translation units).

The retail linker did not keep each object's code together: every function is
its own section, and neighbouring functions belong to the same file only a
third of the time, so a file cannot be cut out of `.text` by address. Its
functions are found from evidence instead:

1. anchor: the function references a debug string holding a source path
   (`c:\\SMT4\\XRD686\\...\\file.cpp`, from asserts). Header paths (`.h`) are
   inline code shared by many files and anchor nothing.
2. data: `.data`/`.bss` still hold each object's variables together, so a
   variable used by one file's functions belongs to that file, and a variable
   between two variables of one file belongs to it too. A function joins the
   file most of its file-local variables (used by at most 8 functions)
   belong to. This repeats until nothing changes.

Measured with `--holdout` (anchors hidden and placed again from the rest):
about 88% of the functions the data rule places are in the right file. A
rule from the call graph (a function every caller of which is in one file)
placed hidden anchors right only 30% of the time and is not used. A function
the evidence does not place stays unassigned (its own unit). Writes
config/tus.json.

    python3 tools/assign_tus.py [--project smt4|smt4a] [--image <dump>] [--out <project>/config/tus.json]
    python3 tools/assign_tus.py --project smt4 --holdout 0.3    (accuracy on hidden anchors)

Standard library only.
"""
import argparse
import bisect
import collections
import json
import random
import re
import struct
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parent.parent
# The build trees: `c:\SMT4\XRD686\` (IV) and `c:\SMT4F\SMT4F\` (Apocalypse). Each game's own sources
# sit below `sdds4\program\` (IV 1.0, Apocalypse) or `sdds4\Patch\` (IV 1.2.0), the engine (`AsdSDK\`)
# beside or below it; both prefixes are dropped so one file has one path in both games.
SOURCE_ROOT = re.compile(r"^[A-Za-z]:\\(?:SMT4\\XRD686|SMT4F\\SMT4F)\\(?:sdds4\\(?:Patch|program)\\)?", re.IGNORECASE)
PATH_STRING = re.compile(rb"[A-Za-z]:\\[ -~]{4,200}?\.(?:cpp|cc|c|h|hpp|inl)\x00")


# The ARM11 code set of the image comes from tools/n3ds.py (NCCH/NCSD -> ExeFS .code -> BLZ),
# the loader tools/split.py and tools/relink.py share.

# --------------------------------------------------------------------------
# Facts read from the code
# --------------------------------------------------------------------------

def load_functions(symbols):
    pattern = re.compile(r"(\S+) = \S+:0x([0-9a-fA-F]+); // type:function size:0x([0-9a-fA-F]+)(?: mode:(\w+))?")
    functions = []
    for line in Path(symbols).read_text().splitlines():
        match = pattern.match(line)
        if match:
            functions.append((int(match[2], 16), int(match[3], 16), match[1], match[4] == "thumb"))
    functions.sort()
    return functions


def ror(value, amount):
    return ((value >> amount) | (value << (32 - amount))) & 0xFFFFFFFF if amount else value


class Image:
    def __init__(self, base, code, segments, functions):
        self.base, self.code, self.segments = base, code, segments
        self.functions = functions
        self.starts = [f[0] for f in functions]
        self.size = {f[0]: f[1] for f in functions}
        self.thumb = {f[0] for f in functions if f[3]}

    def word(self, address):
        offset = address - self.base
        if 0 <= offset <= len(self.code) - 4:
            return struct.unpack_from("<I", self.code, offset)[0]
        return None

    def function_at(self, address):
        index = bisect.bisect_right(self.starts, address) - 1
        if index >= 0 and address < self.starts[index] + max(self.size[self.starts[index]], 4):
            return self.starts[index]
        return None

    def in_segment(self, address, *names):
        return any(lo <= address < hi for lo, hi in (self.segments[n] for n in names))

    def scan(self, entry):
        """(data addresses read through literal pools or ADR, direct call targets) of an ARM function."""
        size = self.size[entry]
        if entry in self.thumb or size < 4:
            return set(), set()
        data, calls = set(), set()
        for address in range(entry, entry + size - 3, 4):
            word = self.word(address)
            if word is None:
                break
            if word >> 28 == 0xF:
                continue
            if word & 0x0F7F0000 == 0x051F0000:  # LDR Rt, [PC, #+/-imm]
                offset = word & 0xFFF
                slot = address + 8 + offset if word >> 23 & 1 else address + 8 - offset
                value = self.word(slot)
                if value is not None:
                    data.add(value)
            elif word & 0x0FFF0000 == 0x028F0000:  # ADD Rd, PC, #imm (ADR)
                data.add(address + 8 + ror(word & 0xFF, 2 * (word >> 8 & 0xF)))
            elif word & 0x0FFF0000 == 0x024F0000:  # SUB Rd, PC, #imm (ADR)
                data.add(address + 8 - ror(word & 0xFF, 2 * (word >> 8 & 0xF)))
            elif word >> 25 & 7 == 5:  # B / BL
                target = (address + 8 + ((word & 0xFFFFFF) ^ 0x800000) * 4 - 0x2000000) & 0xFFFFFFFF
                if target in self.size and not entry <= target < entry + size:
                    calls.add(target)
        return data, calls


def source_paths(image):
    """Address -> normalised TU path (no extension) of every source-path string."""
    paths = {}
    for match in PATH_STRING.finditer(image.code):
        text = match.group(0)[:-1].decode("ascii", "replace")
        if text.lower().endswith((".h", ".hpp", ".inl")):
            continue
        relative = SOURCE_ROOT.sub("", text).replace("\\", "/")
        relative = "/".join(part for part in relative.split("/") if part not in ("", "."))
        paths[image.base + match.start()] = relative.rsplit(".", 1)[0]
    return paths


# --------------------------------------------------------------------------
# Assignment
# --------------------------------------------------------------------------

def assign(image, facts, anchors):
    """Propagates `anchors` (function -> TU) through file-local data."""
    tu = dict(anchors)
    evidence = {entry: "anchor" for entry in anchors}
    users = collections.defaultdict(set)
    for entry, (data, _) in facts.items():
        for address in data:
            if image.in_segment(address, "data", "bss"):
                users[address].add(entry)
    variables = sorted(users)
    # A variable many functions use is shared state, not a file-local: it says nothing.
    local = {address for address, who in users.items() if len(who) <= 8}

    changed = True
    while changed:
        changed = False
        # Variables owned by one file, then the gaps between two variables of one file.
        owner = {}
        for address in variables:
            files = {tu[f] for f in users[address] if f in tu}
            if len(files) == 1:
                owner[address] = files.pop()
        owned = sorted(owner)
        for left, right in zip(owned, owned[1:]):
            if owner[left] == owner[right] and right - left <= 0x400:
                for address in variables[bisect.bisect_right(variables, left):bisect.bisect_left(variables, right)]:
                    owner.setdefault(address, owner[left])
        # Functions whose file-local variables point at one file.
        for entry, (data, _) in facts.items():
            if entry in tu:
                continue
            votes = collections.Counter(owner[a] for a in data if a in owner and a in local)
            if not votes:
                continue
            (best, count), runner = votes.most_common(1)[0], (votes.most_common(2) + [(None, 0)])[1][1]
            if count >= 3 * runner:
                tu[entry], evidence[entry] = best, "data"
                changed = True
    return tu, evidence


def main():
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("--project", default="smt4", help="the game's project directory (default: smt4)")
    parser.add_argument("--image", help="the dump (default: image.orig of <project>/config/project.json)")
    parser.add_argument("--module", default="_code")
    parser.add_argument("--out", help="default: <project>/config/tus.json")
    parser.add_argument("--holdout", type=float, help="hide this share of anchors and report how many come back right")
    args = parser.parse_args()
    root = (REPO / args.project).resolve()
    sys.path.insert(0, str(root / "tools"))
    from n3ds import load_code

    project = json.loads((root / "config" / "project.json").read_text())
    base, code, segments = load_code(args.image or root / project["image"]["orig"])
    image = Image(base, code, segments, load_functions(root / "config" / "symbols.txt"))
    facts = {entry: image.scan(entry) for entry, *_ in image.functions}
    paths = source_paths(image)

    anchor_votes = collections.defaultdict(collections.Counter)
    for entry, (data, _) in facts.items():
        for address in data:
            if address in paths:
                anchor_votes[entry][paths[address]] += 1
    anchors = {entry: votes.most_common(1)[0][0] for entry, votes in anchor_votes.items()}
    conflicts = sum(1 for votes in anchor_votes.values() if len(votes) > 1)
    # Anchors this scan cannot see (another tool's function bounds found the string
    # reference): `config/tus_extra.json`, `{"units": [{"address", "tu"}]}`.
    extra_path = root / "config" / "tus_extra.json"
    extra = 0
    if extra_path.is_file():
        for unit in json.loads(extra_path.read_text())["units"]:
            entry = int(unit["address"], 16)
            if entry in image.size and entry not in anchors:
                anchors[entry] = unit["tu"]
                extra += 1

    if args.holdout:
        rng = random.Random(4)
        hidden = set(rng.sample(sorted(anchors), int(len(anchors) * args.holdout)))
        kept = {entry: path for entry, path in anchors.items() if entry not in hidden}
        tu, _ = assign(image, facts, kept)
        placed = [entry for entry in hidden if entry in tu]
        right = sum(1 for entry in placed if tu[entry] == anchors[entry])
        print(f"holdout: {len(hidden)} anchors hidden, {len(placed)} placed again, {right} in the right file "
              f"({100 * right / max(len(placed), 1):.1f}% precision, {100 * len(placed) / max(len(hidden), 1):.1f}% recall)")
        return

    tu, evidence = assign(image, facts, anchors)
    units = [
        {"module": args.module, "address": f"{entry:#x}", "tu": tu[entry], "evidence": evidence[entry]}
        for entry in sorted(tu)
    ]
    counts = collections.Counter(evidence.values())
    document = {
        "schema": 1,
        "note": "Generated by tools/assign_tus.py: function -> original source file (no extension). "
                "Functions not listed are not placed by the evidence and stay one unit each.",
        "files": len(set(tu.values())),
        "evidence": dict(counts),
        "units": units,
    }
    out = Path(args.out) if args.out else root / "config" / "tus.json"
    out.write_text(json.dumps(document, indent=1) + "\n", newline="\n")
    print(f"{len(paths)} source-path strings, {len(anchors)} anchored functions ({conflicts} with more than one file, "
          f"{extra} from tus_extra.json)")
    print(f"placed {len(tu)} of {len(image.functions)} functions in {document['files']} files: "
          + ", ".join(f"{count} by {kind}" for kind, count in counts.most_common()))
    print(f"wrote {out}")


if __name__ == "__main__":
    main()

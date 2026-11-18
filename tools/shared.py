#!/usr/bin/env python3
"""Find the functions SMT IV and SMT IV: Apocalypse share, and what matching one game gives the other.

Both games were built from one engine (AsdSDK), one SDK and much of one game
(`sdds4`), so thousands of functions compile from the same source. Two
functions are twins when they have the same size and instruction set and the
same bytes once the parts the linker sets are masked: every call/branch target
and every literal-pool word that is an address inside the image's mapped
segments (Thumb bit allowed). The pool words the function's PC-relative loads
read are part of its signature even when the pool lies past its recorded size,
and every other word (floats, constants) must match exactly. A function with
more than one candidate in the other game is not paired.

For each pair the report says how far each game is (objdiff, from
`<game>/build/report.json`). A function matched in one game and not the other
is a porting candidate: the matched C, with the twin's names for its calls and
data, is very likely the twin's matching C too.

Near twins are the functions left over that differ only where a struct moved
(`GameState` against `GameStateA`): same size, instruction set, opcodes,
registers and internal branches once the immediate offsets of loads, stores and
add/sub, small literal-pool constants and switch-table addresses are masked, and
the changed offsets form one consistent map from each base register (an offset
always moves to the same new offset, two never merge; an ADD feeding an access
is folded into its offset; stack offsets separately). A shape with several
candidates is resolved by the call graph (calls and function pointers at the
same positions, paired callers calling them at the same position) and
`config/tus.json`, mutually and on positive evidence only, or left out; a pair
whose calls or callers point at other functions' twins is rejected. The port list is
every unproven first-party function whose twin, exact or near, is proven
(`<game>/build/relink/proof.json`, else objdiff's 100%), by size, with the
twin's source and the offsets to change.

    python3 tools/shared.py                 summary
    python3 tools/shared.py --list ported   matched in one game only (source paths of both)
    python3 tools/shared.py --list near     near twins and their offset maps
    python3 tools/shared.py --list port     unproven functions with a proven twin, largest first
    python3 tools/shared.py --json build/shared.json   {"exact": [...], "near": [...], "port": [...]}

Standard library only; reads `<game>/orig/<dump>` through tools/n3ds.py.
"""
import argparse
import collections
import json
import os
import re
import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(os.path.abspath(__file__)).parent))
import n3ds  # noqa: E402

REPO = Path(os.path.abspath(__file__)).parent.parent
GAMES = ("smt4", "smt4a")
SYMBOL = re.compile(r"(\S+) = \S+:0x([0-9a-fA-F]+); // type:function size:0x([0-9a-fA-F]+) mode:(\w+)")


def load_game(name):
    root = REPO / name
    project = json.loads((root / "config" / "project.json").read_text())
    image = root / project["image"]["orig"]
    if not image.exists():
        raise SystemExit(f"{name}: {image.relative_to(REPO)} not found: both games' dumps are needed (see README.md)")
    base, code, segments = n3ds.load_code(image)
    functions = {}
    for line in (root / "config" / "symbols.txt").read_text().splitlines():
        match = SYMBOL.match(line)
        if match:
            functions[int(match[2], 16)] = (match[1], int(match[3], 16), match[4] == "thumb")
    sources = {int(unit["address"], 16): unit.get("source") for unit in project["units"]}
    scores = {}
    report = root / "build" / "report.json"
    if report.exists():
        for unit in json.loads(report.read_text())["units"]:
            for function in unit.get("functions", []):
                scores[function["name"]] = function.get("fuzzy_match_percent", 0.0)
    proof = root / "build" / "relink" / "proof.json"
    if proof.exists() and json.loads(proof.read_text()).get("match"):
        proven, proven_by = set(json.loads(proof.read_text())["proven"]), "build/relink/proof.json"
    else:
        proven, proven_by = {n for n, s in scores.items() if s >= 100}, "build/report.json (objdiff 100%)"
    tus = root / "config" / "tus.json"
    tus = {int(u["address"], 16): u["tu"] for u in json.loads(tus.read_text())["units"]} if tus.exists() else {}
    third = root / "config" / "third_party.txt"
    third = {int(line.split()[0], 16) for line in third.read_text().splitlines()
             if line.strip() and not line.startswith("#")} if third.exists() else set()
    return {"name": name, "base": base, "code": code,
            "spans": [segments[part] for part in ("text", "rodata", "data", "bss") if part in segments],
            "functions": functions, "sources": sources, "scores": scores,
            "proven": proven, "proven_by": proven_by, "tus": tus, "third": third}


def literal_reads(game, address, size, thumb):
    """Byte offsets (from the function's start) of the aligned words its PC-relative loads read:
    A32 LDR/LDRB/LDRH/LDRSB/LDRSH/LDRD/VLDR and Thumb LDR with PC as the base. Pools can lie
    past `size`. One pass in address order, so a pool word inside the function is data once the
    scan reaches it and is not decoded. Also returns the offsets of the BL/BLX/B instructions."""
    offset = address - game["base"]
    code = game["code"]
    skew = address % 4  # pool words are aligned to the address, not the function
    words, data, branches = set(), set(), []

    def read(at, count):
        if at < 0:
            return
        first = ((at + skew) & ~3) - skew
        for word in range(first, at + count, 4):
            if 0 <= word and offset + word + 4 <= len(code):
                words.add(word)
                data.add(word)

    if thumb:
        at = 0
        while at + 2 <= size:
            half, = struct.unpack_from("<H", code, offset + at)
            if ((at + skew) & ~3) - skew in data:
                at += 2
            elif half & 0xF800 == 0x4800:  # LDR Rt, [PC, #imm8*4]
                read(((at + skew + 4) & ~3) - skew + (half & 0xFF) * 4, 4)
                at += 2
            elif half & 0xF800 == 0xF000 and at + 4 <= size:  # BL / BLX pair
                second, = struct.unpack_from("<H", code, offset + at + 2)
                if second & 0xD000 == 0xD000 or second & 0xD001 == 0xC000:
                    branches.append(at)
                    at += 4
                else:
                    at += 2
            else:
                at += 2
    else:
        for at in range(0, size - 3, 4):
            if at in data:
                continue
            word, = struct.unpack_from("<I", code, offset + at)
            if word >> 28 == 0xF:
                if word >> 25 == 0x7D:  # BLX imm
                    branches.append(at)
                continue
            if word >> 25 & 7 == 5:  # B / BL
                branches.append(at)
                continue
            base = at + 8
            if word & 0x0F7F0000 == 0x051F0000 or word & 0x0F7F0000 == 0x055F0000:  # LDR / LDRB Rt, [PC, #+/-imm12]
                read(base + (word & 0xFFF if word >> 23 & 1 else -(word & 0xFFF)), 1 if word >> 22 & 1 else 4)
            elif word & 0x0F7F00F0 in (0x014F00D0, 0x015F00B0, 0x015F00D0, 0x015F00F0):  # LDRD / LDRH / LDRSB / LDRSH
                imm = (word >> 4 & 0xF0) | (word & 0xF)
                kind = word & 0xF0
                read(base + (imm if word >> 23 & 1 else -imm), 8 if kind == 0xD0 and not word >> 20 & 1 else 2 if kind != 0xD0 else 1)
            elif word & 0x0F3F0E00 == 0x0D1F0A00:  # VLDR Sd/Dd, [PC, #+/-imm8*4]
                imm = (word & 0xFF) * 4
                read(base + (imm if word >> 23 & 1 else -imm), 8 if word >> 8 & 1 else 4)
    return sorted(words), branches


def masked(game, address, size, thumb):
    """What identifies the function apart from what the linker decides: its bytes with every
    branch target and every pool word that is an address of the image blanked, and the pool
    words its PC-relative loads read past its end (floats and constants compare exactly)."""
    offset = address - game["base"]
    code = game["code"]
    out = bytearray(code[offset:offset + size])
    words, branches = literal_reads(game, address, size, thumb)
    for at in branches:
        if thumb:
            first, second = struct.unpack_from("<HH", out, at)
            struct.pack_into("<HH", out, at, 0xF000, second & 0xD000)  # keep BL against BLX
        else:
            word, = struct.unpack_from("<I", out, at)
            struct.pack_into("<I", out, at, 0xFA000000 if word >> 28 == 0xF else word & 0xFF000000)
    tail = []
    for at in words:
        word, = struct.unpack_from("<I", code, offset + at)
        if any(start <= (word & 0xFFFFFFFE) <= end for start, end in game["spans"]):
            word = 0x11111111  # an address in the image
        if at + 4 <= size:
            struct.pack_into("<I", out, at, word)
        else:
            tail.append((at, word))
    return bytes(out), tuple(tail)


def pairs(left, right):
    index = collections.defaultdict(list)
    for address, (_, size, thumb) in right["functions"].items():
        index[(size, thumb, masked(right, address, size, thumb))].append(address)
    seen = collections.Counter()
    found = []
    for address, (_, size, thumb) in left["functions"].items():
        hits = index.get((size, thumb, masked(left, address, size, thumb)), [])
        if len(hits) == 1:
            found.append((address, hits[0]))
            seen[hits[0]] += 1
    return [(a, b) for a, b in found if seen[b] == 1]


# --------------------------------------------------------------------------
# Near twins: the same function with struct offsets moved
# --------------------------------------------------------------------------

SWITCH = 0x079FF100  # LDR PC, [PC, Rm, LSL #2]: a table of case addresses follows `b default`


def ror(value, amount):
    return ((value >> amount) | (value << (32 - amount))) & 0xFFFFFFFF if amount else value


def branch_target(game, address, at, thumb):
    """Where the BL/BLX/B at `at` goes."""
    pc = address + at
    if thumb:  # BL/BLX pair (ARMv6K has no other 32-bit Thumb encodings)
        first, second = struct.unpack_from("<HH", game["code"], pc - game["base"])
        imm = ((first & 0x7FF) << 12) | ((second & 0x7FF) << 1)
        if imm & 0x400000:
            imm -= 0x800000
        target = pc + 4 + imm
        return target & ~3 if not second & 0x1000 else target
    word, = struct.unpack_from("<I", game["code"], pc - game["base"])
    imm = word & 0xFFFFFF
    if imm & 0x800000:
        imm -= 0x1000000
    return pc + 8 + imm * 4 + ((word >> 24 & 1) * 2 if word >> 28 == 0xF else 0)


def arm_immediate(word):
    """(bits to mask, namespace, signed value) of the offset an A32 load/store or ADD/SUB immediate
    carries, or None. PC-relative forms are left alone (the layout decides them); SP-relative ones
    are the stack frame's namespace."""
    if word >> 28 == 0xF:
        return None
    rn = word >> 16 & 0xF
    if rn == 15:
        return None
    space = "sp" if rn == 13 else "off"
    up = word >> 23 & 1
    kind = word >> 25 & 7
    if kind == 2:  # LDR / STR / LDRB / STRB Rt, [Rn, #+/-imm12]
        imm = word & 0xFFF
        return 0x800FFF, space, imm if up else -imm
    if kind == 0 and word & 0x90 == 0x90 and word & 0x60 and word >> 22 & 1:  # LDRH / STRH / LDRSB / LDRSH / LDRD / STRD
        imm = (word >> 4 & 0xF0) | (word & 0xF)
        return 0x800F0F, space, imm if up else -imm
    if word & 0x0F200E00 == 0x0D000A00:  # VLDR / VSTR
        imm = (word & 0xFF) * 4
        return 0x8000FF, space, imm if up else -imm
    if kind == 1 and (word >> 21 & 0xF) in (2, 4):  # SUB / ADD Rd, Rn, #imm
        imm = ror(word & 0xFF, 2 * (word >> 8 & 0xF))
        return 0xFFF, space, imm if word >> 21 & 0xF == 4 else -imm
    return None


def thumb_immediate(half):
    """The same for a 16-bit Thumb instruction, plus its base register."""
    top = half >> 11
    if top in (0x0C, 0x0D, 0x0E, 0x0F, 0x10, 0x11):  # LDR/STR, LDRB/STRB, LDRH/STRH Rt, [Rn, #imm5]
        return 0x07C0, "off", (half >> 6 & 0x1F) * (4 if top < 0x0E else 1 if top < 0x10 else 2), half >> 3 & 7
    if top in (0x12, 0x13, 0x15):  # LDR/STR Rt, [SP, #imm8*4]; ADD Rd, SP, #imm8*4
        return 0x00FF, "sp", (half & 0xFF) * 4, 13
    if half & 0xFF00 == 0xB000:  # ADD/SUB SP, #imm7*4
        return 0x007F, "sp", -(half & 0x7F) * 4 if half & 0x80 else (half & 0x7F) * 4, 13
    if top in (0x06, 0x07):  # ADD/SUB Rdn, #imm8
        return 0x00FF, "off", half & 0xFF if top == 0x06 else -(half & 0xFF), half >> 8 & 7
    if half & 0xFC00 == 0x1C00:  # ADD/SUB Rd, Rn, #imm3
        return 0x01C0, "off", -(half >> 6 & 7) if half & 0x200 else half >> 6 & 7, half >> 3 & 7
    return None


def near_shape(game, address, size, thumb):
    """(key, slots, refs). key: the bytes with external branch targets and image addresses masked
    as `masked` does, and also every immediate offset of loads/stores/ADD/SUB, every pool word below
    0x10000 and every switch-table case address made relative to the function. Branches inside the
    function stay as they are, so the control flow must match. slots: (position, namespace, value,
    base register) of each masked offset, in order; refs: what each external branch and each pool address points at
    (a function's address, or None), in order, for the call graph.

    In ARM code an ADD/SUB immediate whose result a later access or ADD uses as its base is folded
    into that use (`add r0, r4, #0x4800; ldr r1, [r0, #0x224]` is one offset, 0x4a24), so a
    large offset armcc splits differently in the two games still compares as one field. Tracking
    is per register, within straight-line code, and forgets a register anything else may write."""
    offset = address - game["base"]
    code = game["code"]
    functions = game["functions"]
    out = bytearray(code[offset:offset + size])
    words, branches = literal_reads(game, address, size, thumb)
    skip, refs, slots, tail, labels = set(), [], [], [], set()
    for at in branches:
        skip.add(at)
        if thumb:
            skip.add(at + 2)
        target = branch_target(game, address, at, thumb)
        if address <= target < address + size:
            labels.add(target - address)
            continue
        if thumb:
            first, second = struct.unpack_from("<HH", out, at)
            struct.pack_into("<HH", out, at, 0xF000, second & 0xD000)
        else:
            word, = struct.unpack_from("<I", out, at)
            struct.pack_into("<I", out, at, 0xFA000000 if word >> 28 == 0xF else word & 0xFF000000)
        refs.append(target if target in functions else None)
    for at in words:
        skip.update((at, at + 2))
        word, = struct.unpack_from("<I", code, offset + at)
        if any(start <= (word & 0xFFFFFFFE) <= end for start, end in game["spans"]):
            refs.append(word & ~1 if word & ~1 in functions else None)
            word = 0x11111111
        elif word < 0x10000:
            slots.append((at, "off", word, None))
            word = 0x22222222
        if at + 4 <= size:
            struct.pack_into("<I", out, at, word)
        else:
            tail.append((at, word))
    step = 2 if thumb else 4
    # register -> (namespace, offset, index in slots of the ADD, register the offset is from); ADDs used as a base
    bases, folded = {}, set()
    for at in range(0, size - step + 1, step):
        if at in labels:
            bases.clear()
        if at in skip:
            if at in branches:
                bases.clear()
            continue
        if thumb:
            half, = struct.unpack_from("<H", out, at)
            found = thumb_immediate(half)
            if found:
                struct.pack_into("<H", out, at, half & ~found[0])
                slots.append((at, found[1], found[2], found[3]))
            continue
        word, = struct.unpack_from("<I", out, at)
        if word & 0x0FFFFFF0 == SWITCH:
            bases.clear()
            case = at + 8
            while case + 4 <= size:
                value, = struct.unpack_from("<I", out, case)
                if not address <= value < address + size:
                    break
                struct.pack_into("<I", out, case, value - address)
                skip.add(case)
                case += 4
            continue
        found = arm_immediate(word)
        rn, rd = word >> 16 & 0xF, word >> 12 & 0xF
        if found:
            struct.pack_into("<I", out, at, word & ~found[0])
            space, value, root = found[1], found[2], rn
            base = bases.get(rn)
            if base and base[0] == space:
                value += base[1]
                root = base[3]
                folded.add(base[2])
            slots.append((at, space, value, root))
            if word >> 25 & 7 == 1:  # ADD / SUB: rd now holds base + offset
                bases[rd] = (space, value, len(slots) - 1, root)
                continue
            # A load or store: forget the loaded register(s) and a written-back base.
            bases.pop(rd, None)
            if word & 0xF0 == 0xD0 and not word >> 25 & 7:  # LDRD / STRD: Rt and Rt+1
                bases.pop(rd + 1, None)
            if word >> 21 & 1 or not word >> 24 & 1:
                bases.pop(rn, None)
        elif word >> 28 == 0xF or word >> 25 & 7 in (4, 5, 6, 7):  # LDM/STM, branches, coprocessor
            bases.clear()
        else:  # any register field might be written
            for reg in (rn, rd, word >> 8 & 0xF, word & 0xF):
                bases.pop(reg, None)
        if 15 in bases or rd == 15:
            bases.clear()
    slots = [slot for index, slot in enumerate(slots) if index not in folded]
    slots.sort()
    return (size, thumb, bytes(out), tuple(tail)), tuple(slots), tuple(refs)


def offset_map(slots_a, slots_b):
    """The offsets that moved, {namespace: [(old, new), ...]}, or None when they are not one
    consistent map: from one base register (or among the pool constants), an offset moving to two
    places or two offsets merging into one. Different registers may hold different structs, so
    one offset can move through one register and stay through another."""
    forward, backward = collections.defaultdict(dict), collections.defaultdict(dict)
    moved = collections.defaultdict(set)
    for (_, space, a, reg), (_, other, b, _) in zip(slots_a, slots_b):
        if space != other or forward[space, reg].setdefault(a, b) != b or backward[space, reg].setdefault(b, a) != a:
            return None
        if a != b:
            moved[space].add((a, b))
    return {space: sorted(moves) for space, moves in moved.items()}


def near_pairs(left, right, exact, min_size):
    """Pairs the functions `exact` leaves out by `near_shape`. Returns (pairs, rejections), each
    pair (left address, right address, offset map, evidence)."""
    shapes = [{address: near_shape(game, address, size, thumb)
               for address, (_, size, thumb) in game["functions"].items()} for game in (left, right)]
    callers = collections.defaultdict(set)  # left function -> (caller, position of the call)
    for address, (_, _, refs) in shapes[0].items():
        for index, target in enumerate(refs):
            if target is not None and target != address:
                callers[target].add((address, index))
    pair = [dict(exact), {b: a for a, b in exact}]
    buckets = collections.defaultdict(lambda: ([], []))
    for side, game in enumerate((left, right)):
        for address, (_, size, _) in game["functions"].items():
            if size >= min_size and address not in pair[side]:
                buckets[shapes[side][address][0]][side].append(address)
    buckets = {key: sides for key, sides in buckets.items() if sides[0] and sides[1]}
    first = {key: len(ls) == 1 and len(rs) == 1 for key, (ls, rs) in buckets.items()}

    def judge(f, g):
        """(score, offset map, evidence), or why the pair is rejected."""
        moves = offset_map(shapes[0][f][1], shapes[1][g][1])
        if moves is None:
            return "inconsistent offsets"
        agree = 0
        for x, y in zip(shapes[0][f][2], shapes[1][g][2]):
            if x is None or y is None or (x == f and y == g):
                continue
            if pair[0].get(x) == y:
                agree += 1
            elif x in pair[0] or y in pair[1]:
                return "calls other twins"
        known = 0  # paired callers calling the two at the same position
        for p, index in callers.get(f, ()):
            refs = shapes[1][pair[0][p]][2] if p in pair[0] else ()
            y = refs[index] if index < len(refs) else None
            if y == g:
                known += 1
            elif y is not None and y in shapes[1]:
                return "called as another function"
        tu_f, tu_g = left["tus"].get(f), right["tus"].get(g)
        place = 0 if tu_f is None or tu_g is None else 1 if tu_f == tu_g else -1
        why = [f"calls {agree}"] * bool(agree) + [f"callers {known}"] * bool(known) + ["file"] * (place > 0)
        return agree + known + place, moves, ", ".join(why)

    found = []
    while True:
        accepted = []
        for key, (ls, rs) in buckets.items():
            ls = [f for f in ls if f not in pair[0]]
            rs = [g for g in rs if g not in pair[1]]
            if not ls or not rs:
                continue
            scored = {}
            for f in ls:
                for g in rs:
                    verdict = judge(f, g)
                    if not isinstance(verdict, str):
                        scored[(f, g)] = verdict
            if first[key]:
                if scored:
                    _, moves, why = scored[(ls[0], rs[0])]
                    accepted.append((ls[0], rs[0], moves, "unique" + (f" ({why})" if why else "")))
                continue
            # Several candidates: the unique best of each side for the other, on positive evidence.
            best_g, best_f = {}, {}
            for (f, g), (score, _, _) in scored.items():
                best_g.setdefault(f, []).append((score, g))
                best_f.setdefault(g, []).append((score, f))
            for f, options in best_g.items():
                options.sort(reverse=True)
                score, g = options[0]
                rivals = sorted(best_f[g], reverse=True)
                if score > 0 and (len(options) == 1 or options[1][0] < score) \
                        and rivals[0] == (score, f) and (len(rivals) == 1 or rivals[1][0] < score):
                    accepted.append((f, g, scored[(f, g)][1], scored[(f, g)][2]))
        if not accepted:
            break
        for f, g, moves, why in accepted:
            pair[0][f], pair[1][g] = g, f
            found.append((f, g, moves, why))
    rejected = collections.Counter()
    for key, (ls, rs) in buckets.items():
        ls = [f for f in ls if f not in pair[0]]
        rs = [g for g in rs if g not in pair[1]]
        if first[key] and ls and rs:
            verdict = judge(ls[0], rs[0])
            rejected[verdict if isinstance(verdict, str) else "ambiguous"] += 1
        elif ls and rs:
            rejected["ambiguous"] += len(ls)
    return found, rejected


def moves_text(moves, invert=False):
    """{namespace: ["old->new", ...]}, inverted for the other game's direction."""
    return {space: [f"{b:#x}->{a:#x}" if invert else f"{a:#x}->{b:#x}"
                    for a, b in sorted(pairs, key=lambda move: move[invert])]
            for space, pairs in moves.items()}


def main():
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("--min-size", type=int, default=8, help="ignore functions smaller than this (bytes)")
    parser.add_argument("--list", choices=["ported", "all", "near", "port"],
                        help="print pairs: exact twins matched in one game only, every exact pair, the near twins, "
                             "or the port list (unproven functions with a proven twin)")
    parser.add_argument("--json", help="write the exact pairs, the near pairs and the port list to this file")
    args = parser.parse_args()

    left, right = (load_game(name) for name in GAMES)
    games = dict(zip(GAMES, (left, right)))
    exact = pairs(left, right)
    found = [(a, b) for a, b in exact if left["functions"][a][1] >= args.min_size]

    def row(a, b):
        name_a, size, thumb = left["functions"][a]
        name_b = right["functions"][b][0]
        return {
            "size": size, "thumb": thumb,
            GAMES[0]: {"address": f"{a:#x}", "function": name_a, "source": left["sources"].get(a),
                       "score": left["scores"].get(name_a)},
            GAMES[1]: {"address": f"{b:#x}", "function": name_b, "source": right["sources"].get(b),
                       "score": right["scores"].get(name_b)},
        }

    rows = [row(a, b) for a, b in found]
    done = lambda row, game: (row[game]["score"] or 0) >= 100
    both = sum(1 for row in rows if done(row, GAMES[0]) and done(row, GAMES[1]))
    only = [row for row in rows if done(row, GAMES[0]) != done(row, GAMES[1])]
    total = {game: sum(1 for (_, s, _) in g["functions"].values() if s >= args.min_size) for game, g in zip(GAMES, (left, right))}
    print(f"{len(rows)} twin functions ({sum(r['size'] for r in rows):,} bytes): "
          + ", ".join(f"{100 * len(rows) / total[g]:.0f}% of {g}'s {total[g]}" for g in GAMES))
    print(f"matched in both: {both}; matched in one only (porting candidates): {len(only)} "
          f"({sum(1 for r in only if done(r, GAMES[0]))} {GAMES[0]} -> {GAMES[1]}, "
          f"{sum(1 for r in only if done(r, GAMES[1]))} {GAMES[1]} -> {GAMES[0]})")

    near, rejected = near_pairs(left, right, exact, args.min_size)
    near_rows = []
    for a, b, moves, why in near:
        near_rows.append({**row(a, b), "evidence": why, "offsets": moves_text(moves)})
    moved = sum(1 for r in near_rows if r["offsets"])
    unique = sum(1 for r in near_rows if r["evidence"].startswith("unique"))
    print(f"{len(near_rows)} near twins ({sum(r['size'] for r in near_rows):,} bytes) besides the exact ones: "
          f"{moved} with moved offsets, {len(near_rows) - moved} without (several candidates, or a switch table); "
          f"{unique} the only candidates, {len(near_rows) - unique} chosen by calls/callers/file")
    print("left out: " + ", ".join(f"{count} {why}" for why, count in rejected.most_common()))

    # Port list: the unproven side of a pair whose other side is proven, offsets from the proven twin's to its own.
    port, third = [], 0
    for kind, r, moves in [("exact", r, {}) for r in rows] + [("near", r, n[2]) for r, n in zip(near_rows, near)]:
        for game, other in (GAMES, GAMES[::-1]):
            if r[game]["function"] in games[game]["proven"] or r[other]["function"] not in games[other]["proven"]:
                continue
            if int(r[game]["address"], 16) in games[game]["third"]:
                third += 1
                continue
            port.append({"game": game, "function": r[game]["function"], "address": r[game]["address"],
                         "size": r["size"], "class": kind, "source": r[game]["source"],
                         "twin": {"game": other, "function": r[other]["function"], "address": r[other]["address"],
                                  "source": r[other]["source"]},
                         "offsets": moves_text(moves, invert=game == GAMES[0])})
    port.sort(key=lambda p: (-p["size"], p["game"], p["address"]))
    print(f"port list: {len(port)} unproven first-party functions ({sum(p['size'] for p in port):,} bytes) whose twin is proven "
          f"({sum(1 for p in port if p['class'] == 'exact')} exact, {sum(1 for p in port if p['class'] == 'near')} near; "
          + ", ".join(f"{sum(1 for p in port if p['game'] == g)} in {g}" for g in GAMES)
          + f"; {third} third-party left out; proof: {left['proven_by']})")

    if args.list in ("ported", "all"):
        for row in (only if args.list == "ported" else rows):
            print(f"{row[GAMES[0]]['source'] or row[GAMES[0]]['function']}  <->  {row[GAMES[1]]['source'] or row[GAMES[1]]['function']}"
                  f"  ({row[GAMES[0]]['score']}% / {row[GAMES[1]]['score']}%)")
    elif args.list == "near":
        for r in near_rows:
            offsets = "; ".join(f"{space} " + " ".join(moves) for space, moves in r["offsets"].items())
            print(f"{GAMES[0]} {r[GAMES[0]]['function']}  <->  {GAMES[1]} {r[GAMES[1]]['function']}  {r['size']} bytes"
                  f"  [{r['evidence']}]" + (f"  {offsets}" if offsets else ""))
    elif args.list == "port":
        for p in port:
            offsets = "; ".join(f"{space} " + " ".join(moves) for space, moves in p["offsets"].items())
            print(f"{p['game']} {p['function']} ({p['size']} bytes, {p['class']})  <-  {p['twin']['game']} "
                  f"{p['twin']['source'] or p['twin']['function']}" + (f"  {offsets}" if offsets else ""))
    if args.json:
        Path(args.json).parent.mkdir(parents=True, exist_ok=True)
        Path(args.json).write_text(json.dumps({"exact": rows, "near": near_rows, "port": port}, indent=1) + "\n")
        print(f"wrote {args.json}")


if __name__ == "__main__":
    sys.exit(main())

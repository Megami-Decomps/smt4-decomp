"""Fix the function list the analysis made: split merged functions, add the ones it missed.

`units.py split ROWS.tsv`: each row `<game> <function> <hex offset of the second function> [<note>]`.
The first function keeps its name, address and source and shrinks to the offset; a new function
`FUN_<address>` starts there with the rest of the bytes. Typical case: a stub whose tail call to a
`__weak` noreturn hook armlink turned into a NOP, so the analysis ran it into the function that
follows.

`units.py missing [GAME...]` prints the rows `add` takes: code the analysis left between functions
that something reaches. Its evidence: a direct branch or call from a function, a word in a function's
literal pool (a callback), an ARM entry stub (`add ip, pc, #n; bx ip`) whose Thumb body follows, and,
found the same way, what those new functions reach. A new function ends at its first return or
jump that no branch inside it passes. Code that branches back into the function just before the gap
is that function's own tail, cut short where a switch case followed a return: the row extends it.
Code that runs straight into the next function, which nothing else reaches, is that function's real
start (armcc put a load or move before its push): the row moves it. A function that runs on into the
next one (no return, jump or linker NOP at the seam), which nothing calls or takes the address of and
only the run itself branches to, is a piece of one function the analysis cut up: the row joins them.

`units.py add ROWS.tsv`: each row `<game> <hex address> <hex size> arm|thumb|extend|move|drop|join
[<note>]`. A new function `FUN_<address>` gets a source file saying it is not written yet; `extend`
gives the function at the address the new size; `move` starts the function inside the bytes at the
address (one named `FUN_<old address>` is renamed in every file); `drop` removes the function at the
address and its source (data taken for code; the size is ignored); `join` makes the pieces in the
bytes one function, keeping the first real name, else the first written source, else the first piece.

`split` and `add` update `config/symbols.txt`, `config/project.json` and `objdiff.json`, then run
`build.py split` to rebuild the retail target objects.
"""
import argparse
import bisect
import importlib.util
import json
import re
import struct
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
GAMES = ("smt4", "smt4a")
sys.path.insert(0, str(Path(__file__).resolve().parent))


def module(game, name):
    spec = importlib.util.spec_from_file_location(f"{name}_{game}", ROOT / game / "tools" / f"{name}.py")
    loaded = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(loaded)
    return loaded


def load(game):
    directory = ROOT / game
    return ((directory / "config" / "symbols.txt").read_text(encoding="utf-8"),
            json.loads((directory / "config" / "project.json").read_text(encoding="utf-8")),
            json.loads((directory / "objdiff.json").read_text(encoding="utf-8")))


def save(game, state):
    directory = ROOT / game
    (directory / "config" / "symbols.txt").write_text(state[0], encoding="utf-8", newline="\n")
    (directory / "config" / "project.json").write_text(json.dumps(state[1], indent=2) + "\n", encoding="utf-8", newline="\n")
    (directory / "objdiff.json").write_text(json.dumps(state[2], indent=2) + "\n", encoding="utf-8", newline="\n")


def placeholder(game, source, note):
    path = ROOT / game / source
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(f"/* NON_MATCHING: {note}; not written yet. */\n#include \"common.h\"\n", encoding="utf-8", newline="\n")


def split(game, function, offset, note, state):
    symbols, project, objdiff = state
    line = re.search(r"^" + re.escape(function) + r" = (\S+?):?0x([0-9a-fA-F]+); // type:function size:0x([0-9a-fA-F]+)(.*)$",
                     symbols, re.M)
    if not line:
        raise SystemExit(f"{game}: no function {function} in config/symbols.txt")
    section, address, size, rest = line[1], int(line[2], 16), int(line[3], 16), line[4]
    if not 0 < offset < size or offset % 2:
        raise SystemExit(f"{game} {function}: offset {offset:#x} is not inside its {size:#x} bytes")
    second = address + offset
    name = f"FUN_{second:08x}"
    first_line = f"{function} = {section}:{address:#x}; // type:function size:{offset:#x}{rest}"
    second_line = f"{name} = {section}:{second:#x}; // type:function size:{size - offset:#x}{rest}"
    symbols = symbols[:line.start()] + first_line + "\n" + second_line + symbols[line.end():]

    units = project["units"]
    index = next(i for i, u in enumerate(units) if u["function"] == function)
    unit = units[index]
    unit["size"] = offset
    new = dict(unit, address=f"{second:#x}", function=name, size=size - offset)
    stem = Path(unit["source"]).stem
    for key in ("source", "object", "target"):
        new[key] = unit[key].replace(f"/{stem}.", f"/{name}.")
    new.pop("cflags", None)
    units.insert(index + 1, new)
    placeholder(game, new["source"], f"split off {function} at +{offset:#x} ({note or 'the analysis merged the two'})")

    entries = objdiff["units"]
    at = next(i for i, e in enumerate(entries) if e["metadata"]["source_path"] == unit["source"])
    entry = entries[at]
    entry["metadata"]["functions"] = [dict(f, size=offset) if f["name"] == function else f for f in entry["metadata"]["functions"]]
    copy = json.loads(json.dumps(entry))
    copy["base_path"] = new["object"]
    copy["target_path"] = new["target"]
    copy["metadata"]["source_path"] = new["source"]
    copy["metadata"]["functions"] = [{"name": name, "size": size - offset, "vram": f"{second:#x}"}]
    copy["name"] = entry["name"].rsplit("/", 1)[0] + "/" + name
    entries.insert(at + 1, copy)
    return symbols, project, objdiff


# --------------------------------------------------------------------------
# Functions the analysis missed
# --------------------------------------------------------------------------

def returns(value, thumb):
    """A return or a jump through a register: Thumb bx, mov pc, pop {pc}; ARM bx, ldm {..pc}, ldr pc,
    mov/add pc (not cmp/tst, which do not write it)."""
    if thumb:
        return value & 0xFF87 in (0x4700, 0x4687) or value & 0xFF00 == 0xBD00
    return value >> 28 == 0xE and (value & 0x0FFFFFF0 == 0x012FFF10 or value & 0x0E108000 == 0x08108000
                                   or value & 0x0C10F000 == 0x0410F000
                                   or (value & 0x0C00F000 == 0x0000F000 and not 8 <= value >> 21 & 0xF <= 11))


def function_end(split, entry, code, thumb):
    """Bytes of the function at the start of `code`: through the first return or unconditional jump
    that no earlier branch inside it passes, else all of `code` but a trailing pool and padding."""
    pools = split.literal_pools(entry, code, thumb)[0]
    reach, at, length = 0, 0, len(code)
    while at + (2 if thumb else 4) <= length:
        if any(start <= at < end for start, end in pools):
            at += 2 if thumb else 4
            continue
        stop = False
        if thumb:
            half = struct.unpack_from("<H", code, at)[0]
            if split.thumb_is_wide(half):
                at += 4
                continue
            if half & 0xF000 == 0xD000 and half & 0x0F00 < 0x0E00:     # b<cond>
                reach = max(reach, at + 4 + split.sign_extend(half & 0xFF, 8) * 2)
            elif half & 0xF800 == 0xE000:                              # b
                to = at + 4 + split.sign_extend(half & 0x7FF, 11) * 2
                reach = max(reach, to if to < length else 0)
                stop = True
            elif returns(half, True):
                stop = True
            at += 2
        else:
            word = struct.unpack_from("<I", code, at)[0]
            table = split.switch_table(code, at)
            if table:
                for case in range(table[0], min(table[0] + table[1] * 4, length - 3), 4):
                    to = struct.unpack_from("<I", code, case)[0] - entry
                    reach = max(reach, to if 0 <= to < length else 0)
            always = word >> 28 == 0xE
            if word >> 25 & 7 == 5 and word >> 28 != 0xF and not word >> 24 & 1:  # b
                to = at + 8 + split.sign_extend(word & 0xFFFFFF, 24) * 4
                reach = max(reach, to if to < length else 0)
                stop = always
            elif returns(word, False):
                stop = True
            at += 4
        if stop and at > reach:
            return at
    for start, end in sorted(pools, reverse=True):
        if start < length <= end:
            length = start
    step = 2 if thumb else 4
    while length >= step and code[length - step:length] in (b"\0" * step, b"\xff" * step):
        length -= step
    return length


def missing(game):
    """[(address, size, 'arm' | 'thumb' | 'extend' | 'move' | 'join', note)] of what the analysis missed."""
    root = ROOT / game
    split, n3ds = module(game, "split"), module(game, "n3ds")
    project = json.loads((root / "config" / "project.json").read_text(encoding="utf-8"))
    base, code, _segments = n3ds.load_code(root / project["image"]["orig"], "_code")
    sections = next(m for m in json.loads((root / "config" / "modules.json").read_text(encoding="utf-8"))["modules"]
                    if m["id"] == "_code")["sections"]
    text = [(int(s["start"], 16), int(s["start"], 16) + int(s["size"], 16)) for s in sections if "x" in s["permissions"]]
    functions = split.read_symbols(root / "config" / "symbols.txt")
    names = {a: f[0] for a, f in functions.items()}
    sizes = {a: f[1] for a, f in functions.items()}
    known = sorted(functions)

    def body(address, size, thumb):
        step = 2 if thumb else 4
        return code[address - base:address - base + size // step * step]

    def next_known(address):
        at = bisect.bisect_right(known, address)
        return known[at] if at < len(known) else next(end for start, end in text if start <= address < end)

    def owner(address):
        at = bisect.bisect_right(known, address) - 1
        return known[at] if at >= 0 and address < known[at] + sizes[known[at]] else None

    # What the known functions reach: branch targets and pool words. A pool word is data, never a target.
    reached, pool_words, called, branch_origins = [], set(), set(), {}
    for address, (name, size, thumb) in functions.items():
        data = body(address, size, thumb)
        pools, words, end = split.literal_pools(address, data, thumb)
        if end > len(data) and address + end <= next_known(address):
            data = body(address, end, thumb)
            pools, words, end = split.literal_pools(address, data, thumb)
        for origin, to, links in split.direct_branches(address, data, thumb, pools):
            if thumb:
                to_thumb = struct.unpack_from("<H", data, origin - address + 2)[0] & 0x1000 != 0
            else:
                to_thumb = struct.unpack_from("<I", data, origin - address)[0] >> 25 == 0x7D
            reached.append((to, to_thumb, f"{'called' if links else 'branched to'} by {name}"))
            if links:
                called.add(to)
            else:
                branch_origins.setdefault(to, []).append(origin)
        for at in words:
            pool_words.add(address + at)
            if at + 4 <= len(data):
                value = struct.unpack_from("<I", data, at)[0]
                reached.append((value & ~1, bool(value & 1), f"its address is in {name}'s literal pool"))
                called.add(value & ~1)
    referenced = {to for to, _thumb, _note in reached}

    def candidate(address, thumb):
        head = code[address - base:address - base + 8]
        is_text = all(32 <= b < 127 or b == 0 for b in head) and any(b >= 0x41 for b in head)  # a string in .text
        return (address not in functions and owner(address) is None and address not in pool_words and not is_text
                and not address % (2 if thumb else 4) and any(start <= address < end for start, end in text))

    def clean_start(address):
        """Code can begin here: after a function, a pool word, padding, or a return or jump. A pool word
        holding an address inside some instruction sequence is a number, not a callback."""
        before = known[bisect.bisect_left(known, address) - 1]
        if before + sizes[before] == address or address - 4 in pool_words:
            return True
        word = struct.unpack_from("<I", code, address - base - 4)[0]
        jumps = lambda half: returns(half, True) or half & 0xF800 == 0xE000
        last, pad = word >> 16, word & 0xFFFF       # Thumb: the instruction before; or it and a pad
        return returns(word, False) or word >> 24 == 0xEA or jumps(last) or (last in (0, 0xFFFF) and jumps(pad))

    new = {}
    for address, thumb, note in reached:
        if candidate(address, thumb) and address not in new and ("literal pool" not in note or clean_start(address)):
            new[address] = (thumb, note)
    extend, found = {}, {}
    while True:
        starts = sorted(set(known) | set(new))
        found, grown, reached_new = {}, None, set()
        for address in sorted(new):
            thumb, note = new[address]
            limit = starts[bisect.bisect_right(starts, address)] if address < starts[-1] else next_known(address)
            data = body(address, limit - address, thumb)
            size = function_end(split, address, data, thumb)
            found[address] = size
            pools, words, _end = split.literal_pools(address, data[:size], thumb)
            word = struct.unpack_from("<I", data, 0)[0] if len(data) >= 8 else 0
            if not thumb and word & 0xFFFFFF01 == 0xE28FC001 and struct.unpack_from("<I", data, 4)[0] == 0xE12FFF1C:
                to = address + 8 + (word & 0xFF) - 1       # add ip, pc, #n; bx ip: the Thumb body
                if candidate(to, True) and to not in new:
                    grown = ("new", to, True, f"the Thumb body of the ARM entry stub FUN_{address:08x}")
                    break
            for origin, to, links in split.direct_branches(address, data[:size], thumb, pools):
                if address <= to < address + size:
                    continue
                before = known[bisect.bisect_left(known, address) - 1]
                if not links and before < to < before + sizes[before] and before + sizes[before] <= address:
                    grown = ("extend", before, origin, f"its tail ran on past {sizes[before]:#x} bytes")
                    break
                if thumb:
                    to_thumb = struct.unpack_from("<H", data, origin - address + 2)[0] & 0x1000 != 0
                else:
                    to_thumb = struct.unpack_from("<I", data, origin - address)[0] >> 25 == 0x7D
                reached_new.add(to)
                if candidate(to, to_thumb) and to not in new:
                    grown = ("new", to, to_thumb, f"{'called' if links else 'branched to'} by FUN_{address:08x}")
                    break
            for at in words if not grown else ():
                if at + 4 > len(data):
                    continue
                pool_words.add(address + at)
                value = struct.unpack_from("<I", data, at)[0]
                reached_new.add(value & ~1)
                if candidate(value & ~1, bool(value & 1)) and value & ~1 not in new and clean_start(value & ~1):
                    grown = ("new", value & ~1, bool(value & 1), f"its address is in FUN_{address:08x}'s literal pool")
                    break
            if grown:
                break
        if not grown:
            referenced |= reached_new
            break
        if grown[0] == "new":
            new[grown[1]] = (grown[2], grown[3])
            continue
        _kind, before, _origin, note = grown
        thumb = functions[before][2]
        size = function_end(split, before, body(before, next_known(before) - before, thumb), thumb)
        if size <= sizes[before]:
            raise SystemExit(f"{game}: {names[before]} branches back from past its end but does not grow")
        extend[before] = (size, f"{names[before]}: {note}")
        sizes[before] = size
        for address in [a for a in new if before < a < before + size]:
            del new[address]
    rows = [(address, size, "extend", note) for address, (size, note) in extend.items()]
    for address, (thumb, note) in new.items():
        if owner(address) is not None:
            continue
        size, after = found[address], next_known(address)
        # Falls through into the next function, which nothing else reaches: that function starts here
        # (armcc put a load or move before its push).
        if address + size == after and after in functions and after not in referenced and functions[after][2] == thumb:
            whole = after + sizes[after] - address
            if function_end(split, address, body(address, whole, thumb), thumb) > size:
                rows.append((address, whole, "move", f"{names[after]} starts here: {note}"))
                continue
        rows.append((address, size, "thumb" if thumb else "arm", note))
    # Fragments: a function that runs on into the next one (no return, jump or linker NOP at the seam),
    # which nothing calls or takes the address of and only the run itself branches to, is one function.
    # Each joined piece grows the run before the next seam is tested, so one pass finds whole runs.
    runs, order, at = {}, list(known), 0   # runs: {first piece: [piece starts]}
    while at + 1 < len(order):
        before, after = order[at], order[at + 1]
        thumb = functions[before][2]
        step = 2 if thumb else 4
        seam = struct.unpack_from("<H" if thumb else "<I", code, after - base - step)[0]
        if (before + sizes[before] == after and functions[after][2] == thumb and after not in called
                and all(before <= origin < after + sizes[after] for origin in branch_origins.get(after, ()))
                and seam not in (0xE1A00000, 0xE320F000, 0x46C0, 0xBF00)
                and function_end(split, before, body(before, sizes[before] + sizes[after], thumb), thumb) > sizes[before]):
            runs.setdefault(before, [before]).append(after)
            sizes[before] += sizes[after]
            del order[at + 1]
            continue
        at += 1
    for first, run in runs.items():
        rows.append((first, sizes[first], "join", " + ".join(names[a] for a in run) + " run into each other"))
    return sorted(rows)


FUNCTION_LINE = r"^(\S+) = (\S+?):?0x([0-9a-fA-F]+); // type:function size:0x[0-9a-fA-F]+(.*)$"


def add(game, address, size, kind, note, state, renames):
    symbols, project, objdiff = state
    units, entries = project["units"], objdiff["units"]
    lines = [(int(m[3], 16), m) for m in re.finditer(FUNCTION_LINE, symbols, re.M)]
    if kind == "drop":
        # Not code after all (data the analysis or `missing` took for a function): retail bytes again.
        found = next((m for a, m in lines if a == address), None)
        if not found:
            raise SystemExit(f"{game}: no function at {address:#x} in config/symbols.txt")
        symbols = symbols[:found.start()] + symbols[found.end() + 1:]
        unit = next(u for u in units if u["function"] == found[1])
        units.remove(unit)
        entries[:] = [e for e in entries if e["metadata"]["source_path"] != unit["source"]]
        (ROOT / game / unit["source"]).unlink()
        return symbols, project, objdiff
    if kind == "join":
        # One function the analysis cut into pieces: one piece keeps its name and source and spans them
        # all (the first with a real name, else the first whose source is written, else the first); the
        # other pieces and their sources go.
        pieces = [(a, m[1]) for a, m in lines if address <= a < address + size]
        source = {u["function"]: ROOT / game / u["source"] for u in units}
        written = lambda name: not source[name].read_text(encoding="utf-8").startswith("/* NON_MATCHING")
        keep = next((a for a, name in pieces if not re.fullmatch(r"FUN_[0-9a-f]{8}", name)),
                    next((a for a, name in pieces if written(name)), pieces[0][0]))
        for a, name in pieces:
            if a != keep:
                if not re.fullmatch(r"FUN_[0-9a-f]{8}", name):
                    print(f"{game}: {name} is part of {dict(pieces)[keep]} now; its name and source are dropped")
                state = add(game, a, 0, "drop", note, state, renames)
        return add(game, address, size, "extend" if keep == address else "move", note, state, renames)
    if kind in ("extend", "move"):
        # extend: the function at the address; move: the one that starts inside the new bytes.
        found = next((m for a, m in lines if (a == address if kind == "extend" else address < a < address + size)), None)
        if not found:
            raise SystemExit(f"{game}: no function to {kind} at {address:#x} in config/symbols.txt")
        name, old = found[1], int(found[3], 16)
        symbols = (symbols[:found.start()] + f"{name} = {found[2]}:{address:#x}; // type:function size:{size:#x}{found[4]}"
                   + symbols[found.end():])
        unit = next(u for u in units if u["function"] == name)
        unit.update(address=f"{address:#x}", size=size)
        entry = next(e for e in entries if e["metadata"]["source_path"] == unit["source"])
        entry["metadata"]["functions"] = [dict(f, size=size, vram=f"{address:#x}") if f["name"] == name else f
                                          for f in entry["metadata"]["functions"]]
        if old != address:
            names_map = ROOT / game / "config" / "names.map"
            text = names_map.read_text(encoding="utf-8")
            names_map.write_text(re.sub(rf"^{old:08x} {re.escape(name)}$", f"{address:08x} {name}", text, flags=re.M),
                                 encoding="utf-8", newline="\n")
            if name == f"FUN_{old:08x}":
                renames.append((name, f"FUN_{address:08x}"))
        return symbols, project, objdiff
    name = f"FUN_{address:08x}"
    after = next(((a, m) for a, m in lines if a > address), None)
    section = (after or lines[-1])[1][2]
    text = f"{name} = {section}:{address:#x}; // type:function size:{size:#x} mode:{kind}\n"
    at = after[1].start() if after else lines[-1][1].end() + 1
    symbols = symbols[:at] + text + symbols[at:]
    folder = f"_code/{address >> 16:04x}"
    unit = {"address": f"{address:#x}", "function": name, "module": "_code", "object": f"build/obj/{folder}/{name}.o",
            "size": size, "source": f"src/{folder}/{name}.cpp", "target": f"orig/target/{folder}/{name}.o",
            "thumb": kind == "thumb"}
    index = bisect.bisect_left([int(u["address"], 16) for u in units], address)
    if index < len(units) and entries[index]["metadata"]["source_path"] != units[index]["source"]:
        raise SystemExit(f"{game}: objdiff.json is not in config/project.json's order at {units[index]['function']}")
    units.insert(index, unit)
    entries.insert(index, {"base_path": unit["object"], "metadata": {
        "auto_generated": False, "complete": False, "functions": [{"name": name, "size": size, "vram": f"{address:#x}"}],
        "progress_categories": ["_code"], "source_path": unit["source"]}, "name": f"{folder}/{name}",
        "target_path": unit["target"]})
    placeholder(game, unit["source"], f"found outside every function: {note}")
    return symbols, project, objdiff


def main():
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("command", choices=["split", "missing", "add"])
    parser.add_argument("args", nargs="*", help="split/add: the rows file; missing: the games (default both)")
    args = parser.parse_args()
    if args.command == "missing":
        for game in args.args or GAMES:
            for address, size, kind, note in missing(game):
                print(f"{game}\t{address:#x}\t{size:#x}\t{kind}\t{note}")
        return
    rows = {}
    for line in Path(args.args[0]).read_text(encoding="utf-8").splitlines():
        if line.strip() and not line.startswith("#"):
            parts = line.split(None, 4 if args.command == "add" else 3)
            rows.setdefault(parts[0], []).append(parts[1:])
    for game, items in rows.items():
        state, renames = load(game), []
        for item in items:
            if args.command == "split":
                state = split(game, item[0], int(item[1], 16), item[2] if len(item) > 2 else "", state)
            else:
                state = add(game, int(item[0], 16), int(item[1], 16), item[2], item[3] if len(item) > 3 else "", state, renames)
        save(game, state)
        if renames:
            # A function named for its old address takes the new one, in every file that mentions it.
            import names
            files = names.Game(game)
            for old, new in renames:
                files.rename_function(old, new)
            files.write()
            names_map = ROOT / game / "config" / "names.map"
            names_map.write_text(re.sub(r"^[0-9a-f]{8} FUN_[0-9a-f]{8}\n", "", names_map.read_text(encoding="utf-8"), flags=re.M),
                                 encoding="utf-8", newline="\n")
        print(f"{game}: {len(items)} rows applied ({len(renames)} functions renamed for their new address); "
              "rebuilding orig/target with build.py split")
        subprocess.run([sys.executable, "-B", "build.py", "split"], cwd=ROOT / game, check=True)


if __name__ == "__main__":
    main()

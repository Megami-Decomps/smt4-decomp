"""Split a function the analysis merged into two: `units.py split ROWS.tsv`.

Each row: `<game> <function> <hex offset of the second function> [<one-line note>]`. The first
function keeps its name, address and source and shrinks to the offset; a new function
`FUN_<address>` starts there with the rest of the bytes and a source file that says it was split
off (to be written by hand). Updated: `config/symbols.txt`, `config/project.json`, `objdiff.json`;
then `build.py split` rebuilds the retail target objects.

Typical case: a stub whose tail call to a `__weak` noreturn hook armlink turned into a NOP, so the
analysis ran it into the function that follows.
"""
import argparse
import json
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent


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
    source = ROOT / game / new["source"]
    source.write_text(
        f"/* NON_MATCHING: split off {function} at +{offset:#x} ({note or 'the analysis merged the two'}); "
        "not written yet. */\n#include \"common.h\"\n", encoding="utf-8", newline="\n")

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


def main():
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("command", choices=["split"])
    parser.add_argument("rows")
    args = parser.parse_args()
    rows = {}
    for line in Path(args.rows).read_text(encoding="utf-8").splitlines():
        if not line.strip() or line.startswith("#"):
            continue
        parts = line.split(None, 3)
        rows.setdefault(parts[0], []).append((parts[1], int(parts[2], 16), parts[3] if len(parts) > 3 else ""))
    for game, items in rows.items():
        directory = ROOT / game
        state = ((directory / "config" / "symbols.txt").read_text(encoding="utf-8"),
                 json.loads((directory / "config" / "project.json").read_text(encoding="utf-8")),
                 json.loads((directory / "objdiff.json").read_text(encoding="utf-8")))
        for function, offset, note in items:
            state = split(game, function, offset, note, state)
        (directory / "config" / "symbols.txt").write_text(state[0], encoding="utf-8", newline="\n")
        (directory / "config" / "project.json").write_text(json.dumps(state[1], indent=2) + "\n", encoding="utf-8", newline="\n")
        (directory / "objdiff.json").write_text(json.dumps(state[2], indent=2) + "\n", encoding="utf-8", newline="\n")
        print(f"{game}: {len(items)} functions split; rebuilding orig/target with build.py split")
        subprocess.run([sys.executable, "-B", "build.py", "split"], cwd=directory, check=True)


if __name__ == "__main__":
    main()

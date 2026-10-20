"""Name functions and globals, everywhere at once.

    python -B tools/names.py apply ROWS.tsv
    python -B tools/names.py check ROWS.tsv     (validate only, change nothing)

Each row: `<game> <address or current name> <new name> <evidence|inferred> <note...>`.
`evidence` only when the binary itself names the thing (an assert string, a debug message, a
symbol table); everything else, including names carried over from another game or another decomp,
is `inferred`.

A function is renamed in `config/symbols.txt`, `config/names.map`, `config/project.json`,
`objdiff.json`, every `src/**.cpp` and `include/**.h` that mentions it, and its source file is
renamed with it. A global (an address in `.rodata`/`.data`/`.bss`) gets a `type:object` line in
`config/symbols.txt` and replaces `DAT_<address>` in the sources. Each row is recorded in
`config/name_sources.txt`. The retail target objects then name the new symbols, so the script
reruns `build.py split` for each game it changed (the dump has to be in `orig/`).
"""

import argparse
import json
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
IDENT = re.compile(r"^[A-Za-z_][A-Za-z0-9_]*$")


def read_rows(path):
    rows = []
    for number, line in enumerate(Path(path).read_text(encoding="utf-8").splitlines(), 1):
        if not line.strip() or line.lstrip().startswith("#"):
            continue
        parts = line.split(None, 4)
        if len(parts) < 4 or parts[0] not in ("smt4", "smt4a") or parts[3] not in ("evidence", "inferred"):
            raise SystemExit(f"{path}:{number}: want `<smt4|smt4a> <address|name> <new name> <evidence|inferred> <note>`")
        rows.append((number, parts[0], parts[1], parts[2], parts[3], parts[4] if len(parts) > 4 else ""))
    return rows


class Game:
    def __init__(self, game):
        self.game = game
        self.dir = ROOT / game
        self.symbols_path = self.dir / "config" / "symbols.txt"
        self.symbols = self.symbols_path.read_text(encoding="utf-8")
        self.project_path = self.dir / "config" / "project.json"
        self.project = json.loads(self.project_path.read_text(encoding="utf-8"))
        self.objdiff_path = self.dir / "objdiff.json"
        self.objdiff = self.objdiff_path.read_text(encoding="utf-8")
        self.names_map_path = self.dir / "config" / "names.map"
        self.names_map = self.names_map_path.read_text(encoding="utf-8") if self.names_map_path.exists() else ""
        modules = json.loads((self.dir / "config" / "modules.json").read_text(encoding="utf-8"))["modules"][0]
        self.sections = [(s["name"], int(s["start"], 16), int(s["start"], 16) + int(s["size"], 16), s["permissions"])
                         for s in modules["sections"]]
        self.functions = {}  # name -> address
        for match in re.finditer(r"^(\S+) = (?:\S+:)?0x([0-9a-fA-F]+); // (.*)$", self.symbols, re.M):
            self.functions[match[1]] = int(match[2], 16)
        self.renamed = []    # (old, new) source identifiers
        self.files = []      # (old source, new source)

    def taken(self, name):
        return name in self.functions

    def section_of(self, address):
        return next((s for s in self.sections if s[1] <= address < s[2]), None)

    def rename_function(self, old, new):
        unit = next((u for u in self.project["units"] if u["function"] == old), None)
        pattern = re.compile(r"^" + re.escape(old) + r"( = )", re.M)
        self.symbols, count = pattern.subn(new + r"\1", self.symbols)
        if count != 1:
            raise SystemExit(f"{self.game}: {old} is not one line of {self.symbols_path.relative_to(ROOT)}")
        address = self.functions.pop(old)
        self.functions[new] = address
        self.names_map = re.sub(r"^([0-9a-fA-F]{8}) " + re.escape(old) + r"$", r"\1 " + new, self.names_map, flags=re.M)
        if not re.search(rf"^{address:08x} ", self.names_map, re.M | re.I):
            self.names_map += f"{address:08x} {new}\n"
        if unit:
            for key in ("function", "source", "object", "target"):
                if key in unit:
                    unit[key] = re.sub(r"(?<![A-Za-z0-9_])" + re.escape(old) + r"(?![A-Za-z0-9_])", new, unit[key])
            old_source = re.sub(r"(?<![A-Za-z0-9_])" + re.escape(new) + r"(?![A-Za-z0-9_])", old, unit["source"])
            self.files.append((old_source, unit["source"]))
        self.objdiff = re.sub(r"(?<![A-Za-z0-9_])" + re.escape(old) + r"(?![A-Za-z0-9_])", new, self.objdiff)
        self.renamed.append((old, new))

    def name_global(self, address, new, size=None):
        section = self.section_of(address)
        if section is None or "x" in section[3]:
            raise SystemExit(f"{self.game}: {address:#x} is not in a data section")
        line = f"{new} = {section[0]}:{address:#x}; // type:object" + (f" size:{size:#x}" if size else "")
        self.symbols = self.symbols.rstrip("\n") + "\n" + line + "\n"
        self.functions[new] = address
        self.renamed.append((f"DAT_{address:08x}", new))

    def write(self):
        if not self.renamed:
            return False
        for old_source, new_source in self.files:
            old_path, new_path = self.dir / old_source, self.dir / new_source
            if old_path.exists() and old_path != new_path:
                subprocess.run(["git", "mv", str(old_path), str(new_path)], cwd=ROOT, check=True, capture_output=True)
        pattern = re.compile(r"(?<![A-Za-z0-9_])(" + "|".join(re.escape(o) for o, _ in self.renamed) + r")(?![A-Za-z0-9_])")
        mapping = dict(self.renamed)
        for path in list((self.dir / "src").rglob("*.cpp")) + list((self.dir / "include").rglob("*.h")):
            text = path.read_text(encoding="utf-8")
            changed = pattern.sub(lambda m: mapping[m[1]], text)
            if changed != text:
                path.write_text(changed, encoding="utf-8", newline="\n")
        self.symbols_path.write_text(self.symbols, encoding="utf-8", newline="\n")
        self.project_path.write_text(json.dumps(self.project, indent=2) + "\n", encoding="utf-8", newline="\n")
        self.objdiff_path.write_text(self.objdiff, encoding="utf-8", newline="\n")
        if self.names_map:
            self.names_map_path.write_text(self.names_map, encoding="utf-8", newline="\n")
        return True


def main():
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("command", choices=["apply", "check"])
    parser.add_argument("rows")
    args = parser.parse_args()
    games = {}
    sources = []
    for number, game, what, new, kind, note in read_rows(args.rows):
        state = games.setdefault(game, Game(game))
        if not IDENT.match(new) or new.startswith(("FUN_", "DAT_", "LAB_")):
            raise SystemExit(f"{args.rows}:{number}: {new!r} is not a name")
        if state.taken(new):
            raise SystemExit(f"{args.rows}:{number}: {game} already has {new}")
        address = int(what, 16) if re.fullmatch(r"(0x)?[0-9a-fA-F]{6,8}", what) else state.functions.get(what)
        if address is None:
            raise SystemExit(f"{args.rows}:{number}: {game} has no {what}")
        old = next((name for name, at in state.functions.items() if at == address), None)
        if old is not None and state.section_of(address) and "x" in state.section_of(address)[3]:
            state.rename_function(old, new)
        elif old is None:
            state.name_global(address, new)
        else:
            raise SystemExit(f"{args.rows}:{number}: {game} {address:#x} is already named {old}")
        sources.append((game, f"{address:08x} {new} {kind} {note}".rstrip()))
    if args.command == "check":
        print(f"{len(sources)} rows ok")
        return
    for game, state in games.items():
        if state.write():
            record = state.dir / "config" / "name_sources.txt"
            lines = [line for g, line in sources if g == game]
            with record.open("a", encoding="utf-8", newline="\n") as out:
                out.write("\n".join(lines) + "\n")
            print(f"{game}: {len(lines)} names applied; rebuilding orig/target with build.py split")
            subprocess.run([sys.executable, "-B", "build.py", "split"], cwd=state.dir, check=True)


if __name__ == "__main__":
    main()

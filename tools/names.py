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

sys.path.insert(0, str(Path(__file__).resolve().parent))
from cxxnames import file_stem  # noqa: E402

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
        self.by_address = {address: name for name, address in self.functions.items()}
        self.units = {u["function"]: u for u in self.project["units"]}
        self.renamed = []    # (old, new) identifiers, functions and globals
        self.functions_renamed = {}  # old -> new, for symbols.txt, names.map, project, objdiff
        self.new_symbols = []  # type:object lines to append
        self.files = []      # (old source, new source)
        self.stems = {}      # old file stem -> new file stem

    def taken(self, name):
        return name in self.functions

    def section_of(self, address):
        return next((s for s in self.sections if s[1] <= address < s[2]), None)

    def rename_function(self, old, new):
        address = self.functions.pop(old)
        self.functions[new] = address
        self.by_address[address] = new
        self.functions_renamed[old] = new
        unit = self.units.pop(old, None)
        if unit:
            # Files are named after the function, readably: `Obj558be0__stop.cpp` for a mangled name.
            old_source = unit["source"]
            old_stem, new_stem = file_stem(old), file_stem(new)
            unit["function"] = new
            for key in ("source", "object", "target"):
                if key in unit:
                    unit[key] = re.sub(r"(?<=/)" + re.escape(old_stem) + r"(?=\.)", new_stem, unit[key])
            self.units[new] = unit
            self.files.append((old_source, unit["source"]))
            self.stems[old_stem] = new_stem
        self.renamed.append((old, new))

    def name_global(self, address, new, size=None):
        section = self.section_of(address)
        if section is None or "x" in section[3]:
            return f"{self.game}: {address:#x} is not in a data section"
        self.new_symbols.append(f"{new} = {section[0]}:{address:#x}; // type:object" + (f" size:{size:#x}" if size else ""))
        self.functions[new] = address
        self.by_address[address] = new
        self.renamed.append((f"DAT_{address:08x}", new))
        return None

    def write(self):
        if not self.renamed:
            return False
        for old_source, new_source in self.files:
            old_path, new_path = self.dir / old_source, self.dir / new_source
            if old_path.exists() and old_path != new_path:
                # A unit tools/units.py just added is not tracked yet: git mv refuses it.
                tracked = subprocess.run(["git", "ls-files", "--error-unmatch", str(old_path)], cwd=ROOT, capture_output=True).returncode == 0
                if tracked:
                    subprocess.run(["git", "mv", str(old_path), str(new_path)], cwd=ROOT, check=True, capture_output=True)
                else:
                    old_path.rename(new_path)
        word = lambda names: re.compile(r"(?<![A-Za-z0-9_])(" + "|".join(re.escape(n) for n in sorted(names, key=len, reverse=True)) + r")(?![A-Za-z0-9_])")
        mapping = dict(self.renamed)
        everything = word(mapping)
        # The shared top-level include/ too: a header that declares one game's global uses that game's name.
        headers = list((self.dir / "include").rglob("*.h")) + list((ROOT / "include").rglob("*.h"))
        for path in list((self.dir / "src").rglob("*.cpp")) + headers:
            text = path.read_text(encoding="utf-8")
            changed = everything.sub(lambda m: mapping[m[1]], text)
            if changed != text:
                path.write_text(changed, encoding="utf-8", newline="\n")
        if self.functions_renamed:
            functions = self.functions_renamed
            self.symbols = re.sub(r"^(\S+)( = )", lambda m: functions.get(m[1], m[1]) + m[2], self.symbols, flags=re.M)
            self.names_map = re.sub(r"^([0-9a-fA-F]{8}) (\S+)$", lambda m: f"{m[1]} {functions.get(m[2], m[2])}", self.names_map, flags=re.M)
            # objdiff.json: paths and unit names take the file stem, the function entries the symbol.
            stems = self.stems
            if stems:
                self.objdiff = re.sub(r"(?<=/)(" + "|".join(re.escape(s) for s in sorted(stems, key=len, reverse=True)) + r")(?=[.\"])",
                                      lambda m: stems[m[1]], self.objdiff)
            self.objdiff = word(functions).sub(lambda m: functions[m[1]], self.objdiff)
        mapped = {int(m[1], 16) for m in re.finditer(r"^([0-9a-fA-F]{8}) ", self.names_map, re.M)}
        for old, new in self.functions_renamed.items():
            address = self.functions[new]
            if address not in mapped:
                self.names_map += f"{address:08x} {new}\n"
        if self.new_symbols:
            self.symbols = self.symbols.rstrip("\n") + "\n" + "\n".join(self.new_symbols) + "\n"
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
    errors = []
    for number, game, what, new, kind, note in read_rows(args.rows):
        state = games.setdefault(game, Game(game))
        where = f"{args.rows}:{number}"
        if not IDENT.match(new) or new.startswith(("FUN_", "DAT_", "LAB_")):
            errors.append(f"{where}: {new!r} is not a name")
            continue
        if state.taken(new):
            errors.append(f"{where}: {game} already has {new}")
            continue
        placeholder = re.fullmatch(r"(?:FUN|DAT|LAB)_([0-9a-fA-F]{8})", what)
        if placeholder:
            address = int(placeholder[1], 16)
        elif re.fullmatch(r"(0x)?[0-9a-fA-F]{6,8}", what):
            address = int(what, 16)
        else:
            address = state.functions.get(what)
        if address is None:
            errors.append(f"{where}: {game} has no {what}")
            continue
        old = state.by_address.get(address)
        section = state.section_of(address)
        if old is not None and section and "x" in section[3]:
            state.rename_function(old, new)
        elif old is None:
            # A note starting `size:0x1c` gives the global's size (a vtable: a pool word pointing inside
            # it, at its address point, then names it plus an addend).
            size = re.match(r"size:0x([0-9a-fA-F]+)\b", note or "")
            problem = state.name_global(address, new, int(size[1], 16) if size else None)
            if problem:
                errors.append(f"{where}: {problem}")
                continue
        else:
            errors.append(f"{where}: {game} {address:#x} is already named {old}")
            continue
        sources.append((game, f"{address:08x} {new} {kind} {note}".rstrip()))
    if errors:
        print("\n".join(errors))
        raise SystemExit(f"{len(errors)} rows rejected; nothing was changed")
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

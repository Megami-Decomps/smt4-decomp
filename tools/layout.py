"""Field offsets of struct views, as armcc lays them out, and every view of one object side by side.

    python -B tools/layout.py GAME FILE TYPE          the fields of TYPE as FILE sees it
    python -B tools/layout.py GAME --anchor SYMBOL    every view of the object a global (or the
                                                      object a function returns) is declared as,
                                                      merged by offset: which names each offset has

Many units describe the same object with their own partial struct (`struct GameStateA { u8 unk00[0x24];
s32 mode; ... }`). Merging them into one shared declaration needs the exact offset and size of every
field each view names, which this asks the compiler for: it appends a probe
`extern "C" const unsigned layout_probe[] = { sizeof(T), offsetof(T, a), sizeof(((T *)0)->a), ... }`
to the file, compiles it with the unit's own flags and reads the numbers back from the object.

FILE is a unit source (`smt4/src/...cpp`) or a header (`include/...h`, compiled inside an empty unit).
"""

import argparse
import collections
import importlib.util
import os
import re
import subprocess
import sys
import tempfile
from pathlib import Path

ROOT = Path(os.path.abspath(__file__)).parent.parent
sys.path.insert(0, str(ROOT / "tools"))
COMMENT = re.compile(r"/\*.*?\*/|//[^\n]*", re.S)
_builds = {}


def build_module(game):
    if game not in _builds:
        spec = importlib.util.spec_from_file_location(f"build_{game}", ROOT / game / "build.py")
        module = importlib.util.module_from_spec(spec)
        spec.loader.exec_module(module)
        compiler = module.find_compiler(argparse.Namespace(armcc=None, clang=None))
        _builds[game] = (module, compiler)
    return _builds[game]


def struct_body(text, name):
    """The member text of `struct|class|union NAME {...}` (the last definition in the text)."""
    found = None
    for m in re.finditer(r"\b(?:struct|class|union)\s+" + re.escape(name) + r"\s*(?::[^{;]*)?\{", text):
        depth, i = 1, m.end()
        while i < len(text) and depth:
            depth += {"{": 1, "}": -1}.get(text[i], 0)
            i += 1
        found = text[m.end():i - 1]
    if found is None:
        m = re.search(r"\btypedef\s+(?:struct|union)\s*\w*\s*\{", text)
        for m in re.finditer(r"\btypedef\s+(?:struct|union)\s*\w*\s*\{", text):
            depth, i = 1, m.end()
            while i < len(text) and depth:
                depth += {"{": 1, "}": -1}.get(text[i], 0)
                i += 1
            if re.match(r"\s*" + re.escape(name) + r"\s*;", text[i:]):
                found = text[m.end():i - 1]
    return found


def members(body):
    """(type text, name) of the data members at this level; nested anonymous struct/union members are
    flattened (C++ lets offsetof name them), named nested ones are one member."""
    out, depth, start, i = [], 0, 0, 0
    statements = []
    while i < len(body):
        c = body[i]
        if c == "{":
            depth += 1
        elif c == "}":
            depth -= 1
        elif c == ";" and depth == 0:
            statements.append(body[start:i].strip())
            start = i + 1
        i += 1
    for s in statements:
        s = re.sub(r"^\s*(?:public|private|protected)\s*:\s*", "", s)
        if not s or s.startswith(("static ", "typedef ", "friend ", "using ", "enum ")) or "operator" in s:
            continue
        nested = re.match(r"^(?:struct|union)\s*\w*\s*\{(.*)\}\s*(\w*)\s*(\[[^\]]*\])?$", s, re.S)
        if nested:
            if nested[2]:
                out.append((("union " if s.startswith("union") else "struct ") + "{...}" + (nested[3] or ""), nested[2]))
            else:
                out += members(nested[1])
            continue
        if "(" in s and not re.search(r"\(\s*\*\s*\w+\s*\)\s*\(", s):
            continue                                   # a method, or a constructor call
        if ":" in s.replace("::", ""):
            continue                                   # bit-field: offsetof cannot name it
        fp = re.search(r"\(\s*\*\s*(\w+)\s*\)", s)
        if fp:
            out.append((s, fp[1]))
            continue
        m = re.match(r"^(.*?[\w\*&>\s])\s*(\w+)\s*((?:\[[^\]]*\])*)\s*(?:,(.*))?$", s, re.S)
        if not m:
            continue
        base = m[1].strip()
        out.append((base + m[3], m[2]))
        for extra in (m[4] or "").split(","):
            e = re.match(r"\s*(\**)\s*(\w+)\s*((?:\[[^\]]*\])*)", extra)
            if e and e[2]:
                out.append((base.rstrip("*").strip() + e[1] + e[3], e[2]))
    return out


def layout(game, path, type_name):
    """[(offset, size, type, name)] and sizeof, or raises with the compiler's message."""
    path = Path(path)
    if not path.is_absolute():
        path = ROOT / path
    text = path.read_text(encoding="utf-8")
    body = struct_body(COMMENT.sub("", text), type_name)
    if body is None:
        # maybe defined in a header the file includes: search them
        for inc in re.findall(r'#include\s+"([^"]+)"', text):
            for base in (ROOT / "include", path.parent):
                h = base / inc
                if h.exists():
                    body = struct_body(COMMENT.sub("", h.read_text(encoding="utf-8")), type_name)
                    if body is not None:
                        break
            if body is not None:
                break
    if body is None:
        raise LookupError(f"no definition of {type_name} in {path.name} or its includes")
    fields = members(body)
    terms = [f"sizeof({type_name})"]
    for _t, name in fields:
        terms += [f"offsetof({type_name}, {name})", f"sizeof((({type_name} *)0)->{name})"]
    probe = ("\n#include <stddef.h>\nextern \"C\" const unsigned layout_probe[] = {\n    "
             + ",\n    ".join(f"(unsigned)({t})" for t in terms) + "\n};\n")
    if path.suffix == ".h":
        source_text = f'#include "common.h"\n#include "{path.relative_to(ROOT / "include").as_posix()}"\n'
    else:
        source_text = text
    module, compiler = build_module(game)
    unit = {"function": "layout_probe", "thumb": False}
    for u in module.UNITS_BY_FUNCTION.values():
        if path.suffix != ".h" and (ROOT / game / u["source"]).resolve() == path.resolve():
            unit = dict(u); unit.pop("multifile", None); break
    with tempfile.TemporaryDirectory() as scratch:
        src = path.with_name(f".layout_{os.getpid()}_{path.stem}.cpp") if path.suffix != ".h" else Path(scratch) / "probe.cpp"
        obj = Path(scratch) / "probe.o"
        src.write_text(source_text + probe, encoding="utf-8", newline="\n")
        try:
            done = subprocess.run(module.command(compiler, unit, src, obj), capture_output=True, text=True,
                                  encoding="utf-8", errors="replace", cwd=ROOT / game)
        finally:
            if src.exists() and src.parent != Path(scratch):
                src.unlink()
        if done.returncode or not obj.exists():
            raise RuntimeError((done.stdout + done.stderr).strip().splitlines()[:6])
        values = read_probe(game, obj, len(terms))
    size = values[0]
    rows = [(values[1 + 2 * i], values[2 + 2 * i], t, n) for i, (t, n) in enumerate(fields)]
    return sorted(rows), size


def read_probe(game, obj, count):
    import fdiff
    tool = fdiff.objdump(game)
    symbols = subprocess.run([tool, "-t", str(obj)], capture_output=True, text=True).stdout
    m = re.search(r"^([0-9a-f]+)\s.*?\s(\S+)\s+[0-9a-f]+\s+(?:\.hidden\s+)?layout_probe$", symbols, re.M)
    if not m:
        raise RuntimeError("probe symbol not found")
    offset, section = int(m[1], 16), m[2]
    dump = subprocess.run([tool, "-s", "-j", section, str(obj)], capture_output=True, text=True).stdout
    data = bytearray()
    for line in dump.splitlines():
        parts = re.match(r"^\s*([0-9a-f]+)\s((?:[0-9a-f]{2,8}\s){1,4})", line)
        if parts:
            for word in parts[2].split():
                data += bytes.fromhex(word)
    raw = data[offset:offset + 4 * count]
    return [int.from_bytes(raw[i:i + 4], "little") for i in range(0, len(raw), 4)]


def anchor_views(game, symbol):
    """Every (file, type) a unit or header declares SYMBOL with: `extern T *symbol;`, `extern T symbol;`,
    or `T *symbol(...)` for a function returning the object."""
    pattern = re.compile(r"(?:\bextern\s+(?:\"C\"\s+)?(?:const\s+)?(?:struct\s+)?(\w+)\s*\**\s*(?:const\s+)?" + re.escape(symbol)
                         + r"\s*(?:\[[^\]]*\])?\s*;)|(?:^|[;{}\s])(?:const\s+)?(?:struct\s+)?(\w+)\s*\*\s*" + re.escape(symbol) + r"\s*\([^;{]*\)\s*;", re.M)
    views = []
    files = list((ROOT / game / "src").rglob("*.cpp")) + list((ROOT / "include").rglob("*.h"))
    for f in files:
        text = f.read_text(encoding="utf-8", errors="replace")
        if symbol not in text:
            continue
        for m in pattern.finditer(COMMENT.sub("", text)):
            t = m[1] or m[2]
            if t and t not in ("int", "u32", "s32", "u8", "s8", "u16", "s16", "void", "char", "extern", "return"):
                views.append((f, t))
    return views


def main():
    ap = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    ap.add_argument("game")
    ap.add_argument("file", nargs="?")
    ap.add_argument("type", nargs="?")
    ap.add_argument("--anchor")
    args = ap.parse_args()
    if not args.anchor:
        rows, size = layout(args.game, args.file, args.type)
        print(f"{args.type}: sizeof {size:#x}")
        for off, sz, t, n in rows:
            print(f"  {off:#06x} {sz:#6x}  {t} {n}")
        return
    views = anchor_views(args.game, args.anchor)
    by_offset = collections.defaultdict(collections.Counter)
    failures, done = [], 0
    for f, t in views:
        try:
            rows, _size = layout(args.game, f, t)
        except Exception as e:
            failures.append((f, t, str(e)[:120])); continue
        done += 1
        for off, sz, ty, n in rows:
            if re.fullmatch(r"(unk|pad|field|_?unk)_?(0x)?[0-9a-fA-F]*|padding\w*|reserved\w*|_pad\w*", n):
                continue
            by_offset[(off, sz)][f"{ty} {n}"] += 1
    print(f"{args.anchor}: {len(views)} declarations, {done} laid out, {len(failures)} failed")
    for (off, sz), names in sorted(by_offset.items()):
        print(f"  {off:#06x} {sz:#6x}  " + "; ".join(f"{k} x{v}" for k, v in names.most_common(6)))
    for f, t, e in failures[:15]:
        print(f"  failed: {f.relative_to(ROOT)} {t}: {e}")


if __name__ == "__main__":
    main()

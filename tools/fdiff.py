"""Compile one function and diff its code against the retail function.

    python -B tools/fdiff.py <game> <function> [--no-build]

Builds the function's unit with the game's build.py, disassembles the retail target object and
the compiled object with relocations, and prints the instructions that differ. Branch and pool
offsets inside the function are compared as written; relocations by target name. Prints
IDENTICAL when the code and relocations agree: that function is then expected to reach 100% in
objdiff and to be proven by `tools/relink.py --matched`. A pool word that points into the
object's own `.constdata`/`.data`/`.bss` where retail's names a symbol (`DAT_x`) counts as equal:
the note after IDENTICAL says so, and relink.py is what checks the address.
"""

import argparse
import difflib
import glob
import importlib.util
import json
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent


def objdump(game):
    found = glob.glob(str(ROOT / game / "build" / "tools" / "binutils-arm-none-eabi" / "*" / "bin" / "arm-none-eabi-objdump*"))
    if not found:
        raise SystemExit(f"no objdump: run `python -B build.py fetch` in {game}/")
    return found[0]


def listing(tool, obj):
    """[text] for .text: one row per instruction or data word, relocations folded in. The
    objects' mapping symbols ($a/$t/$d) tell objdump ARM, Thumb and pool words apart."""
    out = subprocess.run([tool, "-dr", "-j", ".text", "--no-show-raw-insn", str(obj)], capture_output=True, text=True).stdout
    rows = []
    for line in out.splitlines():
        reloc = re.match(r"\s+[0-9a-f]+: (R_ARM_\w+)\s+(\S+)", line)
        if reloc and rows:
            rows[-1] = f"{rows[-1]}  [{reloc[1]} {reloc[2]}]"
            continue
        insn = re.match(r"\s+([0-9a-f]+):\s+(.*)", line)
        if insn:
            text = re.sub(r"\s*[@;].*$", "", insn[2]).strip()
            text = re.sub(r"<[^>]*>", "", text).strip()
            rows.append(f"{int(insn[1], 16):4x}: {text}")
    # A call relocation leaves bl/blx to the linker: it emits blx when the callee is in the other
    # instruction set (relink.py links with --use-blx), so the object's choice is not a difference.
    call = re.compile(r"^(\s*[0-9a-f]+: )blx(\s.*\[R_ARM_(?:THM_)?CALL )")
    # A Thumb halfword 0x0000 is the same bytes whether objdump reads it as code or as a pad.
    pad = re.compile(r"^(\s*[0-9a-f]+: )(?:\.short\s+0x0000|movs\s+r0, r0)$")
    return [pad.sub(r"\1movs\tr0, r0", call.sub(r"\1bl\2", row)) for row in rows]

def text_bytes(tool, obj):
    """The raw bytes of .text."""
    out = subprocess.run([tool, "-s", "-j", ".text", str(obj)], capture_output=True, text=True).stdout
    data = bytearray()
    for line in out.splitlines():
        m = re.match(r"\s+[0-9a-f]+ ((?:[0-9a-f]{2,8} ?){1,4})", line)
        if m:
            data += bytes.fromhex(m[1].replace(" ", ""))
    return bytes(data)


def data_as_bytes(retail, built, retail_bytes, built_bytes):
    """Rows where the compiled object holds data with no relocation (a string literal armcc put
    between the code and a later pool word) compared by bytes: nothing in the retail object marks
    those bytes as data, so objdump decodes them as instructions there."""
    at = lambda row: int(row.split(":", 1)[0], 16)
    is_data = lambda row: re.match(r"\s*[0-9a-f]+: \.(?:word|short|byte)\b", row) and "[R_ARM" not in row
    runs, start = [], None
    for i, row in enumerate(built):
        if is_data(row) and start is None:
            start = at(row)
        if start is not None and not is_data(row):
            runs.append((start, at(row)))
            start = None
    if start is not None:
        runs.append((start, len(built_bytes)))
    for lo, hi in runs:
        retail_rows = [r for r in retail if lo <= at(r) < hi]
        if all(is_data(r) for r in retail_rows) or hi > len(retail_bytes):
            continue  # objdump already reads both as data, or retail's function ends earlier
        for rows, raw in ((retail, retail_bytes), (built, built_bytes)):
            keep = [r for r in rows if not lo <= at(r) < hi]
            keep.append(f"{lo:4x}: data {raw[lo:hi].hex()}")
            rows[:] = sorted(keep, key=at)


RELOCATION = re.compile(r"  \[R_ARM_ABS32 (\S+)\]")
OWN_DATA = re.compile(r"^\.(?:constdata|data|bss)(?:\$\$.*)?$")


def data_relocations(retail, built):
    """Pool-word relocations where the compiled object points into its own `.constdata`/`.data`/
    `.bss` (a section symbol, the offset in the word) and retail's, in the same row and position,
    names a symbol (`DAT_x`, `_ZZ...E8instance`): both become `data`, and the rows' own word
    (the offset) is ignored. The address is not provable here; relink.py places the section where
    retail's word points and checks the image. Returns how many relocations were made equal."""
    retail_at = {row.split(":", 1)[0].strip(): i for i, row in enumerate(retail)}
    count = 0
    for i, row in enumerate(built):
        j = retail_at.get(row.split(":", 1)[0].strip())
        if j is None:
            continue
        mine, theirs = RELOCATION.findall(row), RELOCATION.findall(retail[j])
        if len(mine) != len(theirs):
            continue
        equal = [bool(OWN_DATA.match(a)) and not OWN_DATA.match(b) for a, b in zip(mine, theirs)]
        if not any(equal):
            continue
        for rows, index, names in ((built, i, mine), (retail, j, theirs)):
            todo = iter(equal)
            rows[index] = RELOCATION.sub(lambda m: "  [R_ARM_ABS32 data]" if next(todo) else m[0], rows[index])
            if len(names) == 1:
                rows[index] = re.sub(r"(\.word\s+)0x[0-9a-f]+", r"\g<1>data", rows[index])
        count += sum(equal)
    return count


def main():
    parser = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    parser.add_argument("game", choices=["smt4", "smt4a"])
    parser.add_argument("function")
    parser.add_argument("--no-build", action="store_true", help="diff the existing object")
    args = parser.parse_args()
    project = json.loads((ROOT / args.game / "config" / "project.json").read_text())
    unit = next((u for u in project["units"] if u["function"] == args.function), None)
    if unit is None:
        raise SystemExit(f"{args.function}: no such function in {args.game}")
    if not args.no_build:
        # The game's build.py gives the exact compile command; running the compiler here, not
        # build.py, leaves build/compile_report.json alone, so several fdiffs can run at once.
        spec = importlib.util.spec_from_file_location(f"build_{args.game}", ROOT / args.game / "build.py")
        build = importlib.util.module_from_spec(spec)
        spec.loader.exec_module(build)
        compiler = build.find_compiler(argparse.Namespace(armcc=None, clang=None))
        obj = ROOT / args.game / unit["object"]
        obj.parent.mkdir(parents=True, exist_ok=True)
        done = subprocess.run(build.command(compiler, unit, ROOT / args.game / unit["source"], obj),
                              capture_output=True, text=True, errors="replace", cwd=ROOT / args.game)
        if done.returncode:
            print("\n".join(line for line in (done.stdout + done.stderr).splitlines() if "Error" in line or line.startswith("  ")))
            sys.exit(2)
        build.finish_object(compiler, unit, ROOT / args.game / unit["source"], obj)  # carve, then armlink's NOPs
    tool = objdump(args.game)
    retail = listing(tool, ROOT / args.game / unit["target"])
    built = listing(tool, ROOT / args.game / unit["object"])
    data_as_bytes(retail, built, text_bytes(tool, ROOT / args.game / unit["target"]), text_bytes(tool, ROOT / args.game / unit["object"]))
    by_section = data_relocations(retail, built)
    note = " (data relocations by section: relink checks the address)" if by_section else ""
    strip = lambda rows: [re.sub(r"^\s*[0-9a-f]+: ", "", r) for r in rows]
    # armcc pads a Thumb function's section to 4 bytes: a trailing pad is not a difference.
    while len(built) > len(retail) and strip(built)[-1] in ("movs r0, r0", "nop", ".short 0x0000"):
        built.pop()
    if strip(retail) == strip(built):
        print(f"IDENTICAL: {args.game} {args.function} ({unit['source']}){note}")
        return
    # A string literal armcc placed after the pool: retail's function ends before it, the same bytes
    # follow in the image. relink.py checks them against the image; here only data rows may trail.
    extra = strip(built)[len(retail):]
    if extra and strip(built)[:len(retail)] == strip(retail) and all(r.startswith((".word", ".short", ".byte", ".ascii")) for r in extra):
        print(f"IDENTICAL: {args.game} {args.function} ({unit['source']}), plus {len(extra)} rows of trailing literal data "
              f"that relink.py checks against the image{note}")
        return
    print(f"DIFFERS: {args.game} {args.function} ({unit['source']}), retail {len(retail)} vs built {len(built)} rows")
    for line in difflib.unified_diff(strip(retail), strip(built), "retail", "built", n=2, lineterm=""):
        print(line)
    sys.exit(1)


if __name__ == "__main__":
    main()

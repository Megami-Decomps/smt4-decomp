"""Compile one function and diff its code against the retail function.

    python -B tools/fdiff.py <game> <function> [--no-build]

Builds the function's unit with the game's build.py, disassembles the retail target object and
the compiled object with relocations, and prints the instructions that differ. Branch and pool
offsets inside the function are compared as written; relocations by target name. Prints
IDENTICAL when the code and relocations agree: that function is then expected to reach 100% in
objdiff and to be proven by `tools/relink.py --matched`.
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
    return [call.sub(r"\1bl\2", row) for row in rows]


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
    tool = objdump(args.game)
    retail = listing(tool, ROOT / args.game / unit["target"])
    built = listing(tool, ROOT / args.game / unit["object"])
    strip = lambda rows: [re.sub(r"^\s*[0-9a-f]+: ", "", r) for r in rows]
    # armcc pads a Thumb function's section to 4 bytes: a trailing pad is not a difference.
    while len(built) > len(retail) and strip(built)[-1] in ("movs r0, r0", "nop", ".short 0x0000"):
        built.pop()
    if strip(retail) == strip(built):
        print(f"IDENTICAL: {args.game} {args.function} ({unit['source']})")
        return
    print(f"DIFFERS: {args.game} {args.function} ({unit['source']}), retail {len(retail)} vs built {len(built)} rows")
    for line in difflib.unified_diff(strip(retail), strip(built), "retail", "built", n=2, lineterm=""):
        print(line)
    sys.exit(1)


if __name__ == "__main__":
    main()

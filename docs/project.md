# Project layout, names and provenance

## Layout

```
smt4/, smt4a/     one project per game: config/, include/, src/, objdiff.json, build.py, tools/
  config/symbols.txt       every function's name, address and size, and every named global
  config/name_sources.txt  where each name came from (evidence or inferred)
  config/tus.json          function -> original source file (tools/assign_tus.py)
  src/_code/<file>/        functions placed in their original source file's folder (AsdSDK/..., battle/...)
  src/_code/<shard>/       everything else, by address
  build.py                 compiles every function, runs objdiff, rebuilds the retail target objects
  tools/relink.py          links the whole .code from the compiled objects and compares it with retail
include/              headers both games share: structs and accessors, by original source file
docs/                 the contribution guide and these notes
tools/assign_tus.py   places functions in source files from assert paths and file-local data
tools/shared.py       pairs the functions both games share and compares their progress
tools/fdiff.py        compiles one function and diffs its disassembly and relocations against retail
tools/names.py        names a function or global in every file at once and records the evidence
```

Every function is its own `.cpp`, compiled by armcc 4.1 (`--cpp --no_rtti -O3 -Otime`). The games are
C++ (their asserts name 168 `.cpp` source files and 4 `.c`); each body sits inside `extern "C"` so its
symbol keeps the name objdiff and relink pair it by.

## Shared code

Both games come from one build tree: the engine `AsdSDK`, Nintendo's SDK, and most of `sdds4`. The
same original file has the same path in both (`AsdSDK/Source/Sys/File/AsdFile`, `camp/IfTouch`), and
167 of Apocalypse's 215 placed files are also IV files. `python -B tools/shared.py` pairs the 3,782
functions with the same code in both games (41% of IV's, 25% of Apocalypse's): same instructions, same
constants and floats, only branch targets and image addresses free. A function matched in one game
and not the other is a porting candidate (`--list ported`): its source very likely matches the twin too.

## Names

Names live in `config/symbols.txt`; `tools/names.py` changes them. IV started with 909 names:

- Nintendo SDK functions (`nn::`, `nw::`), identified by matching code bytes against games that shipped
  with symbols or DWARF;
- event-script command handlers from the command table at `0x405F48` (`scrComm_EventFlag_Test`, ...);
- map and navigation functions.

Apocalypse carries 623 of them to the functions with the same code. Every name given since is listed
in `config/name_sources.txt` as `evidence` or `inferred`.

## Source files

`config/tus.json` comes from `tools/assign_tus.py --project <game>`. A function that references an
assert's source path (`c:\SMT4\XRD686\...\btlMain.cpp`) is in that file, and a function using a
file-local variable of one file joins it. Measured by hiding 30% of the anchors and placing them again
(`--holdout 0.3`): IV 66.7% precision at 15.6% recall, Apocalypse 78.6% at 11.1%.
`smt4/config/tus_extra.json` adds 20 assert-anchored functions found with another tool's function
bounds. To move a function, move its `.cpp` and update its `source` and `file` in `config/project.json`
and its unit in `objdiff.json`.

## Where the source came from

[romwright](https://github.com/Raikaru/romwright) branch `smt-decomp` (`a2e98c75`) generated both projects
once, as C. They were then converted to C++ in place: each file became `.cpp`, its body wrapped in
`extern "C"`, and the casts C++ demands were added. C called undeclared functions; C++ cannot. Each
such callee is declared with the argument types its calls pass, after C's promotions (`float` →
`double`, `char`/`short` → `int`), which is how C called it; a callee whose calls disagree is declared
`int f(...)`. `src/` is the source of truth now: do not regenerate. Every hand edit since is in the git
history.

## Proof

`build.py report` scores each function with objdiff. objdiff ignores some operand differences, so a
function counts as proven only when `tools/relink.py --matched` links its compiled object into the
retail `.code` and the result is byte-identical; relink lists every function it keeps as retail bytes,
and why. Six functions per game that objdiff scores 100% stay retail bytes:
`nw_gfx_internal_NWCopyVec4Reverse`, `NWCopyMtx24Reverse` and their copies load with `vldmia r1!`, a
writeback armcc emits only when the pointer is used afterwards, so they were hand-written assembly.

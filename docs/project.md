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
  tools/relink.py          links the whole .code from the compiled objects and compares it with retail;
                           --matched writes build/relink/proof.json, what the progress site credits
include/              headers both games share: structs and accessors, by original source file
docs/                 the contribution guide and these notes
tools/assign_tus.py   places functions in source files from assert paths and file-local data
tools/shared.py       pairs the functions both games share and compares their progress
tools/fdiff.py        compiles one function and diffs its disassembly and relocations against retail
tools/names.py        names a function or global in every file at once and records the evidence
tools/units.py        fixes the function list: splits merged units, adds the code the analysis missed
                      (branch targets, callbacks, stub bodies), extends cut-short ones, moves late starts
tools/scope.py        lists the third-party functions progress does not count (config/third_party.txt)
tools/progress_site.py  renders both games' proven progress as a static site (build/site/)
```

Every function is its own `.cpp`, compiled by armcc 4.1 (`--cpp --no_rtti -O3 -Otime`). The games are
C++ (their asserts name 168 `.cpp` source files and 4 `.c`). Recovered classes have shared declarations
in `include/classes/` and native member definitions outside `extern "C"`; functions not established
as members retain C linkage so their symbols keep the names objdiff and relink pair them by.

Member signatures must account for ARM's hidden result storage. The window-status operations return
`WindowStatusOperationResult` by value, and queue erasure returns a `SharedQueueIterator` with a
nontrivial copy constructor; the first decompiled pointer can therefore be the output, not `this`.
Some proven deleting wrappers and owner-destruction chains still use C declarations of destructor
entry points: retail consumes the ABI's returned `this` directly, while a native explicit destructor
call makes armcc save and restore the owner. Keep these documented exceptions when `fdiff` proves
that the native call changes the retail instructions.

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

The compiled objects never went through armlink, so `build.py` repeats what armlink did to retail
after each compile: a branch to an undefined `__weak` function or to the very next instruction
becomes a NOP (`mov r0, r0`; `mov r8, r8` twice in Thumb). Retail target objects, in turn, hold calls
in the compiler's form (`bl` with a relocation; the linker chose `blx`), and mark a string literal
that code addresses pc-relatively as data. relink links with `--no-warn-mismatch` because retail mixes
units built for different CPUs (`--cpu=5TE` runtime code next to MPCore code), and accepts a compiled
function longer than retail's when the extra bytes are a literal the image holds right after it.
A switch (`ldr pc, [pc, rM, lsl #2]`) is followed by a table of case addresses; the target object holds
it as armcc emits it, each word a case's offset from a local `__switch$$` symbol, relocated.

## What counts

Progress counts first-party code only: Atlus's engine (AsdSDK) and the game. Nintendo's SDK,
NintendoWare, the online library (NEX), the Mobiclip video library and the ARM runtime are linked into
the same `.code`; they still relink byte-identically with everything else, but they are not counted.
`python -B tools/scope.py` lists them in `config/third_party.txt` from evidence: third-party names
(mostly from matching Nintendo's SDK code), functions reached only from third-party code, and unnamed
functions linked between third-party ones. Anything uncertain stays counted. Run it again after
naming passes.

## Progress site

`python -B tools/progress_site.py` renders `build/site/`: a page per game in that game's own look,
with the share of functions registered (proven by relink), how many are readable, the drafts, the
history, each original source tree, and a searchable compendium of every function. It reads
`<game>/build/report.json` and the `build/relink/proof.json` that `tools/relink.py --matched` writes,
and refuses a proof whose link did not match. The history starts from the "Proven:" counts in this
repository's commit messages; `--history DIR` continues a published site's instead.

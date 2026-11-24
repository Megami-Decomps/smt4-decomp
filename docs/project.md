# Project layout, names and provenance

## Pipeline

```
your dump (.cxi, .3ds, .cia)
  |  build.py split        checks the build, cuts each retail function into orig/target/**.o
  v
src/**/*.cpp --build.py--> build/obj/**.o
  |                        armcc 4.1 b1454: native on Windows, through wibo elsewhere,
  |                        retried under Wine when wibo crashes
  v
build.py report            objdiff, compiled object against retail target -> build/report.json
  |
  v
fdiff.py / trial.py        one function: disassembly and relocations against retail -> IDENTICAL
  |
  v
relink.py --matched        links every 100% function into the .code and compares it byte for byte
  |                        -> MATCH, build/relink/proof.json
  v
progress_site.py           CI renders the progress site from report.json and proof.json
```

`build.py` runs in a game directory (`smt4/`, `smt4a/`), `relink.py` there as `../tools/relink.py`;
the other tools run from the repository root. Host problems are in
[Troubleshooting](troubleshooting.md).

## Tools cheat sheet

| Tool | Question it answers | Invocation |
|---|---|---|
| `tools/triage.py` | Which unproven functions are closest, and what kind of diff stands in the way? | `python -B tools/triage.py --games smt4` (writes `build/triage.tsv`) |
| `tools/shared.py` | Which functions do both games share, and which unproven ones have a proven twin? | `python -B tools/shared.py --list port` |
| `tools/similar.py` | Which proven functions look most like each unproven one? | `python -B tools/similar.py --top 3` (writes `build/similar.tsv`) |
| `tools/fdiff.py` | How does my source differ from retail? | `python -B tools/fdiff.py smt4 <function> --shape` |
| `tools/trial.py` | Which of these source variants (or flags) scores best? | `python -B tools/trial.py smt4 <function> variants.py --show 2` |
| `tools/usercheck.py` | Did my header or declaration change move any unit's score? | `python -B tools/usercheck.py master` |
| `tools/declcheck.py` | Does my change redeclare something a shared header declares? | `python -B tools/declcheck.py master` |
| `tools/names.py` | How do I name a function or global everywhere at once? | `python -B tools/names.py apply ROWS.tsv` (`check` validates only) |
| `tools/relink.py` | Does the whole `.code` still relink byte-identical, and what is proven? | `cd smt4 && python -B ../tools/relink.py --matched` |
| `tools/flag_audit.py` | Which unmatched units match under the flags their twin or neighbours were built with? | `python -B tools/flag_audit.py --game smt4 --apply none` |
| `tools/worktrees.py` | How do I work on several functions in parallel? | `python -B tools/worktrees.py create NAME`, later `patch NAME` and `remove NAME` |
| `tools/progress_site.py` | What would the progress site show for this checkout? | `python -B tools/progress_site.py --out build/site` |
| `tools/tu.py` | Are the files several units share (translation units) consistent? | `python -B tools/tu.py check` (`list`, `sync`) |

## Layout

```
smt4/, smt4a/     one project per game: config/, include/, src/, objdiff.json, build.py
  config/symbols.txt       every function's name, address and size, and every named global; a
                           `type:alias` line is a second linker name for a named address
                           (`__init_array_end` of the empty init array), built as that address's name
  config/name_sources.txt  where each name came from (evidence or inferred)
  config/tus.json          function -> original source file (tools/assign_tus.py)
  src/_code/<file>/        functions placed in their original source file's folder (AsdSDK/..., battle/...)
  src/_code/<shard>/       everything else, by address
  build.py                 compiles every function, runs objdiff, rebuilds the retail target objects;
                           a unit compiles again only when what its object was built from changed
                           (build/deps.json: the files armcc's --depend lists, the unit's command and
                           project.json entry, the armlink lookups for its symbols, armcc, build.py);
                           --force compiles every unit
include/              headers both games share: structs and accessors, by original source file
docs/                 the contribution guide, matching guide, style and naming, troubleshooting and these
                      notes; docs/notes/ holds the evidence for single matches
tools/relink.py       links the whole .code from the compiled objects and compares it with retail;
                      --matched writes <game>/build/relink/proof.json, what the progress site credits
tools/split.py        rebuilds the retail target objects (`build.py split`); tools/n3ds.py reads the dump,
                      tools/download_tool.py fetches the pinned toolchain (`build.py fetch`). relink, split
                      and download_tool work on the game directory they run in, or on `--project GAME`
tools/assign_tus.py   places functions in source files from assert paths and file-local data
tools/shared.py       pairs the functions both games share (exact, or with struct offsets moved) and lists the
                      unproven ones whose twin is proven
tools/fdiff.py        compiles one function and diffs its disassembly and relocations against retail
tools/trial.py        scores many source variants of one function in parallel, from temporary copies, as fdiff
                      would; --flags probes other cflags, multifile partners and autoinline (diagnostics,
                      not evidence)
tools/usercheck.py    re-scores, as fdiff does, every unit a change reaches (edited sources and every user of a changed,
                      new or deleted header) at BASE and now, and lists what moved; exit 1 on a regression
tools/names.py        names a function or global in every file at once and records the evidence
tools/units.py        fixes the function list: splits merged units, adds the code the analysis missed
                      (branch targets, callbacks, stub bodies), extends cut-short ones, moves late starts
tools/scope.py        lists the third-party functions progress does not count (config/third_party.txt)
tools/progress_site.py  renders both games' proven progress as a static site (build/site/)
tools/similar.py      finds, for each unproven function, the proven functions whose retail code looks most alike
tools/triage.py       sorts the unproven functions by what their fdiff shows (order, operands, registers, shape)
tools/worktrees.py    git worktrees for parallel work: each links orig/ and build/tools/ to this checkout,
                      builds and relinks on its own, and hands back its changes as a patch
tools/declcheck.py    fails when a change adds a unit-local copy of a function, global or struct that a
                      shared header declares (CI runs it on every push and pull request); also lists, without
                      failing, new static helpers the unit calls only once. `--all --ratchet` fails when the
                      tree's count rises above config/declcheck_ceiling.txt
tools/layout.py       field offsets of struct views from the compiler, and every view of one object merged
                      by offset (--anchor SYMBOL): the input for one declaration per object
tools/tu.py           checks the source files several units share (translation units, below) and keeps
                      objdiff.json's source paths in step with config/project.json
```

Every function is its own `.cpp` unless it is part of a [translation unit](#translation-units), compiled by armcc 4.1 [Build 1454] (`--cpp --no_rtti -O3 -Otime`; a unit
whose retail code shows another build, such as `-O2`, `-Ospace` or `--fpu=softvfp`, carries its own `cflags`). The games are
C++ (their asserts name 168 `.cpp` source files and 4 `.c`). Recovered classes have shared declarations
in `include/classes/` and native member definitions outside `extern "C"`; functions not established
as members retain C linkage so their symbols keep the names objdiff and relink pair them by.

### Per-unit compile keys

A unit's entry in `config/project.json` may change its compile command (`build.py`'s `command`, which
the build, `--force`, carving, the up-to-date check, `fdiff`, `trial`, `usercheck`, `flag_audit` and
`layout` all use). Each needs evidence (docs/matching-guide.md, *Compiler and flags*):

- `cflags`: the unit's whole flag list instead of `compiler.cflags`.
- `thumb`: `-mthumb` (true) or `-marm` (false), the mode the function was decoded in.
- `multifile`: functions compiled in the same armcc run, `--multifile --no_autoinline --split_sections`
  with their unit sources; carving keeps the unit's own function.
- `autoinline`: overrides armcc's autoinline choice. Absent, a `multifile` run gets `--no_autoinline`
  and any other compile (a translation unit too) has none, so armcc's `-O2`/`-O3` default inlines;
  `true` drops `--no_autoinline` from a `multifile` run, `false` adds it to a compile without partners.

## Shared code

Both games come from one build tree: the engine `AsdSDK`, Nintendo's SDK, and most of `sdds4`. The
same original file has the same path in both (`AsdSDK/Source/Sys/File/AsdFile`, `camp/IfTouch`), and
167 of Apocalypse's 215 placed files are also IV files. `python -B tools/shared.py` pairs the
functions with the same code in both games (about 4,300: 40% of IV's, 25% of Apocalypse's): same
instructions, same constants and floats, only branch targets and image addresses free. A function matched in one game
and not the other is a porting candidate (`--list ported`): its source very likely matches the twin too.

Much of the rest differs only where a struct moved (`GameState` against `GameStateA`). Near twins
(`--list near`, about 1,400 more) have the same instructions, registers and internal branches once the
immediate offsets of loads, stores and add/sub are masked, and the offsets that changed form one map from
each base register; a split `add #0x4800; ldr [#0x224]` counts as one offset. Each pair lists its
moved offsets (`0x1c4->0x2dc`). A shape with several candidates is paired only on positive evidence:
calls at the same positions to functions already paired, paired callers calling both at the same
position, or the same file in `config/tus.json`; the rest stays out. `--list port` lists every
unproven first-party function whose exact or near twin `relink.py --matched` proved, largest first,
with the twin's source and the offsets to change.

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

## Translation units

armcc decides some things per file, not per function: a plain `static` helper the file calls from
several functions is inlined late, one with a single call early, and the registers come out differently
(Apocalypse's `playLogChangePage` matches only next to `playLogUpdate`, whose five calls of
`playLogSetState` make six in the file). Such functions share one source file, as the original did:

- **Declare it** by giving each unit the same `source` in `config/project.json` (keep each unit's own
  `object`, `target` and `objdiff.json` entry; `python -B tools/tu.py sync` writes the entries' source
  paths). Name the file after the original (`camp/PlayLog/PlayLog/PlayLog.cpp`), put the includes,
  declarations and file-local `static` helpers and data once at the top, then each function, with its own
  doc comment and `NON_MATCHING` note directly before its definition. The units of one file share
  `cflags`, `thumb`, `multifile` and `autoinline` (the file was compiled once). Without `multifile` a
  TU compiles with armcc's autoinline on, so a plain function of the file may be inlined into its
  callers where retail calls it; `"autoinline": false` compiles it with `--no_autoinline`.
- **build.py** compiles the whole file for each of its units and carves the unit's own function out
  (`--split_sections`, as for a structor's extra variants): each object still holds one function, so
  objdiff, `fdiff` and relink work per function. A change to the file rebuilds all of its units.
- **fdiff.py / trial.py / usercheck.py** compile the file and diff only the requested function; a
  `trial.py` variant is the whole file. A variant (or edit) that drops the function fails with
  "defines no ..." instead of diffing a sibling. `usercheck` re-scores every unit of a changed file.
- **names.py** renames the function inside the file and the unit's object, target and objdiff entry; the
  file keeps its name. **units.py** gives a function split off a TU unit a source of its own, and `drop`
  leaves the file for its other units (delete the dropped definition by hand). **declcheck.py** treats
  every function built from the file as the file's own, and lines moved between units (merging files
  into a TU) are not new. **progress_site.py** judges each function on its own definition plus the
  file's common part, and takes its draft note from the comment before its definition (or a note at the
  top of the file naming it). **layout.py** compiles the whole file with its units' flags. **flag_audit.py**
  does not apply per-unit flags to a TU's units.
- `python -B tools/tu.py check` (CI runs it) checks the rules: each unit's definition is in its file,
  the units agree on flags, objects and targets are unique, and objdiff.json's paths match.

A TU is a matching decision like a `multifile` entry: it needs evidence that the functions shared a file
(`config/tus.json`, the asserts) and a reason in the diff. Still open: each unit compiles the whole file
(twice when carving: N functions cost 2N compiles of the file), and a carved unit's file-local data is
named, not placed and checked by relink (see *Data a unit owns or names* in the contribution guide).

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
retail `.code` and the result is byte-identical. relink lists every function objdiff scores 100% that
it still links as retail bytes, with the reason:

- its instructions differ in operands objdiff does not compare. Six per game are hand-written
  assembly: `nw_gfx_internal_NWCopyVec4Reverse`, `NWCopyMtx24Reverse` and their copies load with
  `vldmia r1!`, a writeback armcc emits only when the pointer is used afterwards;
- its compiled section has another size than retail's;
- its own data (`.bss`, `.data`, `.init_array`, `.constdata`: static initialisers, constant tables)
  cannot be tied by a retail pool word to an address holding the same bytes, so relink cannot prove
  where it goes.

The compiled objects never went through armlink, so `build.py` repeats what armlink did to retail
after each compile: a branch to an undefined `__weak` function or to the very next instruction
becomes a NOP (`mov r0, r0`; `mov r8, r8` twice in Thumb), and an ARM `bl` to a one-instruction function
(armlink's `--inline`: the target objects' 8-byte `<insn>; bx lr` units and `config/inlined.txt`) becomes that
instruction. A conditional `bl` (armcc relocates it with R_ARM_JUMP24, not R_ARM_CALL) becomes the instruction
with the call's condition in bits 31-28 (`bleq getter` -> `ldreq r0, [r0, #32]`); only a body whose own
condition is AL is inlined that way. It also drops armcc's R_ARM_NONE
relocations: a `sprintf` call under `<stdio.h>` puts one per format feature (`_printf_d`, `_printf_percent`)
on the function's first instruction for armlink's library selection; they patch no bytes, and their
symbols stay as weak undefined ones. Retail target objects, in turn, hold calls
in the compiler's form (`bl` with a relocation; the linker chose `blx`), and mark a string literal
that code addresses pc-relatively as data. relink links with `--no-warn-mismatch` because retail mixes
units built for different CPUs (`--cpu=5TE` runtime code next to MPCore code), and accepts a compiled
function longer than retail's when the extra bytes are a literal the image holds right after it.
A switch (`ldr pc, [pc, rM, lsl #2]`) is followed by a table of case addresses; the target object holds
it as armcc emits it, each word a case's offset from a local `__switch$$` symbol, relocated.

## What counts

Progress counts first-party code only: Atlus's engine (AsdSDK) and the game. Nintendo's SDK,
NintendoWare, the online libraries (NEX, OnlineCore), the Mobiclip video library and the ARM runtime
are linked into the same `.code`; they still relink byte-identically with everything else, but they
are not counted. `python -B tools/scope.py` lists them in `config/third_party.txt` from evidence:
third-party names (mostly from matching Nintendo's SDK code, plus the C library's standard names),
library blocks recorded with their evidence in `config/libraries.txt` (Apocalypse's OnlineCore Thumb
code), functions reached only from third-party code, and unnamed functions linked between
third-party ones of the same instruction set. A function and its twin in the other game
(`tools/shared.py`) get one answer: where the two games' neighbours or callers disagree, both stay
counted until a `libraries.txt` block gives evidence (a block reaches the exact twins in the other
game). Anything uncertain stays counted. Run it again after naming passes; it needs both dumps.
Never edit `third_party.txt` by hand: fix `libraries.txt` or the rules, then rerun.

## Progress site

`python -B tools/progress_site.py` renders `build/site/`: a page per game in that game's own look,
with the share of functions registered (proven by relink), how many are readable, the drafts, the
history, each original source tree, and a searchable compendium of every function. It reads
`<game>/build/report.json` and the `build/relink/proof.json` that `tools/relink.py --matched` writes,
and refuses a proof whose link did not match. The history starts from the "Proven:" counts in this
repository's commit messages; `--history DIR` continues a published site's instead.

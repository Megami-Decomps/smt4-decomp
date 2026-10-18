# Shin Megami Tensei IV / IV: Apocalypse decompilation

Matching decompilations of the two Nintendo 3DS games, one function at a time, built with the
compiler Atlus used: ARM's armcc (RVCT 4.1 build 713, `-O3 -Otime`). A function is done when the C in
`src/` compiles to the retail function's bytes and `tools/relink.py` links it back into a
byte-identical game binary.

| Game | Directory | Build | Functions | Exact (objdiff) | Proven by relink | Fuzzy |
|---|---|---|---|---|---|---|
| Shin Megami Tensei IV (USA) | [`smt4/`](smt4/) | v1.2.0 update (CTR-U-AMXE) | 9,350 | 1,185 | 1,179 | 41.9% |
| Shin Megami Tensei IV: Apocalypse (USA) | [`smt4a/`](smt4a/) | v1.0 cartridge (CTR-P-BG4E) | 15,108 | 2,342 | 2,333 | 42.9% |

The C is romwright's first pass. "Proven by relink" counts the functions `tools/relink.py --matched`
links from their compiled objects into the retail `.code`, byte for byte; it lists every function it
keeps as retail bytes and why.

## Layout

```
smt4/, smt4a/     one project per game: config/, include/, src/, objdiff.json, build.py, tools/
  config/names.map    function names (see below), fed to romwright with --names
  config/tus.json     function -> original source file (tools/assign_tus.py)
  src/_code/<file>/   functions placed in their original source file's folder (AsdSDK/..., battle/...)
  src/_code/<shard>/  everything else, by address
tools/assign_tus.py   places functions in source files from assert paths and file-local data
tools/shared.py       pairs the functions both games share and compares their progress
```

Both games come from one build tree: the engine `AsdSDK`, Nintendo's SDK, and most of `sdds4`. The
same original file has the same path in both (`AsdSDK/Source/Sys/File/AsdFile`, `camp/IfTouch`), and
167 of Apocalypse's 215 placed files are also IV files. `python3 tools/shared.py` pairs the 3,672
functions with the same code in both games (40% of IV's, 24% of Apocalypse's): same instructions, same
constants and floats, only branch targets and image addresses free. A function matched in one game
and not the other is a porting candidate (`--list ported`): its C very likely matches the twin too.

## Getting started

Python 3 and your own decrypted dumps. Per game:

```sh
cd smt4
python3 build.py fetch      # pinned armcc, objdiff-cli, wibo (non-Windows), arm-none-eabi binutils
# put the decrypted v1.2.0 update at orig/smt4_v1.2.0.cxi: the installed NCCH or a decrypted .cia
python3 build.py split      # checks the dump's program, writes orig/target/**.o (each retail function as an object)
python3 build.py            # compile src/ with armcc
python3 build.py report     # objdiff -> build/report.json (or open the directory in the objdiff GUI)
python3 tools/relink.py --matched   # link every matched function into the retail .code: prints MATCH
```

For `smt4a/` the dump is the Apocalypse cartridge at `orig/smt4a.cxi`: a `.3ds`/`.cci` card or its
partition 0. `build.py split` checks that the dump holds the exact build the project was made from.
Dumps, `orig/` and `build/` stay local (git-ignored).

## Names and source files

`smt4/config/names.map` names 907 IV v1.2.0 functions:

- Nintendo SDK functions (`nn::`, `nw::`), identified by matching code bytes against games that shipped
  with symbols or DWARF;
- event-script command handlers from the command table at `0x405F48` (`scrComm_EventFlag_Test`, ...);
- map and navigation functions.

`smt4a/config/names.map` carries 623 of them to the Apocalypse functions with the same code.

`config/tus.json` comes from `tools/assign_tus.py --project <game>`. A function that references an
assert's source path (`c:\SMT4\XRD686\...\btlMain.cpp`) is in that file, and a function using a
file-local variable of one file joins it. Measured by hiding 30% of the anchors and placing them again
(`--holdout 0.3`): IV 66.7% precision at 15.6% recall, Apocalypse 78.6% at 11.1%.
`smt4/config/tus_extra.json` adds 20 assert-anchored functions found with another tool's function
bounds. To move a function, fix its entry and regenerate.

## Regenerating with romwright

[romwright](https://github.com/Raikaru/romwright) generates both projects. Regenerating rewrites
`src/`, so run it before hand-editing, or into a fresh directory:

```sh
(cd smt4  && romwright-cli new-project orig/smt4_v1.2.0.cxi . --name smt4  --compiler armcc-4.1-b713 --cflags "-O3 -Otime" --names config/names.map --tus config/tus.json)
(cd smt4a && romwright-cli new-project orig/smt4a.cxi       . --name smt4a --compiler armcc-4.1-b713 --cflags "-O3 -Otime" --names config/names.map --tus config/tus.json)
```

# Troubleshooting

Host problems, and what to do when the tools disagree about a function.

## Hosts: Windows, wibo and Wine

armcc 4.1 is a Windows program. On Windows `build.py` runs it directly. On Linux and macOS it runs
it through [wibo](https://github.com/decompals/wibo): `python build.py fetch` downloads the pinned
wibo (1.2.0, for Linux i686/x86_64 and macOS arm64/x86_64, in `config/toolchain.json`) unless `wibo`
is already on `PATH`. `$ARMCC`, `--armcc PATH` or `config/toolchain.local.json`
(`{"armcc": "/path/to/armcc.exe"}`) points the build at a compiler you already have.

wibo 1.0.3 to 1.2.0 segfault in armcc's heap teardown on a few units (smt4 `FUN_002aa790` is the
known one). When armcc dies on a signal under wibo and `wine` is on `PATH`, `build.py` compiles that
unit again under Wine (`run_compiler` in `smt4/build.py` and `smt4a/build.py`, with
`WINEDEBUG=-all`). `tools/fdiff.py` and `tools/trial.py` compile through the same function, so they
retry too. Without Wine the unit is listed as failed in `build/compile_report.json`: install Wine,
or build on Windows. CI builds on Windows for this reason (`.github/workflows/build.yml`).

## Path length

armcc and the binutils on Windows accept paths of at most 259 characters (`MAX_PATH`, 260, less
the terminating NUL), and `build.py` passes them absolute paths. The longest unit path is 222
characters below the checkout root: the retail target object of an STL `__rb_tree::erase`
(`smt4a/orig/target/_code/0052/_ZN4__rw9__rb_tree...o`). So keep the checkout root at 36 characters
or fewer (`C:\src\smt4-decomp` is 18), or those units fail. The match
notes record the same two failures from a Linux runner under wibo.

- `tools/worktrees.py create` refuses, on Windows, a worktree whose root would push the longest
  unit path past the limit. Worktrees live in `wt/NAME` next to the repository; `$WORKTREES_HOME`
  overrides `wt/`.
- Work from a drive-letter path. The tools take paths with `os.path.abspath`, because resolving a
  mapped or overlay drive gave a UNC path (`\\server\share\...`) that armcc, objdump and ld cannot
  use (`b3fe8070a`).

## Known host failures

Match notes in [`notes/`](notes/README.md) mention three failures per game in a full local build
on a Linux runner: one compiler host failure and two overlong paths. They are these units:

| Unit | Address | Failure | Fix |
|---|---|---|---|
| `FUN_002aa790` | smt4 `0x2aa790` | armcc segfaults in its heap teardown under wibo 1.0.3 to 1.2.0 | install Wine (`build.py` retries the unit under it) or build on Windows |
| `__rw::__rb_tree<unsigned, std::pair<const unsigned, MoLive::ObjectHandle>, ...>::erase(iterator, iterator)` | smt4 `0x3fb11c`, smt4a `0x520b3c` | source path 210 characters below the game directory, target 216 | a checkout root of 36 characters or fewer |
| the same tree's `erase(iterator)` | smt4 `0x3faab4`, smt4a `0x5204d4` | source path 207 characters, target 213 | the same |

Apocalypse's compiler host failure was not recorded by name. Its exact twin of `FUN_002aa790`,
smt4a `FUN_001a91ec` (paired by `tools/shared.py`), has the same source text apart from its name
and two addresses, and is the unit to check first.

All of these units are third-party (listed in `config/third_party.txt`) and still `NON_MATCHING`,
so a failure here changes no proven function and no progress number: relink keeps their retail
bytes. CI's Windows build compiles every unit and is the complete gate.

## objdiff, fdiff and relink disagree

objdiff ignores some operand differences, so its 100% is not proof. `tools/fdiff.py` compares
instructions, pool words and relocations by target name; `tools/relink.py --matched` links the
compiled objects at their retail addresses and compares the whole `.code` byte for byte. Only relink
proves a function ([Proof](project.md#proof)).

For every function objdiff scores 100% that relink still links as retail bytes, relink prints the
reason (also in `build/relink/proof.json`, under `kept`). `tools/triage.py` classes such functions
as `identical` when `fdiff` agrees with objdiff.

| relink's reason | What it means, what to do |
|---|---|
| compiled section size differs | the compiled function is longer or shorter than retail's; relink accepts a longer one only when the extra bytes are a literal the image holds right after it |
| their variables or constants are tied by no retail pool word to a free address holding the same bytes | the unit's own data cannot be placed: compare its bytes, section and order with the image (a `const` table retail keeps in writable `.data` is one cause: [maze-wall-autotiles](notes/maze-wall-autotiles.md)); see [Data a unit owns or names](CONTRIBUTING.md#data-a-unit-owns-or-names) |
| they call or address something else than retail | a call or pool word relocates to another symbol than retail's: check the callee and global names |
| their instructions differ in operands objdiff does not compare | `fdiff` shows the difference; six functions per game are hand-written assembly that armcc cannot produce ([Proof](project.md#proof)) |
| their unit has no retail target object | rerun `python build.py split` |
| an ARM B or Thumb BL enters them in the other instruction set, so they link as bytes | not a source problem: the function stays retail bytes |
| their object overlaps a function placed at an earlier address | a unit boundary is wrong: see [Function boundaries](CONTRIBUTING.md#function-boundaries) |
| named in --exclude | you excluded it |

`fdiff` prints `IDENTICAL (data relocations by section: relink checks the address)` when a pool word
points into the unit's own data where retail names a symbol: only relink can confirm that address.

relink's verdicts:

- `MATCH`: the relinked `.code` is byte-identical to retail; the proven functions are written to
  `build/relink/proof.json`, which the progress site credits.
- `INCOMPLETE`: the image matches, but functions objdiff scores 100% have no compiled object (a unit
  failed to compile: see `build/compile_report.json`, or the failures above). Run `python build.py`
  again, or name them in `--exclude`.
- `DIFFERENT`: relink lists the functions whose bytes differ and, for those objdiff scores 100%, the
  `--exclude` list that would leave them out. Such a function is not proven whatever objdiff says:
  find the difference with `fdiff`.

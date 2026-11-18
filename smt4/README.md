# smt4

The Shin Megami Tensei IV (USA) project: one C++ source file per function of the game's ARM `.code`, built with Nintendo's
retail compiler and checked against the retail program. See the [main README](../README.md) for the
status and quick start, and the [contribution guide](../docs/CONTRIBUTING.md) for the workflow.

| | |
|---|---|
| Build | v1.2.0 update (`CTR-U-AMXE`) |
| Dump | `orig/smt4_v1.2.0.cxi` (sha256 `1f4d560dfb492e1f579310c832dc1ebb888581cc46cc66bbb4888cd7fb67a086`; any `.cxi`/`.3ds`/`.cci`/decrypted `.cia` of the same build works) |
| Units | 10,890 functions, one `.cpp` each |
| Compiler | armcc 4.1 [Build 1454], `--cpu=MPCore --fpmode=fast --apcs=/interwork --cpp --no_rtti --no_rtti_data -O3 -Otime` |

## Building

```sh
python build.py fetch              # pinned armcc, objdiff-cli, arm-none-eabi binutils (and wibo off Windows)
python build.py split              # checks orig/smt4_v1.2.0.cxi, writes the retail target objects orig/target/**.o
python build.py                    # compiles every unit (--force rebuilds, --strict fails on errors)
python build.py report             # objdiff over objdiff.json -> build/report.json
python ../tools/relink.py --matched  # links the whole .code and compares it with retail: must print MATCH
```

`orig/` and `build/` hold bytes derived from your dump and never enter version control.

## Layout

| Path | What it holds |
|---|---|
| `src/_code/<file>/` | functions placed in their original source file (`battle/btlMain/`, `AsdSDK/Source/...`) |
| `src/_code/<NNNN>/` | every other function, grouped by the high half of its address |
| `include/` | headers only this game uses; shared headers are in the top-level `include/` |
| `config/project.json` | one unit per function: address, size, mode, source, object and target, plus any `cflags` or `multifile` override |
| `config/symbols.txt` | every function and named global with address and size (`type:alias` adds a second name for an address) |
| `config/names.map` | the names the project started with (SDK functions matched by code bytes, script commands, map functions) |
| `config/name_sources.txt` | the evidence for every name given since (`evidence` or `inferred`) |
| `config/inlined.txt` | one-instruction functions armlink inlined and removed, with their retail call sites |
| `config/numbers.txt` | constants that happen to fall inside a data section, kept as plain numbers |
| `config/third_party.txt` | functions not counted in progress (written by `tools/scope.py`)
| `config/tus_extra.json` | extra source-file placements found with another tool's function bounds | |
| `config/tus.json` | function to original source file placements (written by `tools/assign_tus.py`) |
| `config/modules.json` | the image's segment map and the sha256 its decompressed `.code` must have |
| `config/toolchain.json` | the pinned tool downloads: URL, sha256, version and licence |
| `objdiff.json` | objdiff's unit list (compiled object against retail target object) |

## Tools

- `build.py`: compiles units, repeats what armlink did to retail (linker NOPs, inlined leaf calls,
  veneers), cuts multi-function objects down to the unit's function, and runs objdiff.

The rest are in the top-level [`tools/`](../tools/), shared by both games. `split.py`, `relink.py` and
`download_tool.py` work on the game directory they run in (`--project smt4` from anywhere else).

- `tools/split.py`: rebuilds the retail target objects from your dump and `config/`, refusing any other
  build of the game. Run it again after renaming (`tools/names.py` does).
- `tools/relink.py`: links the `.code` with GNU ld from retail bytes and, with `--matched`, from every
  function objdiff scores 100%; prints `MATCH` when the result is byte-identical and lists each 100%
  function it kept as retail bytes, with the reason. `build/relink/proof.json` is what progress counts.
- `tools/n3ds.py`: reads NCCH, NCSD and decrypted CIA containers. Encrypted content is refused: decrypt
  your dump first.
- `tools/download_tool.py`: downloads and verifies the pinned tools (standard library only).

## Reading objdiff

The retail side of a unit is one function cut out of the linked image. Calls and branches to other known
functions are relocations, as a compiler emits them, and literal pools are data: a pool word holding an
address relocates to that function, to the named global, or to `DAT_<address>` (declare it as
`extern ... DAT_00412345;` and the operand matches). objdiff ignores some operand differences, so 100%
there is not proof: a function counts once `relink.py --matched` links its compiled object into a
byte-identical `.code`.

## Toolchain licence

armcc is proprietary (ARM RealView Compilation Tools as shipped to 3DS developers). `config/toolchain.json`
records where the decomp.me compilers project hosts it and its sha256; use it only if you are entitled
to. objdiff is Apache-2.0 or MIT, wibo MIT. `$ARMCC`, `--armcc PATH` or `config/toolchain.local.json`
(`{"armcc": "/path/to/armcc.exe"}`) points the build at a compiler you already have.

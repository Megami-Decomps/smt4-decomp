# smt4

A **per-function matching** decompilation scaffold for the Nintendo 3DS image `smt4_v1.2.0.cxi`
(sha256 `1f4d560dfb492e1f579310c832dc1ebb888581cc46cc66bbb4888cd7fb67a086`), bootstrapped by `romwright new-project` (romwright 0.5.0).

Every unit is built with the retail compiler (`armcc-4.1-b713`, `--cpu=MPCore --fpmode=fast --apcs=/interwork --c99 -O3 -Otime`) and scored by objdiff against its retail function. `tools/relink.py` rebuilds the whole `.code` with GNU ld from the per-function objects and proves every function that links from its compiled object. What this repository gives you:

* `config/symbols*.txt`: every function, label and import romwright found, with address and size
  (`name = section:0xADDR; // type:function size:0xN`, one file per module).
* `config/modules.json`: per module, the segment/section map with load addresses, the sha256 of the
  mapped image and (where the format has one) the build id.
* `include/`: `romwright_types.h` (base types for the ILP32 (ARM11 MPCore, ARMv6K, VFPv2) data model and the
  decompiler's primitive names) and `romwright_protos.h` (recovered prototypes).
* `src/<module>/<shard>/<function>.c`: romwright's decompiled C, one function per file, each
  marked `NON_MATCHING`. It is a reading aid and a starting point to refine into retail-equivalent C.
  795 function(s) the evidence places in 173 original source file(s) are in
  `src/<module>/<file>/<function>.c` instead, one objdiff progress category per file
  (`file` in `config/project.json`); the placement is evidence, not proof: move a function by
  correcting its entry in the `--tus` file and regenerating.
* `build.py`: compiles every unit with `armcc-4.1-b713`; objdiff scores each unit against its retail function.
* `objdiff.json` and `orig/target/`: each decompiled function's retail bytes as a relocatable target object, paired with `build/obj/` (what `build.py` compiles from `src/`).

`orig/` and `build/` hold bytes derived from your own retail dump and stay out of version
control: put your dump at `orig/smt4_v1.2.0.cxi`.

## Quick start

```sh
python3 build.py fetch      # download the pinned armcc-4.1-b713 (decomp.me's armcc bundle, 73 MB), objdiff-cli, and wibo where Windows executables need it
python3 build.py            # compile src/ with armcc-4.1-b713 (--cpu=MPCore --fpmode=fast --apcs=/interwork --c99 -O3 -Otime); writes build/compile_report.json
python3 build.py report     # objdiff-cli report over objdiff.json -> build/report.json
# or open this directory in the objdiff GUI
```

This image: 9339 function(s) decompiled into `src/`, 9350 symbol(s), 1 module(s).
Units compile as C99 (`--c99`): decompiled C has no headers for its callees, so armcc's implicit-declaration warnings are not errors; every error is reported. A unit that fails (a missing struct definition, say) is listed with its first error in `build/compile_report.json`, and the build exits 0 unless you pass `--strict`. Each unit compiles in the mode its function was decoded in (`--arm`/`--thumb`).

## From a fresh clone

`orig/` and `build/` hold retail bytes and are not in version control. With only Python 3 (romwright is not needed):

```sh
python3 build.py fetch      # pinned tools (the compiler, objdiff-cli, wibo where needed, arm-none-eabi binutils)
# put your decrypted dump at orig/smt4_v1.2.0.cxi: this file (sha256 1f4d560dfb492e1f579310c832dc1ebb888581cc46cc66bbb4888cd7fb67a086), or any .cxi/.3ds/.cci/decrypted .cia of the same build
python3 build.py split      # tools/split.py: checks the dump's program, rebuilds orig/target/**.o from it and config/
python3 build.py            # compile src/
python3 build.py report     # objdiff-cli -> build/report.json
python3 tools/relink.py --matched   # relink the retail .code with every matched function from build/obj/: must print MATCH
```

`tools/split.py` writes the target objects romwright wrote, byte for byte, from `orig/smt4_v1.2.0.cxi`, `config/symbols.txt` (a function renamed there is the name its callers' relocations use), `config/modules.json` and `config/project.json`, after checking the dump's decompressed `.code` against `mapped_sha256` in `config/modules.json` (another version of the game is refused). `tools/n3ds.py` reads NCCH, NCSD and decrypted CIA dumps (`.cxi`/`.3ds`/`.cci`/`.cia`; encrypted content is refused with a message). `tools/relink.py` links the whole `.code` with GNU ld from `orig/target` objects (retail bytes) and, with `--matched`, from the objects `build.py` compiled for the functions objdiff reports at 100%; `--full` links every function from its target object, which proves those objects relocate back to retail. Relink lists every 100% function it keeps as retail bytes with its reason, reports how many were proven (linked from `build/obj`) of how many objdiff claimed, and exits non-zero when a compiled object is missing (`--exclude FUN_a,FUN_b` names functions to keep as retail bytes on purpose). It prints MATCH when the image is byte-identical to retail and every function objdiff scores 100% has its compiled object; a function whose object does not reproduce its bytes is listed with the `--exclude` line to rerun with.

`romwright new-project` writes `src/` too: do not regenerate into a directory whose `src/` you have edited. Personal ignore rules (your dump's directory, say) go in `.git/info/exclude`, because regenerating rewrites `.gitignore`.


## Nintendo 3DS notes

romwright reads NCCH, NCSD and CIA containers (cleartext, or a title whose NCCH uses the documented all-zero fixed key). A flat ExeFS `.code` is imported with `--raw 0x100000 --language ARM:LE:32:v6`, which carries no section table: the scaffold then has one region. Code mixes ARM and Thumb: every function carries `mode:arm` or `mode:thumb` in the symbol file (the mode the analysis decoded it in), its target object has the matching mapping symbol, and `build.py` compiles its unit in that mode (`--arm`/`--thumb` with armcc, `-marm`/`-mthumb` with clang). Nintendo's retail compiler is ARM's armcc (RVCT 4.0/4.1, ARM Compiler 5): `romwright-cli new-project --compiler armcc-4.1-b713` (any `armcc-*` build in romwright's tool manifest) builds every unit with it, and `--cflags "-O3 -Otime"` replaces its optimisation flags. Without `--compiler` the units only get clang's compile check.

**Reading objdiff here.** The retail side of each unit is one function cut out of a linked image. Direct calls and branches to other known functions (tail calls included) are rewritten into the relocations a compiler would emit. Literal pools are marked as data, and a pool word that holds an address is an `R_ARM_ABS32` to that function or to `DAT_<address>` (8 lowercase hex digits): declare the global under that name (`extern int DAT_00412345;`) and the operand matches. Other pool words are constants. The base side is the retail compiler's output, so 100% is reachable. 100% in objdiff is necessary but not proof: a function is proven when `tools/relink.py --matched` links it from `build/obj/` into a byte-identical `.code`. Relink lists every 100% function it keeps as retail bytes, with the reason, and a function's `NON_MATCHING` marker goes once it is proven.

## Tools

`config/toolchain.json` pins what this project downloads: URL, sha256, version, license and
provenance. `build.py fetch` uses `tools/download_tool.py` (standard library only), which checks the
sha256 before anything is extracted or run. romwright itself downloads nothing. `armcc-4.1-b713` is proprietary (ARM): `config/toolchain.json` records where the decomp.me compilers project hosts it and its sha256; use it only if you are entitled to. objdiff is Apache-2.0 or MIT, wibo MIT. `$ARMCC`, `--armcc PATH` or a toolchain profile (`config/toolchain.local.json` with `{"armcc": "/path/to/armcc.exe"}`) overrides the download.

## Keys and containers

romwright never stores or emits decryption keys. A retail title encrypted with console-provisioned keys (bootrom slots, the CIA common key, ticket title keys) has to be decrypted by you first, or its keys passed to `romwright-cli new-project --keys FILE`; they are used in memory and never written into this repository.

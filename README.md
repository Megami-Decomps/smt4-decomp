# smt4

A **non-matching** decompilation scaffold for the Nintendo 3DS image `smt4.cxi`
(sha256 `565f9f5f03de03da5197d95ae33046a1f3f046ffe46d0f1c15796fb8b1351fdb`), bootstrapped by `romwright new-project` (romwright 0.5.0).

There is no byte-matching build for this platform (Nintendo's ARM compiler output (RVCT/armcc) is not reproduced by any public toolchain). What this
repository gives you instead:

* `config/symbols*.txt`: every function, label and import romwright found, with address and size
  (`name = section:0xADDR; // type:function size:0xN`, one file per module).
* `config/modules.json`: per module, the segment/section map with load addresses, the sha256 of the
  mapped image and (where the format has one) the build id.
* `include/`: `romwright_types.h` (base types for the ILP32 (ARM11 MPCore, ARMv6K, VFPv2) data model and the
  decompiler's primitive names) and `romwright_protos.h` (recovered prototypes).
* `src/<module>/<shard>/<function>.c`: romwright's decompiled C, one function per file, each
  marked `NON_MATCHING`. It is a reading aid and a starting point, not retail-equivalent.
* `build.py`: compiles every unit with clang to prove it compiles, nothing more.
* `objdiff.json` and `orig/target/`: each decompiled function's retail bytes as a relocatable target object, paired with `build/obj/` (what `build.py` compiles from `src/`).

The retail image is not part of this repository and neither is anything derived from its
bytes (`orig/`, `build/`): put your own dump at `orig/smt4.cxi`.

## Quick start

```sh
python3 build.py fetch      # download the pinned clang (about 2 GB), and objdiff-cli where the platform has an objdiff backend; optional if clang is on PATH
python3 build.py            # compile src/ for armv6k-none-eabi; writes build/compile_report.json
python3 build.py report     # objdiff-cli report over objdiff.json -> build/report.json
# or open this directory in the objdiff GUI
```

This image: 40 function(s) decompiled into `src/`, 9350 symbol(s), 1 module(s).
The compile check is a syntax and type check against `include/romwright_types.h`, in lenient C:
implicit function declarations and integer/pointer conversions are accepted because decompiled C has
no headers for its callees; every other error is reported. A unit that fails (a missing struct
definition, say) is listed with its first error in `build/compile_report.json`, and the build exits 0
unless you pass `--strict`.

## Nintendo 3DS notes

romwright reads NCCH, NCSD and CIA containers (cleartext, or a title whose NCCH uses the documented all-zero fixed key). A flat ExeFS `.code` is imported with `--raw 0x100000 --language ARM:LE:32:v6`, which carries no section table: the scaffold then has one region. Code mixes ARM and Thumb: every function carries `mode:arm` or `mode:thumb` in the symbol file (the mode the analysis decoded it in), its target object has the matching mapping symbol, and `build.py` compiles its unit with `-marm` or `-mthumb` to match.

**Reading objdiff here.** The retail side of each unit is one function cut out of a linked image. Direct calls and branches to other known functions are rewritten into the relocations a compiler would emit (only when the instruction decodes to exactly the target romwright recorded); data operands are not, so literal-pool and RIP-relative operands show as differences. A decompilation this far from the original compiler's output will rarely reach 100%: objdiff is a way to compare, not a pass/fail gate.

## Tools

`config/toolchain.json` pins what this project downloads: URL, sha256, version, license and
provenance. `build.py fetch` uses `tools/download_tool.py` (standard library only), which checks the
sha256 before anything is extracted or run. romwright itself downloads nothing. LLVM is
Apache-2.0 with LLVM exceptions; objdiff is Apache-2.0. A toolchain profile
(`--toolchain`, `config/toolchain.local.json` with `{"clang": "/path/to/clang"}`) overrides the download.

## Keys and containers

romwright never stores or emits decryption keys. A retail title encrypted with console-provisioned keys (bootrom slots, the CIA common key, ticket title keys) has to be decrypted by you first, or its keys passed to `romwright-cli new-project --keys FILE`; they are used in memory and never written into this repository.

# Shin Megami Tensei IV & IV: Apocalypse

[![Build Status]][actions]
[![smt4-functions]][smt4-progress] [![smt4-code]][smt4-progress]
[![smt4a-functions]][smt4a-progress] [![smt4a-code]][smt4a-progress]

[Build Status]: https://github.com/Megami-Decomps/smt4-decomp/actions/workflows/build.yml/badge.svg
[actions]: https://github.com/Megami-Decomps/smt4-decomp/actions/workflows/build.yml
[smt4-functions]: https://img.shields.io/endpoint?url=https%3A%2F%2Fmegami-decomps.github.io%2Fsmt4-decomp%2Fbadges%2Fsmt4-functions.json
[smt4-code]: https://img.shields.io/endpoint?url=https%3A%2F%2Fmegami-decomps.github.io%2Fsmt4-decomp%2Fbadges%2Fsmt4-code.json
[smt4a-functions]: https://img.shields.io/endpoint?url=https%3A%2F%2Fmegami-decomps.github.io%2Fsmt4-decomp%2Fbadges%2Fsmt4a-functions.json
[smt4a-code]: https://img.shields.io/endpoint?url=https%3A%2F%2Fmegami-decomps.github.io%2Fsmt4-decomp%2Fbadges%2Fsmt4a-code.json
[smt4-progress]: https://megami-decomps.github.io/smt4-decomp/smt4/
[smt4a-progress]: https://megami-decomps.github.io/smt4-decomp/smt4a/

A work-in-progress **matching decompilation** of *Shin Megami Tensei IV* and *Shin Megami Tensei IV:
Apocalypse* for Nintendo 3DS. The goal is to understand and document how the games work by
reconstructing readable source code from their retail binaries. Matching builds verify the
reconstruction against the original executables. Progress, per game and per function, is on the
[progress site](https://megami-decomps.github.io/smt4-decomp/).

> [!IMPORTANT]
> **This is a binary reconstruction and analysis project for understanding and documenting how the
> games work. You cannot use this repository to play the games; it is not a port.**
>
> Building requires your own lawfully obtained copy of the corresponding game. Required files are
> extracted locally from your copy. Game dumps and retail executables are not included.

## Status and versions

Every function compiles, but most are still the decompiler's first pass. A function counts once its
source compiles to the retail bytes and `tools/relink.py` links it back into a byte-identical
executable; names, types and source organization are still being recovered.

| Version | Game | Build | `.code` SHA-256 |
|---|---|---|---|
| [`smt4`](smt4/) | Shin Megami Tensei IV (USA) | v1.2.0 update (`CTR-U-AMXE`) | `30c2fde6c31bdf2c2b08c74183523118a5eec048f0e0bf48f5b46fd136c495a1` |
| [`smt4a`](smt4a/) | Shin Megami Tensei IV: Apocalypse (USA) | v1.0 cartridge (`CTR-P-BG4E`) | `0b5338c4eace771ae809a06977a785ea4e00fd41c63e58d3f05fa6a255561bbe` |

The hash is of the decompressed program, so any container of the same build works.

Progress counts first-party code only: Atlus's engine (AsdSDK) and the game. Nintendo's SDK,
NintendoWare, NEX, Mobiclip and the ARM runtime still relink with everything else, but are listed in
`config/third_party.txt` and not counted ([what counts](docs/project.md#what-counts)).

| Version | First-party functions | Proven by relink | Readable | Third-party (not counted) |
|---|---|---|---|---|
| `smt4` | 7,031 | 1,682 | 534 | 2,420 |
| `smt4a` | 9,677 | 2,362 | 1,008 | 5,537 |

"Proven" is the number that counts: objdiff ignores some operand differences, relink does not. The
[project notes](docs/project.md#proof) explain the measurements and the six functions per game that
were hand-written assembly.

## Quickstart

Requirements:

- Windows, or Linux/macOS (the compiler then runs through [wibo](https://github.com/decompals/wibo),
  which `build.py fetch` downloads).
- Python 3.10+ and `git`.
- Your own decrypted dump: the IV v1.2.0 update (the installed NCCH or a decrypted `.cia`), or the
  Apocalypse cartridge (`.3ds`/`.cci`, or its partition 0).

```sh
git clone https://github.com/Megami-Decomps/smt4-decomp.git
cd smt4-decomp/smt4                 # or smt4a
python build.py fetch               # the pinned armcc, objdiff-cli and arm-none-eabi binutils

# Copy your dump to orig/smt4_v1.2.0.cxi (smt4a: orig/smt4a.cxi), then:
python build.py split               # checks the dump, writes each retail function as an object
python build.py                     # compiles every function with armcc
python build.py report              # objdiff -> build/report.json
python tools/relink.py --matched    # links every matched function into the retail .code
```

`build.py split` refuses any other build of the game. `relink.py` prints `MATCH` when the linked
`.code` is byte-identical to retail and lists every function it kept as retail bytes, with the reason.

## Documentation and contributing

Start with the [contribution guide](docs/CONTRIBUTING.md): pick a function, make
`python tools/fdiff.py <game> <function>` print `IDENTICAL` with readable C++, name it with
`tools/names.py`, and verify that `relink.py --matched` still prints `MATCH`.
[`sys/Task/Task`](smt4/src/_code/sys/Task/Task/) with [`include/sys/Task.h`](include/sys/Task.h) is the
reference for what a finished file looks like.

Apocalypse reuses most of IV's engine and game code. The contribution guide also covers porting a
matched function to its twin in the other game.

The [documentation index](docs/README.md) groups the available references:

- **Code reconstruction:** the matching rules, the readability standard and naming.
- **Project notes:** layout, shared code between the games, where names and source-file placements
  come from, and what counts as proven.

## Acknowledgements

- [objdiff](https://github.com/encounter/objdiff) and [wibo](https://github.com/decompals/wibo)
- [decomp.me](https://decomp.me) for the armcc toolchain packaging
- [Ghidra](https://github.com/NationalSecurityAgency/ghidra), whose decompiler produced the first pass
- the [Digital Devil Saga decompilation](https://github.com/Megami-Decomps/dds-decomp), for the
  contribution rules and conventions
- [romwright](https://github.com/Raikaru/romwright), for analysis, project generation and cross-game pairing

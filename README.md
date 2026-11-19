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
reconstruction against the original executables.

> [!IMPORTANT]
> **This is a binary reconstruction and analysis project for understanding and documenting how the
> games work. You cannot use this repository to play the games; it is not a port.**
>
> Building requires your own lawfully obtained copy of the corresponding game. Required files are
> extracted locally from your copy. Game dumps and retail executables are not included.

## Status and versions

Every function compiles, and about 70% of the first-party ones are proven; the rest are
still being matched. A function counts once its source compiles to the retail bytes and
`tools/relink.py` links it back into a byte-identical executable; names, types and source organization
are still being recovered.

| Version | Game | Build | `.code` SHA-256 |
|---|---|---|---|
| [`smt4`](smt4/) | Shin Megami Tensei IV (USA) | v1.2.0 update (`CTR-U-AMXE`) | `30c2fde6c31bdf2c2b08c74183523118a5eec048f0e0bf48f5b46fd136c495a1` |
| [`smt4a`](smt4a/) | Shin Megami Tensei IV: Apocalypse (USA) | v1.0 cartridge (`CTR-P-BG4E`) | `0b5338c4eace771ae809a06977a785ea4e00fd41c63e58d3f05fa6a255561bbe` |

The hash is of the decompressed program, so any container of the same build works.

Progress counts first-party code only: Atlus's engine (AsdSDK) and the game. Nintendo's SDK,
NintendoWare, NEX and OnlineCore, Mobiclip and the ARM runtime still relink with everything else, but
are listed in `config/third_party.txt` and not counted ([what counts](docs/project.md#what-counts)).

Snapshot at `0444aa790`; the [progress site](https://megami-decomps.github.io/smt4-decomp/), which CI
publishes from `master` with `tools/progress_site.py`, has the current numbers, per game and per
function:

| Version | First-party functions | Proven by relink | Proven code bytes | Readable | Third-party (not counted) |
|---|---|---|---|---|---|
| `smt4` | 7,774 | 5,450 | 582,618 of 2,411,976 | 2,785 | 3,116 |
| `smt4a` | 9,571 | 6,575 | 721,104 of 3,133,960 | 3,369 | 7,763 |

The function and code badges diverge because about 70% of the first-party functions are proven but
only about 24% of their code bytes (23% in Apocalypse): the unproven 30% are the large gameplay, UI
and state-machine routines, which hold about 76% of the bytes.

"Proven" is the number that counts: objdiff ignores some operand differences, relink does not. The
[project notes](docs/project.md#proof) explain the measurements and the six functions per game that
were hand-written assembly.

## Quickstart

Requirements:

- Windows, or Linux/macOS: there armcc runs through [wibo](https://github.com/decompals/wibo), which
  `build.py fetch` downloads; when wibo crashes on a unit, `build.py` compiles it again under Wine if
  Wine is installed ([troubleshooting](docs/troubleshooting.md)).
- Python 3.10+ and `git`.
- Your own decrypted dump: the IV v1.2.0 update (the installed NCCH or a decrypted `.cia`), or the
  Apocalypse cartridge (`.3ds`/`.cci`, or its partition 0).
- A short checkout path (36 characters or fewer: the longest unit path adds 222 more).

```sh
git clone https://github.com/Megami-Decomps/smt4-decomp.git
cd smt4-decomp/smt4                 # or smt4a
python build.py fetch               # the pinned armcc, objdiff-cli and arm-none-eabi binutils

# Copy your dump to orig/smt4_v1.2.0.cxi (smt4a: orig/smt4a.cxi), then:
python build.py split               # checks the dump, writes each retail function as an object
python build.py                     # compiles every function with armcc
python build.py report              # objdiff -> build/report.json
python ../tools/relink.py --matched # links every matched function into the retail .code
```

`build.py split` refuses any other build of the game. `relink.py` prints `MATCH` when the linked
`.code` is byte-identical to retail and lists every function it kept as retail bytes, with the reason.

## Pick your first task

Run these from the repository root, after the Quickstart's relink (they read its proof). Each lane
ends with `fdiff` printing `IDENTICAL` and the [review checklist](docs/CONTRIBUTING.md#review-checklist).

1. **Make a proven function readable.** On the [progress site](https://megami-decomps.github.io/smt4-decomp/),
   each game's function compendium marks proven functions that still carry decompiler placeholders
   as `registered` (finished ones are `readable`). Bring one to the
   [readability standard](docs/style-and-naming.md#readability-standard) and give it a real name
   with `tools/names.py`, checking after each step that it still matches:
   `python -B tools/fdiff.py smt4 <function>`
2. **Port a twin.** List the unproven functions whose twin in the other game is proven, largest
   first, with the twin's source and the struct offsets to change:
   `python -B tools/shared.py --list port`
3. **Match a new function.** Sort the unproven functions by what their diff looks like (it writes
   `build/triage.tsv`), pick one and work on it with `tools/fdiff.py <game> <function> --shape`:
   `python -B tools/triage.py`

## Documentation and contributing

Start with the [contribution guide](docs/CONTRIBUTING.md): the loop for one function (porting its
twin included: Apocalypse reuses most of IV's code), the matching rules and the review checklist.
[`sys/Task/Task`](smt4/src/_code/sys/Task/Task/) with [`include/sys/Task.h`](include/sys/Task.h) is
the reference for readable code: four of its five functions are matched in both games, and
`taskCreate` is still `NON_MATCHING`. The [documentation index](docs/README.md) lists the rest:

- **[Matching guide](docs/matching-guide.md):** the armcc 4.1 cookbook, sweeps, compiler flags.
- **[Style and naming](docs/style-and-naming.md):** shared declarations, readability, consistency, names.
- **[Troubleshooting](docs/troubleshooting.md):** wibo and Wine, path length, known host failures.
- **[Project notes](docs/project.md):** the pipeline, a tools cheat sheet, layout, provenance, what
  counts as proven.
- **[Match notes](docs/notes/README.md):** the retail evidence behind single matches.

## Acknowledgements

- [objdiff](https://github.com/encounter/objdiff) and [wibo](https://github.com/decompals/wibo)
- [decomp.me](https://decomp.me) for the armcc toolchain packaging
- [Ghidra](https://github.com/NationalSecurityAgency/ghidra), whose decompiler produced the first pass
- the [Digital Devil Saga decompilation](https://github.com/Megami-Decomps/dds-decomp), for the
  contribution rules and conventions
- [romwright](https://github.com/Raikaru/romwright), for analysis, project generation and cross-game pairing

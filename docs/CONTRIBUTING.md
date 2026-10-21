# Contributing

A function is done when it **matches** (its source compiles to the retail bytes and
`tools/relink.py --matched` links it into a byte-identical `.code`) and it **reads like the
original source**. Both games are one build tree, so most work lands twice: fix one, port the twin.

## The loop

1. Pick a function. `build/report.json` (after `python -B build.py report`) scores every function;
   `python -B tools/shared.py --list ported` lists functions matched in one game and not its twin.
   Only first-party code counts: skip the functions in `config/third_party.txt` (Nintendo's SDK,
   NintendoWare, NEX, Mobiclip, the ARM runtime).
2. `python -B tools/fdiff.py <game> <function>` compiles that one source and diffs its disassembly
   and relocations against retail. Edit, rerun, until it prints `IDENTICAL`.
3. Make it readable (below), rerunning `fdiff` after each step.
4. Name it: add rows to a TSV and run `python -B tools/names.py apply ROWS.tsv`.
5. Prove it, in each game you touched:
   `python -B build.py && python -B build.py report && python -B tools/relink.py --matched`
   must print `MATCH`, with the function counted as proven.
6. Port the twin (`tools/shared.py` pairs them): same source, the twin's own callee and global names.

## Matching rules

Every match must be one a programmer could have written for a reason.

- **Not allowed:** register pinning (`register ... __asm("rN")`), `__asm`, `__svc`/`__swi`,
  `volatile` added to steer code, `#pragma`, `__align`/`aligned(...)` without a real alignment,
  dead or no-op code (`if (0)`, empty `do {} while (0)`, self-assignments), and temporaries,
  gotos or declaration tricks whose only purpose is steering register allocation.
- **Allowed, because the original did it:** real prototypes for callees (a value retail keeps live
  in `r1`/`r2` is usually an argument the decompiler dropped), signed/unsigned and width choices,
  `for`/`while`/`switch` shapes, early returns, pointer variables that a programmer would use to
  walk an array or struct, and small `static __inline` accessors in headers.
- A near miss stays as it is with a `/* NON_MATCHING: ... */` comment saying what still differs.
  Don't keep a fake match to raise the count.
- `blx` against `bl` on a call is not a difference: the linker picks it. Retail target objects hold
  calls in the compiler's form (`bl` with a call relocation).
- **Compiler flags need evidence.** A unit can override the flags with a `cflags` list in
  `config/project.json` when the retail code shows a different build:
  - a constant division that calls `__aeabi_idivmod`/`__aeabi_uidivmod` instead of multiplying is
    `-Ospace` (the STL and SDK containers were built that way). Write `/` and `%` and set the flag;
    never call the helper by hand;
  - `--cpu=5TE` (Thumb register moves written `movs rd, rm` where MPCore armcc writes `mov`: runtime
    and library code), `-O2`: only when the function is IDENTICAL with the flag and not without it.
- **Linker NOPs are calls.** armcc never emits `mov r0, r0` (ARM) or `mov r8, r8` twice (Thumb);
  armlink writes them over a branch it removed. `build.py` and `fdiff` do the same after compiling,
  so write the call:
  - **a call to a `__weak` function the release build didn't link**: mostly the engine's debug hook,
    called with `__FILE__` and `__LINE__` (retail still loads the file name into r0, the line into
    r1). Write `asdDebugTrace(DAT_00409c64, 172);` with `include/AsdSDK/AsdDebug.h` when retail
    loads the string from a global, or `asdDebugTrace("c:\\SMT4\\...\\File.cpp", 172);` when it
    addresses it pc-relatively (armcc put the literal after the pool; `fdiff` and `relink.py` compare
    those bytes with the image). A weak function declared `__declspec(noreturn)` is reached with
    a plain `b`, so its NOP has no `pop` around it;
  - **a branch to the very next instruction** (armlink's `--branchnop`): a tail call into the
    function placed right after. Write the call as the last statement.
- **A function that starts with a NOP before its `push`** is two functions the analysis merged: a
  stub forwarding to the next one, and that function. Split the unit with
  `python -B tools/units.py split ROWS` (`<game> <function> <hex offset>` per row) and write both.
- **A call or callback address that lands in no function** is code the analysis missed (a callee, a
  callback, a switch tail cut off its function, or a function whose real start is a load before its
  `push`). **A unit that starts mid-flow** (it uses registers or a frame it never set up, or the unit
  before it runs straight into it) is a piece of a function the analysis cut up, often at the `push`
  after an early-exit guard (`cmp r0, #0; bxeq lr`). `python -B tools/units.py missing > rows.tsv`
  lists both kinds; check the rows, then `python -B tools/units.py add rows.tsv` adds, extends, moves
  and joins the units. Never call a `func_0x<address>` placeholder: the target has a symbol once its
  unit exists.

## Readability standard

A done function has none of the decompiler's placeholders:

- **No raw offsets.** `*(int *)(p + 0x20)` becomes `task->next`. Structs go in a shared header
  under `include/`, named after the original source file (`include/sys/Task.h` for
  `sys/Task/Task.c`), with every field's offset in a comment. Unknown fields stay `unkXX`.
- **No `DAT_`/`FUN_`/`param_N`/`temp_vN`/`puVarN`.** Name globals, functions, parameters and
  locals for what they hold. A global read as `DAT_X + n` is a struct: declare the struct and
  name the global (`g_taskLists[i].count`, not `*(int *)((u8 *)&DAT_004c5830 + 8)`).
- **Real types.** `u8`/`s16`/`s32`/`f32` and pointers to the real struct; no `undefined4`, no
  `u64` unless the value is 64-bit, `NULL` for null pointers, `bool`-like returns as `s32` or
  `bool` when the code treats them so.
- **Natural control flow.** Loops over counts, `switch` over cases, no Ghidra `while (1)` with
  `break`s where a `for` says it.
- **Comments say what the code does**, one line above the function and wherever a field's or
  constant's meaning isn't obvious. No restating the code.
- Each source file includes `common.h` (base types, `NULL`) or a header that does.

## C++

The games are C++ (`.cpp` files compiled with `--cpp --no_rtti --no_rtti_data`), but not every
function was a method: much of the game code is C-style functions and callback tables. Write a
class only where the binary shows one:

- a vtable in the data (two zero words, then function pointers) and the functions it lists;
- a function that stores a vtable address into `this` (a constructor or destructor);
- functions the class's methods call on `this` (`this` arrives in r0 like any first argument).

Then write the function as a member (`void Obj55afc4::stop()`, outside `extern "C"`) and name it
with its mangled symbol through `tools/names.py` (`_ZN9Obj55afc44stopEv`); its file becomes
`Obj55afc4__stop.cpp` and the progress site shows `Obj55afc4::stop()`. `tools/cxxnames.py`
demangles. Until a class's real name is known, it is named after its vtable address. Put the class
in a shared header (`include/classes/Obj55afc4.h`) so every member's file declares it the same way.

Constructors and destructors are written as such (`Obj55afc4::~Obj55afc4()`, reference
`include/classes/Obj55afc4.h` and `smt4a/src/_code/0012/Obj55afc4__dtor_Obj55afc4.cpp`):

- name the unit with the variant retail's function is: `D1` for the destructor a vtable lists
  (`_ZN9Obj55afc4D1Ev`), `C1` for a constructor (`_ZN9Obj55afc4C1Ev`); armcc emits the base-object
  variant (`D2`/`C2`) as an alias of it and calls base and member structors by their `D1`/`C1` names.
  Files follow: `Obj55afc4__dtor_Obj55afc4.cpp` (D1), `Obj55afc4__deleting_dtor_Obj55afc4.cpp` (D0),
  `Obj55afc4__Obj55afc4.cpp` (C1);
- name the vtable as a sized global, the note starting with its size:
  `smt4a 0x55afc4 _ZTV9Obj55afc4 evidence size:0x1c vtable ...`. A pool word pointing at its address
  point (vtable + 8) then reads `_ZTV9Obj55afc4` plus 8 in the retail object, as armcc writes it;
- defining a destructor also emits its deleting variant (`D0`) and the vtable. `build.py` (and
  `fdiff`) notice the extra function or vtable group, recompile with `--split_sections` and keep only
  the unit's own function; the vtable stays the retail bytes. A `D0` unit can be written the same way
  when armcc's deleting variant matches retail's; retail's often only calls `D1` and frees, from
  another file, so keep it in C form when it does not.

## Names

There are no symbols, so names are chosen. `tools/names.py` applies them everywhere at once
(symbol file, project, objdiff, sources, file names, retail target objects) and records each in
`config/name_sources.txt` as `evidence` (the binary names it: an assert path, a debug string) or
`inferred` (our description).

- Functions: the source file's module prefix plus camelCase (`taskListUpdate`, `btlStartTask`).
  Nintendo SDK functions keep their flattened names (`nn_fs_..._CloseFile`).
- Globals: `g_` plus camelCase (`g_taskLists`). Structs and typedefs: PascalCase (`TaskList`).
- Give twins the same name in both games.
- Rename only through `tools/names.py`; renaming by hand breaks the retail target objects.

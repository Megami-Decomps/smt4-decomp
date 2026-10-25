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
  gotos or declaration tricks whose only purpose is steering register allocation. The one
  exception is `include/nn/svc.h`, which declares the CTR-SDK's system calls, thread-local storage
  and barriers with armcc's `__svc` and cp15 intrinsics as the SDK did; game code calls them
  through that header and nowhere else.
- **Allowed, because the original did it:** real prototypes for callees (a value retail keeps live
  in `r1`/`r2` is usually an argument the decompiler dropped), signed/unsigned and width choices,
  `for`/`while`/`switch` shapes, early returns, pointer variables that a programmer would use to
  walk an array or struct, and small `static __inline` accessors in headers.
- A near miss stays as it is with a `/* NON_MATCHING: ... */` comment saying what still differs.
  Don't keep a fake match to raise the count.
  Before treating a small diff as allocation, check the actual constants, member offsets and full
  callee argument list: a signed load into an otherwise-unused argument register can expose a
  dropped argument. For a local buffer displaced by four bytes, recover its real size and alignment
  from its producers/consumers and existing record types; don't compensate with dummy padding or
  an invented outgoing argument.
  A no-argument wrapper can accidentally consume the incoming `r0` unchanged: check the real
  callee and restore explicit pointer/handle forwarding. For registered process/draw callbacks,
  compare the body with its registrar and recover the callback parameter and result types too.
  At large byte-field offsets, check signedness before reshaping the layout: an `s8` flag can
  reproduce a folded `add`/`ldrb` even when a zero test makes the load itself unsigned.
  Keep packing local to genuinely unaligned members, with size/offset assertions; packing an
  entire record can incorrectly downgrade its otherwise-aligned word accesses.
  A float-shaped stack argument does not alone prove a variadic callee: a one-word integer/float
  payload union can have the same calling convention.
- Shared record layouts must have one definition in a common header. Include that header from
  each user; unrelated layouts with coincidentally identical names need distinct type names.
  Check which class owns a tail field before extending a base: sibling classes can have
  different fields at the same offset. Assert both the base extent and each derived layout.
  Recheck every previously matching consumer of either affected header with `fdiff`.
- `blx` against `bl` on a call is not a difference: the linker picks it. Retail target objects hold
  calls in the compiler's form (`bl` with a call relocation).
- **Compiler flags need evidence.** A unit can override the flags with a `cflags` list in
  `config/project.json` when the retail code shows a different build:
  - a constant division that calls `__aeabi_idivmod`/`__aeabi_uidivmod` instead of multiplying is
    `-Ospace` (the STL and SDK containers were built that way). Write `/` and `%` and set the flag;
    never call the helper by hand;
  - `--cpu=5TE` (Thumb register moves written `movs rd, rm` where MPCore armcc writes `mov`: runtime
    and library code), `-O2`: only when the function is IDENTICAL with the flag and not without it.
- **The original was built with armcc `--multifile`.** A caller knew which registers its callees
  really clobber: retail keeps a value in a caller-saved register (`r1`-`r3`, `ip`) across a `bl`,
  or pushes fewer registers than a unit compiled alone does, yet the callees stay out of line. A
  unit can name those callees in a `multifile` list in `config/project.json`; `build.py` and
  `fdiff` then compile it in one `--multifile --no_autoinline` run with the callees' unit sources
  and keep only the unit's function. Same evidence rule as `cflags`, and the callees' own sources
  must clobber what retail's do (matched callees are best).
- **The compiler is armcc 4.1 b713 throughout.** Every other build decomp.me ships (4.0, 4.1 b561
  to b1454, 5.04) loses proven functions and gains none that b713 lacks. Later 4.1 builds happen to
  match some near misses (they never write a `vdiv`/`vabs`/`vcvt` result over an operand), but
  those sit next to functions only b713 matches: the source is still not the original. Fix the
  source; don't change the compiler.
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
  - **`__cxa_guard_release` and `__aeabi_atexit` after a function-local static's initialisation**:
    the retail program links neither, so those calls are NOPs there (`ldr r0, [guard]; nop`).
    armcc 4.1 b713 references them strongly; `build.py` treats them as the weak calls they were and
    names atexit's `__dso_handle` argument `entry` (the image base). Write the `static` normally;
  - **a branch to the very next instruction** (armlink's `--branchnop`): a tail call into the
    function placed right after. Write the call as the last statement.
  - **an ARM `b` or conditional `bl` to a Thumb function** (`beq` tail call, `blne`): it cannot change
    the instruction set, so armlink sent it through the 8-byte stub (`add ip, pc, #1; bx ip`) placed
    right before that function, and retail's relocation names the stub (`scope.py` labels it
    `linker`). Write the call to the Thumb function; `build.py` retargets the relocation at the stub
    when retail has one. An unconditional `bl` stays: the linker turns it into a `blx`.
- **A unit may define its own data**: a function-local `static T instance;` and its guard, a
  file-scope `static` table the function addresses from a base register, or the global a static
  initialiser constructs. `relink.py` places the object's `.constdata`/`.data`/`.bss` at the address
  retail's pool words name (`.constdata`/`.data` only when the image bytes there equal the
  object's; `.bss` only inside the image's zero-filled range). `fdiff` cannot prove that address:
  a pool word into the object's own data against retail's `DAT_x`/`_ZZ…` counts as equal and
  `IDENTICAL` carries `(data relocations by section: relink checks the address)`. Give the
  variables their real names when known.
- **Compiler-generated global initialisers are not ordinary wrappers.** armcc emits
  `__sti___<n>_<file>` functions in `i.` sections, with references to their own data sections.
  The current unit carver does not extract those initialisers. Keep native global object
  definitions, or report `BLOCKED: static initialiser: needs build.py support for __sti__ units`;
  do not replace construction/destructor registration with explicit runtime-helper calls.
- **Linker-inlined calls.** armlink (`--inline`) replaced every ARM `bl` to a function whose body is
  one instruction and `bx lr` with that instruction: a getter's `ldr r0, [r0, #N]`, a setter's
  `vstr s0, [r0, #N]`, a `mov r0, #0` stub, an SDK svc wrapper's `svc N`. A lone instruction like
  that in the middle of retail code is such a call: write the call. `build.py` and `fdiff` do the
  same replacement (the bodies come from the target objects; a NOP body is called, not inlined).
- **`nop {0}` (`e320f000`) is the compiler's**, not the linker's: armcc places these hints itself
  in some branch and `switch` layouts. Plain C reproduces them; never infer a missing call from them.
- **A function that starts with a NOP before its `push`** is two functions the analysis merged: a
  stub forwarding to the next one, and that function. Split the unit with
  `python -B tools/units.py split ROWS` (`<game> <function> <hex offset>` per row) and write both.
- **A call or callback address that lands in no function** is code the analysis missed (a callee, a
  callback, a switch tail cut off its function, or a function whose real start is a load before its
  `push`). **A unit that starts mid-flow** (it uses registers or a frame it never set up, or the unit
  before it runs straight into it) is a piece of a function the analysis cut up, often at the `push`
  after an early-exit guard (`cmp r0, #0; bxeq lr`). `python -B tools/units.py missing > rows.tsv`
  lists both kinds, including code reached only through a word in `.data`/`.rodata` (callback
  tables, vtables nothing names yet); check the rows, then `python -B tools/units.py add rows.tsv`
  adds, extends, moves and joins the units. A moved start (armcc loaded a global or constant before
  the `push`) leaves the old source taking an invented parameter for that register: rewrite it to
  load the value itself.
  Never call a `func_0x<address>` placeholder: the target has a symbol once its unit exists.

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
  (`_ZN9Obj55afc4D1Ev`), `C1` for a constructor (`_ZN9Obj55afc4C1Ev`). armcc can emit the
  base-object variants (`D2`/`C2`) as aliases or call them directly; the build tools keep the
  unit's complete-object body and canonicalize these references to retail's `D1`/`C1` symbols.
  Files follow: `Obj55afc4__dtor_Obj55afc4.cpp` (D1), `Obj55afc4__deleting_dtor_Obj55afc4.cpp` (D0),
  `Obj55afc4__Obj55afc4.cpp` (C1). Parameterized constructor files append parameter types, e.g.
  `Obj55c8d0__Obj55c8d0__unsigned_int.cpp` for `_ZN9Obj55c8d0C1Ej`, so overloads stay distinct;
- name the vtable as a sized global, the note starting with its size:
  `smt4a 0x55afc4 _ZTV9Obj55afc4 evidence size:0x1c vtable ...`. A pool word pointing at its address
  point (vtable + 8) then reads `_ZTV9Obj55afc4` plus 8 in the retail object, as armcc writes it;
- identify a constructor by its final vtable store, not an earlier inlined base constructor's
  store. Verify the address point in the original image's literal pool: an old source draft or
  an oversized neighboring symbol can give it the wrong name or addend. Adjacent independent
  vtables each get their own symbol and size, even when some method slots were stripped;
- nonvirtual owners can still need native destructors. An empty enclosing destructor lets armcc
  recover the owner from an embedded member's destructor result; an `extern "C"` wrapper that
  destroys the member and returns a saved owner is not the same ABI. Account for register
  writeback before interpreting the final pointer adjustment;
- preserve class-value copy semantics as well as layout: a small iterator with a nontrivial
  copy constructor uses hidden result storage, unlike an ordinary one-word aggregate;
- recover a callback table's actual owner and use native member functions/member pointers,
  not a second owner layout or integer pairs standing in for member pointers. Preserve each
  callback's real arguments and return type, even when its body ignores an argument. Native
  placement construction also preserves the compiler's nullable-member construction guard;
  a hand-written `pointer != -8` check is not a substitute for that constructor.
- verify destructor entry points against their vtable slots. If a unit starts after the
  instruction loading its vptr, fix the function boundary rather than inventing a vtable argument;
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

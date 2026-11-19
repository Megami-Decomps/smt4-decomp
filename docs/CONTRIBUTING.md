# Contributing

A function is done when it **matches** (its source compiles to the retail bytes and
`tools/relink.py --matched` links it into a byte-identical `.code`) and it **reads like the
original source**. Both games are one build tree, so most work lands twice: fix one, port the twin.

This guide holds the workflow and the rules a review checks. The rest of the documentation:

- [Matching guide](matching-guide.md): reading a diff, the armcc 4.1 cookbook of source shapes,
  sweeps, and the compiler flags with the evidence each needs.
- [Style and naming](style-and-naming.md): shared declarations and the headers that own contracts,
  the readability standard, consistency rules, C++ classes and names.
- [Troubleshooting](troubleshooting.md): wibo and Wine, path length, the known host failures, and
  what to do when objdiff, `fdiff` and relink disagree.
- [Project layout, names and provenance](project.md): the pipeline, a tools cheat sheet, and what
  counts as proven.

## The loop

1. Pick a function. `build/report.json` (after `python -B build.py report`) scores every function;
   `python -B tools/shared.py --list port` lists unproven functions whose twin is proven (exact, or a
   near twin with the struct offsets to change);
   `python -B tools/triage.py` sorts the unproven ones by what their diff looks like, and
   `python -B tools/similar.py` names, for each, the proven functions whose retail code is most alike
   (start from that function's source: see [Start from a look-alike](matching-guide.md#start-from-a-look-alike)).
   Only first-party code counts: skip the functions in `config/third_party.txt` (Nintendo's SDK,
   NintendoWare, NEX, Mobiclip, the ARM runtime).
2. `python -B tools/fdiff.py <game> <function>` compiles that one source and diffs its disassembly
   and relocations against retail. Edit, rerun, until it prints `IDENTICAL`.
   To try several shapes at once, use `tools/trial.py` ([Trying variants](matching-guide.md#trying-variants)).
   A grid holds only variants the rules allow: types, real prototypes, `switch` against `if`, loop
   forms, helpers with evidence. Not permutations of declarations or single-use wrappers: a match
   found that way is steering.
   On large functions rank by `--shape` ([Large functions](matching-guide.md#large-functions));
   a match is still IDENTICAL by the raw diff. `--flags` results are diagnostics: the config changes
   only with the evidence in [Compiler and flags](matching-guide.md#compiler-and-flags).
3. Make it readable ([readability standard](style-and-naming.md#readability-standard),
   [consistency rules](style-and-naming.md#consistency-rules)), rerunning `fdiff` after each step.
4. Name it: add rows to a TSV and run `python -B tools/names.py apply ROWS.tsv`
   ([Names](style-and-naming.md#names)).
5. Prove it, in each game you touched:
   `python -B build.py && python -B build.py report && python -B ../tools/relink.py --matched`
   must print `MATCH`, with the function counted as proven.
6. Port the twin (`tools/shared.py` pairs them): same source, the twin's own callee and global names.

Before asking for review, go through the [review checklist](#review-checklist).

## Matching rules

Every match must be one a programmer could have written for a reason. These rules decide a
review; the [matching guide](matching-guide.md) shows how to work inside them.

### What a source may contain

- **Not allowed:** register pinning (`register ... __asm("rN")`), `__asm`, `__svc`/`__swi`,
  `volatile` added to steer code, `#pragma`, `__align`/`aligned(...)` without a real alignment,
  dead or no-op code retail does not contain (`if (0)`, empty `do {} while (0)`, self-assignments),
  and temporaries, gotos or declaration tricks whose only purpose is steering register allocation.
  Code retail does contain is written as the original had it, even when it has no visible effect: a
  counting loop whose body was compiled out, a running minimum computed and never read, two branches
  calling the same function. The one
  exception is `include/nn/svc.h`, which declares the CTR-SDK's system calls, thread-local storage
  and barriers with armcc's `__svc` and cp15 intrinsics as the SDK did; game code calls them
  through that header and nowhere else.
- **`volatile` on shared state, only when all four hold:**
  1. it is on the field or global declaration in the shared type, never a cast at one use;
  2. the field is plausibly shared with another thread, an interrupt or hardware (polled state,
     event or ready flags, ring cursors);
  3. retail reloads it where no other source shape can (no intervening call or aliasing store
     between the loads);
  4. every user of the type still compiles, and every function that was `IDENTICAL` stays so
     (`tools/usercheck.py`, below).

  Example: `MovieSync::state` (`include/shard/S2MovieSync.h`), polled by
  `movieSyncDrainSourcePositions` while the playback thread changes it; retail reloads it before
  every compare of a chain.
- **Allowed, because the original did it:** real prototypes for callees (a value retail keeps live
  in `r1`/`r2` is usually an argument the decompiler dropped), signed/unsigned and width choices,
  `for`/`while`/`switch` shapes, early returns, pointer variables that a programmer would use to
  walk an array or struct, and small `static __inline` accessors in headers.
- **A helper needs evidence besides the diff.** A `static` or `static __inline` helper belongs in the
  source only when something other than the match supports it: it is called at two or more sites,
  the twin or a sibling performs the same operation, a header already declares it, or its body is
  that of a real function (a getter retail inlined elsewhere). A single-use wrapper around one store
  or one call whose only effect is to move armcc's scheduling is register steering: the function
  stays `NON_MATCHING`. Prove a helper by putting it in the shared header and using it at its other
  sites (the twin, the siblings); if they match too, it was real.
- **Compiler, flags and `multifile` partners are not levers.** Every unit is built by armcc 4.1
  b1454; a unit's own `cflags` or `multifile` entry in `config/project.json` needs the retail
  evidence described in [Compiler and flags](matching-guide.md#compiler-and-flags).

### Near misses

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

### Declarations

- Shared record layouts must have one definition in a common header. Include that header from
  each user; unrelated layouts with coincidentally identical names need distinct type names.
  Check which class owns a tail field before extending a base: sibling classes can have
  different fields at the same offset. Assert both the base extent and each derived layout.
  Recheck every consumer of a header or declaration you change with `python -B tools/usercheck.py [BASE]`:
  it scores, as `fdiff` does, each unit the change reaches (edited sources, and every source that includes
  a changed, new or deleted header) at BASE (default `HEAD`) and now, lists the units whose score moved
  and exits 1 on a regression or a new compile failure. Don't swap headers in place to compare.
  [Shared declarations](style-and-naming.md#shared-declarations) lists the headers that own such
  types and contracts.
- Function declarations live in subsystem headers (`ui/UiControl.h`, `gamedata/GameDataAccess.h`,
  `battle/BattleHelpers.h`, `AsdSDK/Source/Gfx/AsdGfxHelpers.h`, ...), never in a header named after
  one function (renames break those). A function with no known subsystem is declared in
  `code/Code<NNNN>.h`, named by the high half of its address. A header suffix `_Shard…`/`_<Type>`
  means the group needs that type header; `_Variant<A..>` groups hold the declarations whose
  signature differs between users (callers with a local, differently typed prototype) so they do
  not collide in one translation unit. Do not write local prototypes of a function that already
  has a header; find it with `grep -rn "<name>(" include`.

### What the linker did: write the call

- `blx` against `bl` on a call is not a difference: the linker picks it. Retail target objects hold
  calls in the compiler's form (`bl` with a call relocation).
- **Runtime helpers armcc emits itself** are reached through the C that produces them, never called by
  name: `/` and `%` for the division helpers, `strcpy` of a literal or a packed-record assignment for
  `__ARM_common_memcpy4_N`. The exceptions are helpers b1454 never emits from C, `__aeabi_memset4`
  for a word-aligned fill and `ll_sdiv` for a 64-bit division, which callers name directly.
- **Linker NOPs are calls.** armcc never emits `mov r0, r0` (ARM) or `mov r8, r8` twice (Thumb);
  armlink writes them over a branch it removed. `build.py` and `fdiff` do the same after compiling,
  so write the call:
  - **a call to a real empty function** (a unit whose whole body is `bx lr`; ~150 per game): armlink's
    `--inline` replaces every `bl` to it with a NOP, so the image never calls one. `build.py` does the
    same. If retail keeps values in caller-saved registers across such a NOP, the callee was in the
    same `--multifile` run: give the unit a `multifile` entry naming that empty unit;
  - **a call to a `__weak` function the release build didn't link**: mostly the engine's debug hook,
    called with `__FILE__` and `__LINE__` (retail still loads the file name into r0, the line into
    r1). Write `asdDebugTrace(DAT_00409c64, 172);` with `include/AsdSDK/AsdDebug.h` when retail
    loads the string from a global, or `asdDebugTrace("c:\\SMT4\\...\\File.cpp", 172);` when it
    addresses it pc-relatively (armcc put the literal after the pool; `fdiff` and `relink.py` compare
    those bytes with the image). A weak function declared `__declspec(noreturn)` is reached with
    a plain `b`, so its NOP has no `pop` around it;
  - **`__cxa_guard_release` and `__aeabi_atexit` after a static's initialisation**:
    guard-release calls are weak and removed. Retail's `__aeabi_atexit` is an empty `bx lr`
    function: armlink removes its `bl` calls, but preserves a final tail `b __aeabi_atexit`.
    `build.py` reproduces that distinction and names the `__dso_handle` argument `entry`
    (the image base); an explicit declaration of it must not be `__weak` (armcc never tail-calls a
    weak function). Write function-local `static` objects normally. For a file initializer,
    define the global objects with native constructors/destructors in retail order;
    `build.py` gives armcc's generated `__sti___<n>_<file>` function the unit's name.
  - **a branch to the very next instruction** (armlink's `--branchnop`): a tail call into the
    function placed right after. Write the call as the last statement.
  - **an ARM `b` or conditional `bl` to a Thumb function** (`beq` tail call, `blne`): it cannot change
    the instruction set, so armlink sent it through the 8-byte stub (`add ip, pc, #1; bx ip`) placed
    right before that function, and retail's relocation names the stub (`scope.py` labels it
    `linker`). Write the call to the Thumb function; `build.py` retargets the relocation at the stub
    when retail has one. An unconditional `bl` stays: the linker turns it into a `blx`.
- **Linker-inlined calls.** armlink (`--inline`) replaced every ARM `bl` to a function whose body is
  one instruction and `bx lr` with that instruction: a getter's `ldr r0, [r0, #N]`, a setter's
  `vstr s0, [r0, #N]`, a `mov r0, #0` stub, an SDK svc wrapper's `svc N`. A lone instruction like
  that in the middle of retail code is such a call: write the call. `build.py` and `fdiff` do the
  same replacement (the bodies come from the target objects; a NOP body is called, not inlined).
  When retail schedules an unrelated instruction into the slot before that instruction (where a
  build that calls the getter has `nop {0}` and sets the register after it), the caller saw the
  getter's body: write the getter as a `static __inline` function in the unit (FUN_003a72a4's
  `shopListItemGetId`). That keeps retail's separate widening (`ldrh` then `sxth`), which a direct
  field read would fold into `ldrsh`.
- **`nop {0}` (`e320f000`) is the compiler's**, not the linker's: armcc places these hints itself
  in some branch and `switch` layouts. Plain C reproduces them; never infer a missing call from them.

### Data a unit owns or names

- **A unit may define its own data**: a function-local `static T instance;` and its guard, a
  file-scope `static` table the function addresses from a base register, or the global a static
  initialiser constructs. `relink.py` places the object's `.constdata`/`.data`/`.bss` at the address
  retail's pool words name (`.constdata`/`.data` only when the image bytes there equal the
  object's; `.bss` only inside the image's zero-filled range). `fdiff` cannot prove that address:
  a pool word into the object's own data against retail's `DAT_x`/`_ZZ…` counts as equal and
  `IDENTICAL` carries `(data relocations by section: relink checks the address)`. Give the
  variables their real names when known. A unit whose own function has to be cut out of a larger
  compile (a structor, a file of several units) loses its data: a pool word into a named object
  becomes that name, and into one of armcc's anonymous constants (`<DataN>`: a pointer-to-member
  table it copies, a constant aggregate) the name retail's object gives the same word — those
  bytes are not checked.
- **A pool word inside a named global** reads `g_obj+off` only when `symbols.txt` gives the object a
  `size:`; without one, retail's word prints as `DAT_<address>` and code-identical functions differ.
  Size the object with `tools/names.py` (a row repeating the global's name with a note starting
  `size:0x..`; evidence: the asserted `sizeof` of its type, the offsets its users touch, never past
  the next symbol).
- **A number that falls inside a data section** (an IPC command header, a status code) is still a
  number: `<game>/config/numbers.txt` lists such values (`0x<value> // evidence`), and the target
  objects then keep the plain word. Write the constant in source, never `&DAT_…`.
- **Compiler-generated global initialisers are not ordinary wrappers.** Keep native object
  definitions rather than explicit runtime-helper calls. Initialized objects and zero-initialized
  objects can belong to different data sections: for example, parameterized module-state/counter
  objects occupy `.data`, while default-constructed camera and critical-section objects occupy
  `.bss`. Preserve the original object order and all pre-existing data bytes.
  When taking an inline destructor's address emits its out-of-line COMDAT copy, its standalone
  unit may use the same real source file as the initializer; the carver selects that native
  destructor. An inline empty destructor can instead make armcc eliminate registration entirely,
  so do not replace an out-of-line declaration with an inline empty body merely to remove calls.

### Function boundaries

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

## Review checklist

Run these for every game a change touches, from the repository root unless noted. CI runs the
declaration checks on every push and pull request, and the build and relink proof where the program
images are available.

- [ ] Each function the change claims prints `IDENTICAL` with `python -B tools/fdiff.py <game> <function>`;
      each one it leaves unmatched keeps its `/* NON_MATCHING: ... */` comment.
- [ ] `python -B tools/usercheck.py <base>` (the commit the change started from) exits 0: no unit
      the change reaches scores worse or stops compiling.
- [ ] `python -B tools/declcheck.py <base>` reports no new redeclaration, every single-use `static`
      helper it lists has the evidence the [helper rule](#what-a-source-may-contain) asks for, and
      `python -B tools/declcheck.py --all --ratchet` passes.
- [ ] In `<game>/`: `python -B build.py && python -B build.py report && python -B ../tools/relink.py --matched`
      prints `MATCH`, the claimed functions are proven, and no previously proven function is lost.
- [ ] New names went through `tools/names.py`; the code meets the
      [readability standard](style-and-naming.md#readability-standard).
- [ ] Every `cflags`, `multifile`, `inlined.txt`, `numbers.txt` or `size:` entry the change adds
      carries its evidence. A match whose fix changed a shared contract, a header or the
      configuration can record that evidence in a [match note](notes/README.md).

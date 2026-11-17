# Contributing

A function is done when it **matches** (its source compiles to the retail bytes and
`tools/relink.py --matched` links it into a byte-identical `.code`) and it **reads like the
original source**. Both games are one build tree, so most work lands twice: fix one, port the twin.

## The loop

1. Pick a function. `build/report.json` (after `python -B build.py report`) scores every function;
   `python -B tools/shared.py --list ported` lists functions matched in one game and not its twin;
   `python -B tools/triage.py` sorts the unproven ones by what their diff looks like, and
   `python -B tools/similar.py` names, for each, the proven functions whose retail code is most alike
   (start from that function's source: see [Matching techniques](#matching-techniques)).
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
  4. every user of the type still compiles, and every function that was `IDENTICAL` stays so.

  Example: `MovieSync::state` (`include/shard/S2MovieSync.h`), polled by
  `movieSyncDrainSourcePositions` while the playback thread changes it; retail reloads it before
  every compare of a chain.
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
- Shared record layouts must have one definition in a common header. Include that header from
  each user; unrelated layouts with coincidentally identical names need distinct type names.
  Check which class owns a tail field before extending a base: sibling classes can have
  different fields at the same offset. Assert both the base extent and each derived layout.
  Recheck every previously matching consumer of either affected header with `fdiff`.
  [Shared declarations](#shared-declarations) lists the headers that own such types and contracts.
- Function declarations live in subsystem headers (`ui/UiControl.h`, `gamedata/GameDataAccess.h`,
  `battle/BattleHelpers.h`, `AsdSDK/Source/Gfx/AsdGfxHelpers.h`, ...), never in a header named after
  one function (renames break those). A function with no known subsystem is declared in
  `code/Code<NNNN>.h`, named by the high half of its address. A header suffix `_Shard…`/`_<Type>`
  means the group needs that type header; `_Variant<A..>` groups hold the declarations whose
  signature differs between users (callers with a local, differently typed prototype) so they do
  not collide in one translation unit. Do not write local prototypes of a function that already
  has a header; find it with `grep -rn "<name>(" include`.
- `blx` against `bl` on a call is not a difference: the linker picks it. Retail target objects hold
  calls in the compiler's form (`bl` with a call relocation).
- **Compiler flags need evidence.** A unit can override the flags with a `cflags` list in
  `config/project.json` when the retail code shows a different build:
  - a constant division that calls `__aeabi_idivmod`/`__aeabi_uidivmod` instead of multiplying is
    `-Ospace` (the STL and SDK containers were built that way). Write `/` and `%` and set the flag;
    never call the helper by hand;
  - `--cpu=5TE` (Thumb register moves written `movs rd, rm` where MPCore armcc writes `mov`: runtime
    and library code), `-O2`: only when the function is IDENTICAL with the flag and not without it;
  - `--fpu=softvfp`: code built without VFP. Retail copies 8- and 12-byte values through core
    registers (`ldrd`/`strd`, `ldm`/`stm`) where a VFP build uses `vldm`/`vstm` (Apocalypse's request
    and IPC library, the cfg stubs, the GPU command-buffer module). Prefer the flag when the module's
    neighbours or the function's twin carry it too; a register-only difference alone is weak evidence;
  - runtime helpers armcc emits itself are reached through the C that produces them, never called by
    name: `/` and `%` for the division helpers, `strcpy` of a literal or a packed-record assignment for
    `__ARM_common_memcpy4_N`. The exceptions are helpers b1454 never emits from C, `__aeabi_memset4`
    for a word-aligned fill and `ll_sdiv` for a 64-bit division, which callers name directly.
- **The original was built with armcc `--multifile`.** A caller knew which registers its callees
  really clobber: retail keeps a value in a caller-saved register (`r1`-`r3`, `ip`) across a `bl`,
  or pushes fewer registers than a unit compiled alone does, yet the callees stay out of line. A
  unit can name those callees in a `multifile` list in `config/project.json`; `build.py` and
  `fdiff` then compile it in one `--multifile --no_autoinline` run with the callees' unit sources
  and keep only the unit's function. Same evidence rule as `cflags`, and the callees' own sources
  must clobber what retail's do (matched callees are best).
- **The compiler is armcc 4.1 b1454 throughout** (`config/toolchain.json`). Builds up to b713
  never fuse a halfword multiply-add into `smlabb` and write a `vdiv`/`vcvt` result over one of its
  operands; retail does neither, and b791 and later reproduce both. When the project switched from
  b713, b1454 matched more of both games; the functions it lost were b713 register tie-breaks. Fix the
  source; don't change the compiler per unit.
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

## Matching techniques

Source shapes that fixed near misses after plain rewording failed. Try them before calling a
difference a register tie-break.

**Start from a look-alike.** `python -B tools/similar.py` lists, for every unproven function, the
proven functions (either game) whose retail code is most similar; a score of 1.00 is the same
instruction sequence. Copy that source's shape (types, helpers, statement order, declarations) with
the target's own callees, globals and constants. This is the most productive method there is: a twin,
a sibling setter or another user of the same lookup is usually written the same way.

**Signatures and types**
- A value retail keeps live in `r1`/`r2` across a call is usually an argument the decompiler dropped:
  read the callers and the callee. Recover return types too (`s32` against `void`, `bool`, `u16`).
- Width and signedness: `u16`/`u8` parameters, `s8` flags, buffers sized to what is copied into them
  (`char name[0x12]`), halfword stack parameters that retail loads with `ldr` (they are `u32`), and
  `u64` parameters for values passed in `r2:r3`.
- An `s8` field at a large offset gives retail's literal base register (`add #0xF00`,
  `g_gameState+0x100`), even when a zero test makes the load itself unsigned. Check signedness before
  reshaping a layout.
- Keep packing local to genuinely unaligned members, with size and offset assertions: packing a whole
  record downgrades its aligned word accesses.
- A float-shaped stack argument does not prove a variadic callee: a one-word integer/float payload
  union has the same calling convention.
- A result reported through `FUN_002c3510` (smt4a `FUN_0013ebd8`) is an `nn::Result`
  (`nn/Result.h`): declare and return it as one. `nn::Result result;` constructs `0xE7E3FFFF`.

**64-bit flag masks**
- A flag mask is a real `u64`, tested as `if (a & mask) return 1; return 0;` (or
  `if (...) f(1); else f(0);`) for retail's `movne`/`moveq`; word pairs and `!= 0` compile differently.
- A flag `|=`/`&=` whose temporary lands in `r1`/`r2` where armcc would use `r0`, or an
  `and rX, #N; movs rY, rX` test, is a `u64` field (`BtlMainState::battleMask`/`editorMask`,
  `BtlEntry::flagMask`).
- Read the field in each test (no `u64 flags = entry->flags;` copy) and choose `(flags & mask)` or
  `(mask & flags)` per test.

**Control flow**
- `if (T *p = field)` keeps a null check armcc would otherwise merge away; `a == NULL || b == NULL`
  written as two early returns returns `r0` directly.
- A positive-first `if (x) { ...; return 1; } return 0;` stops shrink-wrapping; a wrapper that retail
  does shrink-wrap (`ldr ip, [r0, #N]; cmp ip, #0; bxeq lr` before its `push`) keeps the guarded body
  in a `static __inline` helper.
- Switch layout: an explicit `case` for the default value, `return` instead of `break` in one case,
  or indexing with the switch variable rather than literal indices moves armcc's tail merge. Keep
  explicit cases even when a case and `default` do the same thing: merging them changes the whole
  decision tree.
- Two identical branches that retail cross-jumps come from one inline helper called in both.

**Locals, constants and literal pools**
- A local pointer to a global moves its pool word earlier; a constant passed through a
  `static __inline` helper's parameter moves it later, or keeps it in a callee-saved register;
  named locals declared in retail's pool order fix the order of constants.
- Locals declared at the top of the function (C89 style), or one loop index reused by two loops,
  change their registers.
- Assigning a global and then reading it back into a local (`g = alloc(); T *p = g;`) gives retail's
  reload.
- A status local (`s32 result = 1;`) after the argument read keeps a constant shared by a shift and
  the return value in a callee-saved register.
- Conversions through `static __inline f32 get(p) { return p->field; }`; rounding as
  `f32 half = 0.5f;` declared first, then `floorf(scaled + half)`.

**Helpers**
- A stack key or temporary in scope at the end (a `bsearch` key, a copied struct) blocks retail's
  tail call or predication: move the lookup into a `static __inline` helper so its scope ends there.
- A body retail repeats in its callers (an allocator such as `effBlockCreate`, a sibling function from
  the same file) is a `static __inline` copy of that body.
- Some retail shapes need small non-inline `static` functions instead: list cursors
  (`getTop`/`getPosition`/`set`), message commands (`showMessage(mode, wait)`), table walks
  (`tableEntry(section, index)`), comparator tie-breaks (`s32 x = F(a); s32 y = F(b); return x - y;`)
  and draw bodies between a render push and pop.
- A state machine's `stepEnter(step, state)` helper that clears the counters and then stores the
  state gives retail's store order.
- A comparator over a lookup sets its `{id, 0}` keys with separate stores and calls the lookup's body
  as a `static __inline` taking the keys by reference.

**Loops and data**
- Read the bound from the structure (`i < table->count`, `index < first + count`) instead of caching
  it; a `u32` index gives retail's count-down loop; an `entry = &entries[i]` local can stop armcc
  unrolling a search.
- armcc rerolls consecutive copies from an indexed source array into a loop: name the entries as
  struct members.
- Offsets split into two adds (`add #0x400; add #0x384`) mean retail reaches a sub-struct through a
  pointer: give the sub-struct a type and go through `&work->sub`.
- Constant tables addressed from one anchor (a `sub` chain from one pool word, such as `paramsInit`
  packets) are `static const` arrays in the unit holding the image's bytes; `relink.py` places them
  and checks the bytes.
- Data another thread changes (a run flag, a polled state) is `volatile` under the rules above.
- Sleeps and timeouts take an `nn::fnd::TimeSpan` (`FromMicroSeconds`, `FromMilliSeconds`) by value,
  which rematerialises the constant at each call as retail does.

**Classes**
- A vtable whose slots 0/1 are destructors: declare a virtual destructor and write `delete`; it fixes
  the predication around the call. Not when slot 0 is an ordinary method.
- Constructor stores out of order: a base class taking the value in its constructor
  (`Base(kind) : kind(kind)`) gives retail's order; members of types with their own zeroing
  constructors give its registers.
- `new (alloc) T` with a constructor and a class `operator new` gives retail's predicated allocation.

**armcc's copy helpers** `__ARM_common_memcpy4_N` are emitted for `strcpy` of an N-byte literal into
an aligned buffer and for copies of N-byte packed records: write `strcpy` or the assignment. A caller
that retail compiled against an opaque copy (it keeps a dead store into the copied record) declares
`ARM_common_memcpy4_6_call`, an alias in `config/symbols.txt`.

## Shared declarations

### One struct per object

Every object the game reaches through a global, a getter or a table (the game state, a devil record,
a battle unit, a package entry) has exactly one declaration, in a header under `include/`, and every
unit that touches it includes that header. A unit does not define its own partial struct for a
shared object, does not cast the object to a local view, and does not redeclare its getter.

- **Where the games differ, declare each game's layout** under its own name, the smt4a one with an
  `A` suffix (`GameState` / `GameStateA`), in the same header when the two share most fields.
- **Unknown bytes stay padding** named by offset (`u8 unk024[0x8];`), so every known field sits at
  its real offset. Check the offsets of the fields you rely on with the existing compile-time
  pattern (`typedef char GameStateACheck[offsetof(GameStateA, mode) == 0x0 ? 1 : -1];`).
- **Merging views**: `python -B tools/layout.py GAME --anchor SYMBOL` lays out, with the unit's own
  compiler and flags, every struct a unit declares the object as, and lists the names each offset
  has been given; `tools/layout.py GAME FILE TYPE` shows one view. Pick the name that says what the
  field is, and the type the code needs (signedness and width change the generated loads).
- **A sub-object with its own users** (a work area, a table inside the state) is its own struct,
  embedded at its offset, not a union of every unit's guess.
- Converting a unit to the shared struct must keep it IDENTICAL (or, for a near miss, no worse).
- `python -B tools/declcheck.py [BASE]` (run by CI on every change) fails when the lines a change adds
  to a unit redeclare a function, global or struct that a shared header declares. Moving a declaration
  into a shared header never fails it; `--all` counts the older local copies still to remove.

### Contracts

These headers own a type or a calling contract for both games. Include them instead of writing a
local view or prototype, and keep the contract.

- **`shard/JobWork.h`**: the canonical `JobWork *jobGetWork(u32 job)` accessor. Pass the incoming
  handle explicitly, use `s32 (u32 job)` for process and draw updates and `void (u32 job)` for
  destruction callbacks, and keep the registrar's declarations in sync. Each job type's work area is
  its own object: declare its struct once, in the job's header, and cast to it
  (`UniteWork *work = (UniteWork *)jobGetWork(job);`) in every callback of that job. For registered
  process or draw callbacks, compare the body with its registrar and recover the callback's parameter
  and result types too.
- **`text/TextDraw.h`**: `f32 FUN_00162790(layer, color, text, x, y, z, width, height)` (smt4's
  `FUN_002be5a4`). The last three floats are depth, letter spacing and opacity and are always passed
  (a caller with fewer arguments reuses retail's `s2`-`s4` values: check them at the retail call
  site); the result is the drawn advance. Text held as bytes or `u16` is cast to `const char *`.
- **`gamedata/Table04Record.h`**: data table 4's 0x88-byte record (the search stride and the key
  buffer prove it) and `dataTable04FindById`; callers that read other fields cast the result to their
  own view. **`gamedata/SaveSlotTable.h`**: the save block's slot table returned by
  `gameGetSlotTable()` (money, party and reserve slot maps, player and 0x134-byte slot records).
- **`shard/W6_W6Match1_CriticalSection.h`**: the only scoped critical-section lock
  (`ScopedCriticalLock lock(section)`). Near misses holding a section in a callee-saved register
  across a body are this lock.
- **`gamedata/GameFlags.h`**: `void gameFlagSetValue(u32 id, s32 value, s32 notify)` for both games.
  Pass the third argument retail passes: normal setters notify with `1`, flag-change handlers use `0`
  to avoid redispatch. The setter returns nothing; take any later value from its actual producer, not
  from a stale `r0`.
- **`sys/ResultReport.h`** (per game): the failed-result reporter, declared variadically
  (`void FUN_002c526c(u32 result, ...)`, smt4a `FUN_002e3140`). Some sites keep the tested failure
  flag and pass it as a second argument (`bool failed = nnResultIsFailure(r); if (failed)
  report(r, failed);` gives retail's `lsrs r1, r0, #31 … blne`); others pass only the result (constant
  codes, summary-guarded `(r & 0x7e00000) != 0x600000 && nnResultIsFailure(r)`). The definition lives
  in its own file and never reads the flag.
- **`sys/HandleWait.h`** (smt4): the single-handle wait helper (`handleWait(handle, timeout)` and
  `FUN_002c40f8`); **`sys/KernelThread.h`**: the thread object; **`nn/Result.h`**: the native
  description tests (`nnResultIsNotTimeout`, a bitfield compare of the description against 0x3fe).
- **`AsdSDK/Source/Gfx/Model/AsdEnv.h`**: `legacyResourceIdRemap(const PackedResourceId *)`. Calls to
  it are the multifile case (retail pushes only `lr` around them, no alignment pad); compare the masked
  module field in place (`(r & 0x3fc00) == (0x4e << 10)`), not an extracted value.
- **`gfx/EffectEditorParameters.h`**: both games' four-argument parameter-editor contracts. Their two
  option-list pointers are real arguments (a table base kept in `r3` while `r2` addresses a later
  entry is not missed literal folding); keep both and use the integer status mask rather than
  treating values such as `0x400003` as addresses.
- **`gfx/CameraMotion.h`**: Apocalypse camera sampling and reset forwarding. Preserve the output pose
  and clip index through `controllerRefreshAtUnitScale` and pass the sampler's `f32` delta explicitly
  (unit step, 60/480-frame advance or the converted transition count). Its 0x44-byte output extends,
  rather than enlarges, the shared 0x38-byte look-at camera.
- **Sound stops**: Apocalypse's registered-handle retirement, handler finish and slot-stop functions
  take `(id, s32 frames)` and forward the fade duration through `asdSoundObjectStop`. A callee that
  leaves `r1` untouched is forwarding it, not proof that the stop takes one argument.
- **Draw-state ring**: the flush callback takes the new state (`void (*flush)(s32 state)`,
  `ring->flush(value)`); retail keeps `r0` = value live across the `blx`.
- **`addon/AocRequestMemory.h`** (per game): the deallocator an application request's `delete` calls
  (smt4a `asdOperatorDelete`, smt4 `asdMemFreeNonNull`), so `addon/AocBufferRequest.h` serves both games.
- **`shard/W6_W6Match8_UiResourceParameters.h`**: UI sprite resource packets (`UiResourceParameters`)
  and the shared `paramsInit` declaration: five `u16` byte counts followed by five resource pointers,
  in a 0x20-byte block. Pass all five pointer/count pairs, including unused `NULL, 0` pairs; do not
  redeclare the initialiser with word-sized counts or variadic arguments.
- **`battle/btlReflect.h`**: `btlQueueReflectAction`. Its actor selectors are word-sized arguments
  even though the allocator stores their low halfwords: keep the caller's explicit signed-halfword
  conversions, and fill a newly queued payload through the returned action, not the queue context.
- **`gfx/RenderStateStack.h`** and **`camp/RenderCtx.h`**: render-state caches. Use `RenderCtx` for
  IV and `RenderCtxA` for Apocalypse, with the context push/set wrappers when the state argument is
  evaluated before locating the stack. `shard/S1ListPanel.h` supplies only the derived Apocalypse
  scissor extension.
- **`script/ScriptVm.h`**: the script interpreter. `ScriptVmProcess` is the process every opcode and
  command receives (`pc`, `depth`, tags, `ScriptVmValue` stack, `commandOwner`/`commandFrame`/
  `workValues`, variable tables); `ScriptContext`/`g_scrContext` holds the binary operators' operand
  registers and `active`, the running process; plus `g_scrIntVars`/`g_scrFloatVars` and
  `scrPopInt`/`scrPopFloat`. **`script/ScriptArgs.h`** declares `scrGetCommandOwner`,
  `scrCommMessageSetMode` and `scrGetCommandFrame` (the frame counter).
- **`battle/BtlMainAccess.h`** and **`battle/btlMain.h`**: IV's battle commands take the battle block
  from `btlGetMainState()`. `BtlMainState` (0x4A58 bytes as allocated; entries are `BtlEntry` from
  `battle/BtlEntry.h`) is the only definition: add fields as views of its unions with offset
  asserts, never a per-function state or entry view.

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
- SDK result values use the one-word `nn::Result` in `nn/Result.h` when default construction
  is visible in retail: its invalid initial code is `0xE7E3FFFF`, even when the enclosing
  request constructor later assigns success. Keep integer result codes for raw ABI declarations.
- VFP loads/stores can copy integer aggregate fields without converting them. Sprite drawing
  passes the filter, placement-enable and Y-flip words together on the stack, while animation
  time and overall scale remain scalar VFP arguments; follow the downstream field tests,
  rather than inferring float parameter types from the copy instructions alone.
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
- Member signatures must account for ARM's hidden result storage. The window-status operations
  return `WindowStatusOperationResult` by value, and queue erasure returns a `SharedQueueIterator`
  with a nontrivial copy constructor; the first decompiled pointer can therefore be the output, not
  `this`. armcc only constructs a named by-value result directly in the hidden return storage (no
  stack local and block copy) when the class is non-trivial. `WindowStatusOperationResult` therefore
  has the native `(u32 status)` constructor (status, the default `WindowStatusResult`, zeroed
  reserved words, then `result = WindowStatusResult(0)`) and an empty destructor; write
  `WindowStatusOperationResult out(1);`, never an aggregate initialiser. `TableEntryRef`
  (`gamedata/TableEntryRef.h`) is a scoped item-table lookup whose destructor is a linker-NOPed
  debug hook.
- Some proven deleting wrappers and owner-destruction chains still use C declarations of destructor
  entry points: retail consumes the ABI's returned `this` directly, while a native explicit
  destructor call makes armcc save and restore the owner. Keep these documented exceptions when
  `fdiff` proves that the native call changes the retail instructions.

## Names

There are no symbols, so names are chosen. `tools/names.py` applies them everywhere at once
(symbol file, project, objdiff, sources, file names, retail target objects) and records each in
`config/name_sources.txt` as `evidence` (the binary names it: an assert path, a debug string) or
`inferred` (our description).

- Functions: the source file's module prefix plus camelCase (`taskListUpdate`, `btlStartTask`).
  Nintendo SDK functions keep their flattened names (`nn_fs_..._CloseFile`).
- Globals: `g_` plus camelCase (`g_taskLists`). Structs and typedefs: PascalCase (`TaskList`).
- Give twins the same name in both games.
- Data-table records take the name of the RomFS table file they are a row of (a `.tbb` archive holds
  several tables): `NkmBaseRecord` is a row of `battle/NKMBaseTable.tbb` table 0 (nkm = nakama: the
  game keeps demon data under `gamedata/nkm/`), `NkmEnemyRecord` of its table 1, `SkillDataRecord`
  of `battle/SkillData.tbb`, the item and equipment records of `item/ItemTable.tbb` tables 1 and 2,
  `QuestRecord` of `event/quest/QuestData.tbb`. Match a struct to its file by the row width and the
  key field's offset, and cite the file in the header comment.
- Rename only through `tools/names.py`; renaming by hand breaks the retail target objects.

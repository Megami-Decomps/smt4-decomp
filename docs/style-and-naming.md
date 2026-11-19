# Style and naming

What a finished function looks like once it matches: the shared declarations it uses, the
readability standard, the consistency rules, C++ classes and names. The reference for a finished
file is [`sys/Task/Task`](../smt4/src/_code/sys/Task/Task/) with
[`include/sys/Task.h`](../include/sys/Task.h); four of its five functions are matched and readable
in both games (`taskCreate` is still `NON_MATCHING`).

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
- Converting a unit to the shared struct must keep it IDENTICAL (or, for a near miss, no worse);
  `tools/usercheck.py` checks that for every unit the change reaches.
- `python -B tools/declcheck.py [BASE]` (run by CI on every change) fails when the lines a change adds
  to a unit redeclare a function, global or struct that a shared header declares. Moving a declaration
  into a shared header never fails it; `--all` counts the older local copies still to remove, and CI's
  `--all --ratchet` fails when that count rises above `config/declcheck_ceiling.txt` (`--lower` records
  a fall: commit it). A local declaration kept on purpose, because the shared one's types change this
  caller's code, carries `// declcheck: local (reason)` on its line. It also lists, without failing,
  each `static` helper a change adds that its unit calls once: give the evidence the
  [helper rule](CONTRIBUTING.md#what-a-source-may-contain) asks for, or write the body in place.

### Contracts

These headers own a type or a calling contract for both games. Include them instead of writing a
local view or prototype, and keep the contract.

- **`shard/JobWork.h`**: the canonical `JobWork *jobGetWork(u32 job)` accessor. Pass the incoming
  handle explicitly, use `s32 (u32 job)` for process and draw updates and `void (u32 job)` for
  destruction callbacks, and keep the registrar's declarations in sync. Each job type's work area is
  its own object: declare its struct once, in the job's header, and cast to it
  (`UniteWork *work = (UniteWork *)jobGetWork(job);`) in every callback of that job. For registered
  process or draw callbacks, recover the parameter and result types from the registrar
  ([Near misses](CONTRIBUTING.md#near-misses)).
- **`text/TextDraw.h`**: `f32 textDrawString(x, y, z, layer, width, color, height, text)` (r0-r2 hold
  layer, color, text; s0-s4 x, y, z, width, height). z, width and height are depth, letter spacing
  and opacity and are always passed (a caller with fewer arguments reuses retail's `s2`-`s4` values: check them at the retail call
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

## Consistency rules

Each rule below takes the form most of the proven, readable sources already use (a survey of the
about 6,200 such files and of `include/` at `abab670c2`); the one exception, named constants, says
why. Where a spelling can change the generated code, the rule says so; otherwise the choice is for
the reader. Bring what you write or touch to these forms; don't rewrite a file only to change its
spelling.

### Casts

- Write C-style casts: `(UniteWork *)jobGetWork(job)`, `(const char *)text`, `(s32)value`. The
  readable sources hold about 640 C-style pointer casts against 510 `reinterpret_cast` and about 760
  C-style value casts against 340 `static_cast`, and the contracts and the cookbook use the C-style
  form. Existing named casts can stay until their file is edited.
- The spelling never changes the code; the conversion does. `(s16)x` sign-extends, and a C-style
  cast between a class and its base is a `static_cast` that adjusts the pointer for a non-primary
  base where a `reinterpret_cast` would not. Write the conversion retail performs.

### Inline helpers

- Write `static __inline` for an inline helper, in a unit or in a header (`taskGetList` in
  `include/sys/Task.h`): about 260 uses in the readable sources and 180 in `include/`, against about
  50 of each for `static inline`. In C++ armcc compiles the two alike, so existing `static inline`
  helpers can stay. Whether a helper is inline at all is not a spelling: a plain `static` function
  and a `static __inline` one can schedule differently
  ([Helpers](matching-guide.md#helpers)), and every helper needs the
  [evidence](CONTRIBUTING.md#what-a-source-may-contain) the rules ask for.

### Comments

- Write block comments, `/* ... */` (about 14,600 in the readable sources against 1,900 `//`).
- A function's summary is one comment directly above its definition, saying what it does, starting
  with a verb: `/* Removes a task from its list. */`. A longer one continues on lines starting ` * `
  and closes on its last line (`taskListUpdate` in `smt4/src/_code/sys/Task/Task/`). About 3,400
  summaries in the readable sources take this form, against 590 `//` ones.
- A struct field's offset goes before it, its meaning after it, as in `include/sys/Task.h`:
  `/* 0x02 */ u8 killDelay;    /* 0 = alive, else frames left before the task is freed */`
  (about 18,800 leading offset comments in `include/`, against 1,500 trailing `// 0x..` ones).
- A unit's `extern "C"` block closes with `} /* extern "C" */`.
- `//` stays only where a tool reads it: `// declcheck: local (reason)`
  ([One struct per object](#one-struct-per-object)).

### Constants and enums

- Give a state, mode, id or flag bit whose meaning is known a name; a number whose meaning is not
  known stays a literal, with what is known in a comment, as an unknown field stays `unkXX`.
- New named constants are enumerators: an anonymous `enum { ... };` in the header that owns the
  values (`PARTY_PANEL_SPRITE_PAGE` in `include/ui/PartyPanelParts.h`, `MOVED_PART_DIRTY` in
  `include/shard/S1Mover.h`), or a named enum when the name documents what a field holds
  (`ScriptVmTag`, `ScriptSectionType`). `include/` still holds more `#define` constants (about 170)
  than enums (about 15); enumerators are chosen because they have a type and a scope, and they cost
  nothing in code (below). An existing `#define` group stays as it is, and a value added to it takes
  its form.
- Fields, parameters and locals keep their real width (`u8`, `s16`, `s32`) and name the enum in a
  comment: `/* 0x00 */ u32 type; /* ScriptSectionType */` (`include/script/scrScriptProcess.h`),
  `u8 tags[0x1c]; /* ScriptVmTag of each stack value */` (`include/script/ScriptVm.h`). armcc, as
  this project runs it (no `--enum_is_int`), gives an enum type the smallest integer type that holds
  its values: `enum { A, B, C }` is one byte, one with a value of 300 two bytes. A field, parameter or
  local declared with the enum type changes the layout, the loads and the stores.
- Don't put a negative enumerator and one above `0x7fffffff` in the same enum: armcc then makes the
  enum 8 bytes, and its enumerators turn the expressions they appear in into 64-bit arithmetic. Put
  a mask such as `0x80000000` in an enum of its own. Separated that way, enumerators compiled to the
  same instructions as the same `#define`s in a b1454 test (compares, `u8` and `s16` stores, a mask
  test, a ternary argument).

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

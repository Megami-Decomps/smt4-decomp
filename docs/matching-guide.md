# Matching guide

How to turn a near miss into a match. Everything here works inside the
[matching rules](CONTRIBUTING.md#matching-rules): a shape below is worth trying because the original
programmer could have written it, and a match it gives still has to be one the rules allow.

## Reading a diff

`python -B tools/fdiff.py <game> <function>` compiles the function's unit with the game's own
`build.py` command (its `cflags`, `multifile` partners, carving and armlink's NOPs and inlined calls)
and diffs its disassembly and relocations against the retail target object. Its score is the number
of `-`/`+` lines; 0 prints `IDENTICAL`. `--no-build` diffs the object already built.

`python -B tools/triage.py` (after a full build and `relink.py --matched`) runs `fdiff` on every
unproven first-party function and writes `build/triage.tsv`, one row each with the kind of diff:
`identical` (something outside the source keeps it unproven: read relink's reason, see
[Troubleshooting](troubleshooting.md#objdiff-fdiff-and-relink-disagree)), `registers` (only register
names differ: allocation), `operands` (offsets, constants or branch targets), `order` (the same
instructions in another order: scheduling), `shape` (rows added or removed), `empty` (no code
written yet) and `error` (the source did not compile).

### Trying variants

`python -B tools/trial.py <game> <function> variants.py` (a `variants(src)` generator of
`(label, text)` sources, or a directory of `.cpp` files) compiles each from a temporary copy with the
unit's own command, in parallel, and lists them by fdiff's score (`-`/`+` lines; 0 is `IDENTICAL`)
next to the current source; `--show K` prints the best diffs and `--keep` writes the best one only if
it beats the current source. `--keep` never adds or removes a `NON_MATCHING` comment.

```python
# variants.py: each variant is a whole source for the unit; src is the current one
def variants(src):
    yield "ternary", src.replace("if (count > 300) count = 300;", "count = count > 300 ? 300 : count;")
    yield "u32 index", src.replace("s32 i;", "u32 i;")
```

What a grid may hold is a rule: see [the loop](CONTRIBUTING.md#the-loop), step 2.

### Large functions

On large functions add `--shape` (to `fdiff.py` or `trial.py`): it also scores the diff with branch
targets and pc-relative offsets blanked and pool words compared as a set, so one real change no
longer counts as every row it shifts (qcBoardStep: 206 raw, 56 shape). Rank variants by it; a match
is still IDENTICAL by the raw diff, and `trial.py --keep` still requires a strictly better raw score.
With the shifts blanked, every block that still differs is a real difference: work through them from
the top.

## Start from a look-alike

`python -B tools/similar.py` lists, for every unproven function, the proven functions (either game)
whose retail code is most similar; a score of 1.00 is the same instruction sequence. Copy that
source's shape (types, helpers, statement order, declarations) with the target's own callees,
globals and constants. This is the most productive method there is: a twin, a sibling setter or
another user of the same lookup is usually written the same way.

## Cookbook: armcc 4.1 b1454

Source shapes that fixed near misses after plain rewording failed. Try them before calling a
difference a register tie-break.

### Signatures and types

- A value retail keeps live in `r1`/`r2` across a call is usually an argument the decompiler dropped:
  read the callers and the callee. Recover return types too (`s32` against `void`, `bool`, `u16`).
- A flag word retail loads into `r1` and tests before a call (`ldr r1, [obj, #N]; cmp r1, #0; … bl f`) where the
  build tests it in another register is often the callee's second argument: the dirty mask `FUN_00347198(mesh, mask)`
  reads (smt4 `gfx/DynamicMesh.h`). Take the prototype from the callee's body and pass the tested value,
  `if (u32 dirtyMask = packet->pending) FUN_00347198(mesh, dirtyMask);` (wave 55: smt4 `FUN_00256a50` IDENTICAL,
  `tiledMeshDraw` 63 → 4).
- Width and signedness: `u16`/`u8` parameters, `s8` flags, buffers sized to what is copied into them
  (`char name[0x12]`), halfword stack parameters that retail loads with `ldr` (they are `u32`), and
  `u64` parameters for values passed in `r2:r3`.
- An `s8` field at a large offset gives retail's literal base register (`add #0xF00`,
  `g_gameState+0x100`), even when a zero test makes the load itself unsigned. Check signedness before
  reshaping a layout. It holds for a small struct inside an array too: an `s8 active` byte in
  `AsdSndSlotC` made retail's split base (`add r0, r1, #1536` then `[r0, #130]`/`[r0, #146]`, smt4
  `FUN_0010d3f8`), where a `u8` addresses each slot from the sound base.
- A flag read with `ldrb` through a split large-offset base and tested against 0 is `s8`: `ButtonHelpWork::drawEnabled`
  and `ButtonHelpText::highlightLine` (retail's work+0x400 and +0x500 bases) made smt4 `FUN_002109cc` IDENTICAL (wave 71).
- So is one read through a pool-loaded offset (`ldr r0, =0x1168; ldrb r0, [r0, r4]`), where a `u8` gives
  `add r5, r4, #0x1000; ldrb r0, [r5, #360]`: smt4a `FUN_004b82a0`'s `returnToMap` (47 against 88 lines), and the
  same `s8` made its IV twin `FUN_003b92b4` IDENTICAL (63 lines as `u8`; wave 66).
- Two byte fields of an array element that retail reads through one shared base register (`active`, then `pass`)
  are both `s8`; index the element at each use (`scene->numbers[slot].active`) rather than caching a pointer
  (smt4 `btlDrawFloatingNumbers`, wave 64).
- A one-shot skip flag in a global that retail tests and clears through two loads of the global's address (`ldr r0, =g;
  ldrb r0, [r0, #N]; ldr r5, =g` before the `push` returns, where the build loads the address once or copies it with
  `add r5, r0, #0`) is `s8` too: `GameStateMapBlock::skipReturnSnapshot` (smt4) and `GameStateA::skipTransitionSnapshot`
  (smt4a) made the eight return-snapshot functions IDENTICAL with the global written directly (wave 53).
- A starter that stores its index into an `s16` field and then indexes a table takes the index as `s16` and indexes
  by the field it just stored (`sprite->scaleKey = key; … value = &sprite->scaleKeys[sprite->scaleKey];`): retail
  multiplies in place and does not save `r4` (the UiSpriteState key starters `uiSpriteSetKeyframe`,
  `uiSpriteSetImageKeyframe` and the scale-key starter in both games, `ui/UiSpriteApi.h`).
- A byte flag whose `== 0` test retail keeps as its own `ldrb; cmp; bne` block, where the build predicates
  it (`ldrbeq; cmpeq`), is `s8`, at a direct offset too (`boardState.fullNoticePlayed`, qcBoardStep); `u8`,
  `bool` and wider types all predicate.
- A caller that sign-extends a value it passes (`sxth`) usually means the field it came from is
  `s16`; change the field and the prototypes together.
- A bitfield read as `ldrd …; lsl #15; orr …, lsr #17` belongs to a `u64`-based bitfield struct.
- Test such a field as a plain condition, `if (pair.resultId)`: retail's single masked word test. `!= 0` reads the
  whole 64-bit field (`ldrd`, then shifts; 92 and 44 lines off in smt4 `FUN_00257a50` and smt4a
  `uniteBuildResultUnitRecord`, both IDENTICAL with the plain test, wave 67). No `(bool)` cast is needed.
- A pre-indexed load with writeback followed by its neighbour (`ldr rA, [rB, #N]!; ldr rC, [rB, #4]`) is
  an 8-byte struct copied by value into a local (`ModelCommandList list = source->commandList;`, smt4a
  `FUN_00157c3c`); two field reads compile to two plain offsets.
- A clock or calendar call that fills a caller's 8-byte value returns it by value: write
  `DateTimeValue now = clockGetTicksAsMicroseconds(); header->timestamp = FUN_002ad66c(&now);`
  (smt4 `FUN_001db90c`, smt4a `FUN_00280bd0`). The ABI is the same hidden result pointer, but the
  output-pointer form allocates and copies the stack slots differently.
- When a call's only difference is the order its vector arguments load in (retail loads the second
  first), the callee probably takes the vector by value: declare it so in the shared header
  (`distSpatial(MapVector, MapVector)`; three by-value floats and six separate floats use the same
  registers, so the definition alone cannot tell).
- Two words cleared by one `stm` of two zero registers (`mov r2, r1; stm r0, {r1, r2}`) are one 64-bit field
  (armcc's 64-bit zero store). Where the record puts it at a 4-aligned offset, declare it `__packed u64` in the
  struct, never a cast at the use (`SaveLoadTransitionValues::values`: smt4a `spriteListMenuResetSprites`,
  `saveLoadUiRestartSpritesAndWait`, `saveLoadUiRestartSlotSpritesAndWait`).
- One zero register stored twice (`mov r2, #0; str r2, [r0, #n]; str r2, [r0, #n+4]`) where the build uses `r1` is
  the same 64-bit field on an object that can only be 4-aligned: declare it `__packed u64` once the alignment is
  shown, not assumed (a 0x3c-byte array element, or an element at an address that is 4 mod 8). smt4
  `frameHeapInitializeRange` and smt4a's twin (0x3c-byte elements) and smt4 `FUN_003494f0` (elements at
  0x4e25dc); a natural `s64` there compiles to one `stm`. Where the object is 8-aligned the field cannot be packed:
  look for another cause (smt4 `FUN_00361934`).
- A mask clear retail splits around other stores (`bic #4`, the phase and timer stores, then `bic #56`, in retail's
  inlined copy of smt4 `FUN_003bbfdc`) is single-bit fields cleared one at a time, in the order the sibling initializer
  sets them (`PackedRenderState::modeFields`): smt4 `FUN_003bbfdc`, `spriteDescriptorInitFromTemplate` and smt4a
  `FUN_004bb9c0` are IDENTICAL with it (wave 87). Clearing bits in an order chosen by score alone stays steering.
- Keep packing local to genuinely unaligned members, with size and offset assertions: packing a whole
  record downgrades its aligned word accesses.
- The same holds for an outer `__packed` on a naturally aligned record that only embeds packed groups: removing it
  (the halfword groups stay packed, offsets asserted) made smt4 `btlBuildDemonSnapshot` IDENTICAL (wave 77).
- A float-shaped stack argument does not prove a variadic callee: a one-word integer/float payload
  union has the same calling convention.
- A result reported through `FUN_002c3510` (smt4a `FUN_0013ebd8`) is an `nn::Result`
  (`nn/Result.h`): declare and return it as one. `nn::Result result;` constructs `0xE7E3FFFF`.
- An SDK service wrapper that returns a failure result or 0 (often from under a `ScopedCriticalLock`)
  returns `nn::Result`, not `s32`: with `s32` armcc gives the result and the reference-count pointer
  other registers (smt4 `FUN_0011c834`, smt4a `FUN_0015997c`, smt4 `FUN_00146704`). Only where every
  caller treats the value as a result (sign test, forwarding); keep `s32`/`bool` for 0/1 answers.
- Under `--fpmode=fast`, a float compared against a positive constant compiles to an integer compare of the bit
  patterns (`vmov r1, s0; cmp r1, r2` against the constant's word): write the plain float test
  (`if (phase >= 30.0f)`), not a union or cast that recreates the bits (smt4a `FUN_00357ea0`, wave 59).
- Retail's VFP compares (`vcmpe`) of a float against constant limits, where the plain test gives integer compares,
  come from the limits passed through a small compare helper: `btlIsBelow`/`btlIsAbove` (`battle/BtlSideLimits.h`)
  serve smt4a `btlApplyDirectionBucket` (IDENTICAL; 44 lines off with `<`/`>` in place) and both games' effect-set
  starters (wave 72).
- Test a returned `nn::Result` from a local: `nn::Result result = f(&out); if (nnResultIsSuccess(result))`
  gives retail's `and #0x80000000; cmp; bge`, passing the call straight in gives `asr; adds` (wave 52:
  `runtimeInitializeSharedHandle`, both games).
- A wrapper that returns the SDK call's result unchanged after testing it keeps the result in `r0` and tests the
  error bit in a scratch register (`and r1, r0, #0x80000000; cmp r1, #0; movge …; strbge …`): write the result into
  a local, test it and return the local, `s32 result = dspComponentLoad(…); if (nnResultIsSuccess(result))
  state.started = 1; return result;` (wave 56: smt4a `FUN_00159030`, whose inlined loader is IV's
  `dspComponentLoadEmbedded`).
- A registered callback that casts its base parameter to a derived view (`Work *work = (Work *)base;`)
  and then mixes both pointers compiles to other alias and cross-jump decisions than one that declares
  the parameter as the derived struct (`struct ContentDepartureWork : ContentTransition { ... };`,
  `void f(ContentDepartureWork *work)`): smt4 `contentTransitionProcessDeparture`, smt4a `FUN_004b9410`.
- A by-value result passed straight into a callee taking `const T &` makes armcc copy the temporary into a second
  stack slot: retail's larger frame (and a `vldmia`/`vstmia` copy) means the callee takes a reference and the caller
  writes `f(owner, archive, lookup(&ref))`, not a named local passed by address (`Obj4221fc::vfunc0c`,
  `Obj422260::vfunc0c`, both games; `classes/WindowStatus.h`).
- Settle a parameter's type from its callers as well as its definition: an argument every caller passes unnarrowed (no
  `and #255`, no `uxth`) is word-sized even when the callee only stores its low byte, and one they sign-extend is `s16`
  (with the field it is stored into `s16` too). btlHelp's creator smt4a `FUN_00200a68(u16 id, s16 message, …, u32 mode,
  …)`, one declaration in `battle/btlHelp.h`, is IDENTICAL with all eight callers (wave 74).
- The definition decides when the two disagree: every caller of `ifTouchRegionAdd` sign-extends, but the definition
  (both games) is IDENTICAL only with `u16` parameters (`s16` swaps r4/r5) and several callers lose IDENTICAL with a
  shared `s16` declaration, so the callers keep their local declarations (wave 77). Likewise a by-value
  `mathDistanceBetweenPoints(MapVector, MapVector)` in `util/MathFunctions.h` made smt4 `FUN_0039568c` worse (10 -> 22).
- A callback that seems to take three arguments can have dropped a fourth that retail keeps in r3 before the call
  through ip: `g_gfxReleaseCallback` takes the block as its fourth argument (`DriverTextureRelease`), which made
  `blockOpen` IDENTICAL in both games (wave 77).
- A flag parameter that retail tests before storing it into a byte field is `bool` (smt4a `FUN_0041dbdc`, wave 77).
- A `bool` parameter needs `bool` arguments: `renderCtxPackPassFlags(u32 value, bool enabled)`, declared once in
  `camp/RenderCtx.h`, made both `renderCtxFillDisplay`s 64 lines off until their pass flag local became `bool` (IDENTICAL
  again); a `u8`/`s32` flag passed to it costs a `!= 0` conversion (wave 87).
- A halfword field one caller loads with `ldrsh` and another with `ldrh` can be one `s16` field: the second passes it
  to a `u16` parameter. The analyze list's `BibleAnalyzeListEntry::id` (smt4a `bibleAnalyzeDrawMenu`, `ldrsh`) reaches
  `nkmBaseGetRecord`, defined with `u16`, through a `u32` declaration in `NkmBaseRecordA.h`, which costs
  `Obj55c8d0::FUN_004a4658` 2 lines until that declaration follows the definition (wave 78).
- A by-value struct of four floats travels in `s0`-`s3` in field order wherever it is listed, so building it in the
  caller does not reproduce a schedule that only an interleaved scalar order matches: `stereoCameraSetPerspective`'s
  callers stay closer with scalar arguments (wave 74).
- Parameter order is part of the signature even where the registers agree: see
  [Parameter order](#parameter-order).

- A unit that casts its parameter or global to a unit-local struct view can match once it uses the shared type's
  fields directly: smt4 `FUN_003bb1f0` (`SceneWidget`), smt4a `resultSetMode` (`ResultWorkA`) and `FUN_00387d38`
  (`StateAtF4`, the type its registrar declares) are IDENTICAL with no other change (wave 80).
- A type chosen only for the loads it gives must still say what the field holds: an `nn::fnd::TimeSpan` delay gave
  retail's two word loads in smt4a `FUN_00146808`/smt4 `FUN_0010f764`, but the field holds milliseconds (the sleeper
  multiplies it by 1000000), so the review kept `s64` and `NON_MATCHING` (wave 80).
- A "fourth float" a function reads after a three-float by-value struct can be a separate `f32` argument: smt4/smt4a
  `residentApplyFallbackValues(MapVector position, f32 angle)` forwards both to `soundListenerSetPose(const MapVector *, f32)`
  and is IDENTICAL in both games; a four-float struct made armcc reload the spilled fourth word (wave 81).
- A halfword field compared with `ldrh` but passed with `ldrsh` is a `u16` field converted with `(s16)` at the calls,
  when the callees take `s32` (the portrait functions test `id < 0`): `UniteWork`'s `portraitSelection*.loaded` made
  smt4 `FUN_0029ec94` and smt4a `FUN_00231574` IDENTICAL (wave 82). Keep such casts only where the callee is wider.
- `randRange` returns `u32` (`util/Random.h`, as the definition computes it and as unsigned float conversions use it);
  a caller that compares it signed writes `(s32)randRange(n)`, one that narrows the bound `randRange((u16)(n))`:
  with those, the header replaced about 95 local prototypes and every caller kept its score (wave 82).

### 64-bit flag masks

- A flag mask is a real `u64`, tested as `if (a & mask) return 1; return 0;` (or
  `if (...) f(1); else f(0);`) for retail's `movne`/`moveq`; word pairs and `!= 0` compile differently.
- A flag `|=`/`&=` whose temporary lands in `r1`/`r2` where armcc would use `r0`, or an
  `and rX, #N; movs rY, rX` test, is a `u64` field (`BtlMainState::battleMask`/`editorMask`,
  `BtlEntry::flagMask`).
- Read the field in each test (no `u64 flags = entry->flags;` copy). Write one operand order throughout a function:
  choosing `(flags & mask)` or `(mask & flags)` test by test from a grid of every combination is an order picked per
  site by score (smt4a `btlAiCureSkillHasTarget`: 36 lines that way, 212 with one order; the wave 84 review kept the one order).

### Control flow

- A mode of a `switch`-driven update may be its own `static s32 modeName(work)` called as
  `case N: return modeName(work);` only where retail shows the inlined body for that mode: its own
  epilogue or return copy, a copy of the parameter into another register, constants hoisted for that
  mode alone. Write complete mode bodies, name each for its mode, keep the modes without such evidence
  in place, and never pick the split by score alone (the Gauntlet app menu's modes 1-3, smt4a
  `FUN_003ce598` and smt4 `FUN_003291dc`: mode 2 starts `mov r5, r4`, modes 2 and 3 end in their own
  epilogues returning the zero register).
- `if (T *p = field)` keeps a null check armcc would otherwise merge away; `a == NULL || b == NULL`
  written as two early returns returns `r0` directly.
- A positive-first `if (x) { ...; return 1; } return 0;` stops shrink-wrapping; a wrapper that retail
  does shrink-wrap (`ldr ip, [r0, #N]; cmp ip, #0; bxeq lr` before its `push`) keeps the guarded body
  in a `static __inline` helper.
- Switch layout: an explicit `case` for the default value, `return` instead of `break` in one case,
  or indexing with the switch variable rather than literal indices moves armcc's tail merge. Keep
  explicit cases even when a case and `default` do the same thing: merging them changes the whole
  decision tree.
- A membership test written as `k == 2 || k == 3 || k == 8` on a lookup's result can be `switch (lookup(id)) { case 2:
  case 3: case 8: … }`, as a sibling already has it: the four kind-value comparators smt4 `FUN_003a0078`/`FUN_003a05e8`
  and smt4a `FUN_00493d88`/`FUN_004943bc` are IDENTICAL with it, like their sibling `FUN_003a0164` (wave 77).
- A switch case whose jump-table entry points into another case's tail is a fall-through
  (`case A: …; /* fall through */ case B:`).
- Two identical branches that retail cross-jumps come from one inline helper called in both.
- Tests of one value written as separate `if (set == 0) {…} if (set == 1) {…} if (set == 2) {…}` blocks compile to
  the same compare chain as an else-if chain, but cross-jumping keeps the first copy of the blocks' shared tail where
  the chain keeps the last: retail branching from the later blocks into the first one's tail is the sign. The text
  icon callbacks smt4 `FUN_00109b08` and smt4a `FUN_0013e38c` are IDENTICAL with separate ifs and 172 lines off as a
  chain (wave 78).
- An early-return arm whose final call retail cross-jumps into the other path's call to the same
  function (a `b` into the other arm's `bl`) is an if/else with the call in both arms, the early
  condition joined into the test: `if (stockOnly == 0 && row < 1) { …; f(unit, index, 0); } else { …;
  f(entry, index, 1); }` made smt4 `FUN_0026d3e0` and smt4a `partyPanelRefreshSelectedItemValues`
  IDENTICAL (wave 58), where `if (…) { …; f(…); return; }` followed by the tail did not.
- Not evidence (wave 84 review): a single-use `u8` copy of a loop counter that only narrows the table index
  (smt4a `copyDefaultAnimationSteps`), and one of eight identical appends spelled `candidates[0] = 0; count = 1;` while
  the other seven use `candidates[count++]` (smt4a `btlDowngradeRandomResistance`): both matched, both stay
  `NON_MATCHING`.
- A load whose value retail never uses (`ldrb r0, [r1, #43]` between the stores, nothing reads `r0`) can be the
  condition of an `if`/`else` whose two arms do the same stores: armcc merges the arms and drops the compare but
  keeps the load (`if (definition->flags != 0) { x = 25.0f; y = 25.0f; } else { x = 25.0f; y = 25.0f; }`, smt4
  `bustupTextureStart`, wave 56; the same dead read is in the Apocalypse twin). The rule: both arms hold the statements
  retail performs and the tested value is a load retail keeps; an empty arm, or a test added only to move a branch
  or a register, is steering (wave 55 rejected one).
- The same holds for an unused computation: keep it only where retail performs it (the `vcvt`/`vmul` are in its
  code). Retail loading a global's address early into a saved register is not such evidence: smt4a `FUN_00487d6c`
  matched with a draw depth it never used and retail never computes, and stays `NON_MATCHING` at 6 lines (wave 74).
- The identical-arms form holds only while the build keeps the dead load: smt4a `FUN_004b8ba0` tested a kind-2 flag in
  two identical arms, armcc dropped the test and the load, and the flag still moved the allocation (198 against 220
  lines); the wave 76 review removed it as steering.
- A field has one view per function: smt4 `FUN_00308d5c` updated `battleFlags` (32-bit) at three sites and `battleMask`
  (64-bit) at two, each chosen by score (110 lines); the review put all five on `battleMask`, the view retail's reload
  supports (225 lines).
- One view across functions too: smt4a `btlPopulateSelectedSlot` matched only through a `u64` view of the roster
  record's word at 0x58, which `FUN_004caca0` updates as the `u32` `motion.renderFlags` and does not match as a `u64`;
  the wave 83 review kept the `u32` view (8 lines). Two clears of one word that retail does as a single `bic #15`
  (`clear(work, 8); clear(work, 7);` in smt4 `FUN_00121e5c`) are one statement split to move registers, and a
  one-iteration "history shift" loop for a two-word copy needs other code that indexes the pair (smt4a
  `FUN_00284fdc`'s words are a point total and the points left): both rejected (wave 83).
- `if (a == b) { X } else { Y }` moves `X` out of line after the next unconditional branch; the `!=`
  spelling does not. `cmp; beq; cmp; beq; b` is an if/else-if chain, `cmp; beq; cmp; bne; b` a
  `switch`. Which copy of identical tail blocks survives follows `return` against `break`, and
  `if (x == 2) {...}` against `if (x != 2) break;`.
- Which copy of a shared `phase++; break;` tail survives cross-jumping is decided by block nesting:
  cases written `if (ok) { …; phase++; } break;` merge only with each other, early-exit cases
  (`if (!ok) break; …; phase++; break;`) form another group. Retail showing two surviving copies of
  the increment and a `b` into the middle of another case's tail is the sign. End every case with
  `break` (a `return` inside the switch moves the epilogue copy).
- A state handler written as `if (substate != 0) { …; return; }` followed by a shared tail can
  hoist addresses in the wrong order; `if (substate == 0) { … } else if (substate == 1) { … }`,
  reading the global's fields directly rather than through a local pointer, gave retail's.
- A constant or zero loaded into a callee-saved register at entry and stored late often means the
  same statements were written in both arms of an `if` (an early-return arm that repeats the
  function's tail); armcc cross-jumps the copies and hoists their constants.
- armcc's `nop {0}` padding between calls is a layout state: off at entry, on at a conditional-branch
  target, and a join reached by `b` inherits the jumping arm's state. Unpadded call runs after an
  if/else mean the shared operation was written in each arm (`if (a) return -f(); return -g();`), not
  after the join.
- Retail sharing one call's copies across `switch` cases, each arm ending in that call, is
  `if (a) { … } else if (b) { … } else break; call();` (shopQuantityStep's substeps 6 and 9).
- A choice between calls that retail cross-jumps (one copy of a call with its argument chosen in a chain of tests)
  is an `if / else if / else` of whole calls, written that way at every site that makes the choice, not a mode
  variable passed to one call: `if (slot == 3) gameSetStatusCameraHeightMode(1); else if (slot == 5) …(2); else …(0);`
  at all three sites made smt4a `Obj536044::FUN_00497290` and `FUN_0049bd20` IDENTICAL (wave 68).
- `cmp; mov rN, #const; rsbne; bl` is one call written in both arms with the operand negated in one:
  `if (x) f(v, 0); else f(-v, 0);` (shopQuantityStep's price change).
- `ldrlt r0, =A; ldrgt r0, =B; beq; bl f` is two calls, `if (v > e) f(B); else if (v < e) f(A);`, not
  one call with a colour variable (smt4 `FUN_00283f80`'s stat comparison).
- A default-0 id set by a run of independent `if (c == K) id = …;` (no `else`) keeps the zero live in a
  callee-saved register from its declaration (retail's `mov sl, #0` at entry, parameters spilled with
  `push {r0-r3, …}`); an `else if` chain folds the zero away (smt4 `FUN_00283f80`).
- A guarded call through a handle (`if (x->handle) call(x->handle, …)`) as an inline helper taking the
  owning struct gives unconditional argument moves and `blne`; passing the handle predicates the moves.
- A chain of tests returning constants (`if (a) return 1; … return 4;`) whose return blocks retail lays out in another
  order can be one result variable assigned in each arm and returned once (smt4 `FUN_00293ac0`).
- A comparator written with early returns (`if (order != 0) return order;`) can match where the
  nested-if form does not.
- A body wrapped in `if (f() == 0) { … }` and the same body after an early `if (f() != 0) return;` group the later
  `cmp`/`cmpne` chains differently (retail 1, 2, 2 compares per chain against the build's 2, 3): the early return made
  smt4 `FUN_0026cf4c` and smt4a `FUN_0034cda0` IDENTICAL (wave 61).
- An octant fold (atan2 into a ratio of the minor over the major axis plus a base angle) assigns the base offset
  explicitly in every arm, `offset = 0.0f;` included, and the ratio's numerator into its own variable, not an
  `f32 offset = 0.0f;` initialiser with the zero arms left out: smt4 `FUN_0024c418` and smt4a `FUN_001b640c` (wave 61).
- A compare retail performs twice, once after each of two alternative calls (`bl costA; cmp r0, r1; ble` and
  `bl costB; cmp r0, r1`), is the test written in each arm: `if (discounted) { if (costA(id) > budget) continue; }
  else { if (costB(id) > budget) continue; }`. A ternary choosing the cost, compared once, gives one compare
  (smt4 `FUN_003d06e4` IDENTICAL, wave 69).
- A function that returns its cursor parameter unchanged on one path keeps it in place with a ternary return,
  `return emitColor ? emitMasks(&state->colorState, commands, 1) : commands;`; the `if` forms move the cursor to
  another register (`gpuEmitDepthBufferCommands`, both games: 30 lines off against 124; wave 69).
- A search loop that sets `bool found = true; break;` and tests `found` afterwards is jump-threaded
  into retail's in-loop layout.
  A call retail makes once at the loop's exit but cross-jumps from two places (the hit, and running out of slots)
  is such a search too: `found = true;` with the hit's call in the loop and `if (!found) call(0);` after it made
  smt4a `FUN_00357d2c` IDENTICAL in the loop form its siblings use, where the review rejected a `for (;;)` with the
  call written in both exits (wave 86).
- In a nested search (an inner loop whose hit ends the outer one too), set the result variable before each
  `break`, break the outer loop on it and apply the default once after both: `result = level; break;` …
  `if (result != 0) break;` … `return result != 0 ? result : 1;`. smt4 `FUN_0029aef0` is IDENTICAL with it and
  39 lines off with `return level;` inside the loops (wave 63).
- A `goto` out of nested loops is not needed for a match: smt4a `FUN_002cb84c` (three nested placements, 1112 bytes)
  matched with `goto placed;` and is IDENTICAL with `bool placed = false;`, `placed = true; break;` in the inner loop and
  `if (placed) break;` after it, and with each page test as a plain `if (page == 0) { if (index < 12) … } else if …`
  (wave 87).
- A condition computed inside a guarded block and tested after the blocks join is a flag:
  `bool changed = false; if (ready && enabled) changed = memcmp(...) != 0; if (changed) { ... }`
  (smt4 `FUN_001ec6e0`). Nesting the test inside the guard gives a different branch layout.
- A flag retail tests while it is still known false (`bics` against the zeroed register, before the arms that set it)
  is a `bool` guard the source wrote anyway: `bool ready = false; … if (concerned && !ready) { … ready = true; … }
  if (ready) result = N;` made smt4 `FUN_001a9104` IDENTICAL (wave 73); without the `!ready` test it is 194 lines off.
- A branch over one `orr rX, rX, #7` (`tst; beq; orr`), where `x |= 7` gives a predicated `orrne`, is the three bits set
  by separate statements in one block (`gives |= 1; gives |= 2; gives |= 4;`): armcc decides branch against
  predication before it folds them. Only where each bit is its own fact (hp, mp and status in smt4a `FUN_00400284`,
  IDENTICAL, wave 75); one count split into increments is still steering.
- A local retail leaves unset on some path and then reads (a pointer assigned only for two values of a byte, a
  `switch` with no `default`) is undefined behaviour in the source: give it a defined value (`= NULL`, a `default:`
  case) and keep the function `NON_MATCHING` at that cost (the ComWin draws smt4 `FUN_0011a434` and smt4a
  `FUN_0015519c`, smt4 `shopDrawEquippedItemPage`, wave 75).
- A worker thread is `for (;;) { if (work->stop) break; switch (work->state) { ... } sleep(span); }`
  with each `case` advancing `state++` and falling through; the stop flag is an `s8`, and the sleep
  takes its `nn::fnd::TimeSpan` by value.
- A run of `ldr r2,[r0,#4]; stmib r0!,{r1,r2}` (or `str r2,[r0,#8]; str r1,[r0,#4]!`) is a history
  shift: `for (u32 i = N - 1; i > 0; --i) states[i] = states[i - 1]; states[0] = next;` over an array
  member, with a `u32` index (`s32` compiles differently). See `uiQuestEnterMenuState`.
- An address-taken local declared at function scope stops every tail call in the function; declared in
  the nested block that uses it, the earlier tail calls come back.
- A block scope around a local needs retail evidence besides the score: retail reusing the local's stack slot for a
  later call's outgoing stack arguments (the slot can only be shared when the local's scope excludes that call). Say so
  in a comment at the block. smt4 `FUN_00150d2c`: the wave-archive load info lives at `[sp]`, the next read's two
  stack arguments go to `[sp]` and `[sp, #4]`. Two locals overlapping in one frame area is the same evidence: smt4a
  `FUN_002a28c0` keeps its equipment profile at `sp+4`, inside the 100 bytes the later outbox card occupies (wave 74).
  A block found only by its score is steering.

- A switch case whose result variable's register retail reuses inside the case and zeroes again on the reject path
  before the shared exit (`mov r7, #0; b exit`) is a resolver inlined with the signature of the sibling cases' calls
  (`accepted = resolve(owner, a, b, out); break;`), under the mode rule above (its own return copy): smt4
  `FUN_003c9b94` and smt4a `FUN_004dc3b4` are IDENTICAL; written in place, with or without early returns, 17 lines
  (wave 80).

### Locals, constants and literal pools

- In a `switch` on a mode, a work pointer declared inside each `case` (`T *work = g_x;`) puts the
  global's pool word before the float constants the cases share; one declared at the top puts it after.
- A second pool word for the same global, loaded into another register for just a couple of calls, is an inlined
  helper with its own local pointer: armcc does not share a literal across the inline boundary. The archive check
  `asdSndSoundExists(id)` (`&g_asdSound`, then `IsAvailable` and `GetSoundType`) gave the retail literal pool of
  smt4 `asdSndPlaySlotA`, `FUN_0010ddcc` and smt4a `asdSndPlaySlotA` (wave 66; registers still differ).
- A local pointer to a global moves its pool word earlier; a constant passed through a
  `static __inline` helper's parameter moves it later, or keeps it in a callee-saved register;
  named locals declared in retail's pool order fix the order of constants.
- Chained assignment (`current[i] = maximum[i] = value;`) stores one value through both pointers the
  way retail does; separate statements reload or reorder it.
- A function that returns a moved copy of a by-value struct parameter assigns into the parameter and copies it out
  whole (`first.x = …; first.z = …; *result = first;`), not field by field into the result: smt4/smt4a
  `mapResolveCircleOverlapXZ` (wave 78).
- Reading a pointer field before a store that may alias it is a different program, not scheduling: after a store
  through another pointer (a struct copy's word stores alias anything), armcc must reload the field, so retail
  loading it before the store means the source read it first. `const Vec3f *target = key->target;` before
  `work->initialPosition = key->position;` in `moveCameraSelectKey` (`gfx/MoveCameraCtrl.h`) made smt4a
  `moveCameraCtrlSnapToNode` IDENTICAL and took `FUN_00407110` from 42 to 8 lines (wave 68). Check that the
  store can alias the field; a load moved across a store that cannot alias it is only scheduling.
- GPU command words are appended through the global cursor itself, `*g_commandBufferCursor++ = 0;
  *g_commandBufferCursor++ = 0x8025E;`, with the context's fields read through `g_asdGfxContext.cmdBuffer->` at
  each use: a cached cursor or buffer local merges the two stores into `stm` and moves the registers (wave 52:
  the pad/terminate/submit functions of both games, `asdGxCommandBufferPadAndGetRanges` and siblings).
  The same holds for a pointer held in a global: `g_lmapViewHolder.view->fieldOfView[1] = 42.0f;` written at every
  store made the camera-preset setters smt4 `FUN_002df5f8` and smt4a `FUN_00352a14` IDENTICAL (wave 63); a cached
  `LmapView *view` local is 84 lines off, a local pointer to the holder 60.
- A field set to one of two constants is an if/else of two stores (`if (delta < 0.0f) work->alpha = 0.0f; else
  work->alpha = 1.0f;`), not a ternary into the field: retail keeps each store in its arm (`eventMessUnderFadeJobStep`,
  both games; the same form moved about ten near misses).
- A clamp or two-way choice of a local written as a ternary (`count = count > 300 ? 300 : count;`,
  `checked = ok ? resource : NULL;`) and the same as an `if` assign through different registers; try
  both (about forty near misses moved). Not for globals, and an `else if` chain stays a chain: don't
  split it into an `else` holding a ternary.
- A clamp retail repeats in every `switch` arm (store, compare, store in each case) is written in each case,
  `progress->remaining = progress->remaining > 0 ? progress->remaining : 0;`, not once after the switch: the quest
  requirement resolvers smt4 `FUN_00298e40` and smt4a `FUN_003df004` are IDENTICAL with it (wave 64).
- Locals declared at the top of the function (C89 style), or one loop index reused by two loops,
  change their registers. One `s32 i;` shared by every loop of a function made smt4a `FUN_003f707c`, `FUN_004ba1f4`,
  `FUN_004f6e68` and smt4 `categoryListBuildUnique`, `campScriptCleanupRelease` IDENTICAL (wave 79). Hoist the
  function's locals together, not one group chosen by score.
- The same applies to a two-way default of a compare key: `if (entry != NULL) order = entry->id; else order = 999;`
  for both keys made the comparators smt4a `entryRefCompareByOrderDefault`, `FUN_00404f00` and `FUN_0049ebf0`
  IDENTICAL where the ternaries were 10-14 lines off (wave 79). Use one spelling for both keys.
- Assigning a global and then reading it back into a local (`g = alloc(); T *p = g;`) gives retail's
  reload ([as a sweep](#publish-first-allocation)).
- A status local (`s32 result = 1;`) after the argument read keeps a constant shared by a shift and
  the return value in a callee-saved register.
- Value-initialising a real contiguous subobject (`emitter->cycle = EmitterCycle();`) clears it with
  integer stores, float members included, where field-by-field `0.0f` stores use VFP registers.
- Reading `table->count` at each use instead of caching it in a local changes which registers the
  loop's values get; try both before calling a difference allocation.
- A local pointer to a record inside a parameter or global (`BtlCombatantEntryA *entry = &battle->entries[index];`,
  `void *list = &work->list;`, a view pointer to `g_effectEditor`) can change the allocation by itself: write the
  access at each use (`battle->entries[index].flags`, `&work->list`), as for global holders above (smt4a
  `FUN_003eb0cc` and `FUN_0034c940` IDENTICAL, `FUN_002830cc` 49 -> 6; wave 65).
- Wave 77 matched nine more this way (a cached pointer to a global, a table element or `param->state` removed):
  smt4 `mapRangeUpdateModelVisibilityAndTransforms`, `FUN_00281788` and smt4a twin `FUN_00244acc`,
  `effectColorOverrideBeginFadeToGray` (both games), smt4a `scrCommShowHowTo`, `FUN_002bd170`,
  `renderCtxSelectBlendPreset` and `streamWriterSetLengthIfFits`. A local that holds a value across calls that could
  change the global (scrCommShowHowTo's `work` for `jobStop`) stays.
- The same for a table indexed by an operand: `table[command].handler()` then `table[command].argumentCount`, not a
  cached `ScriptCommand *entry`, made the script interpreter's `scrRunCommand` IDENTICAL in both games (wave 76).
- Masks or table fields that retail reloads inside a loop, where armcc hoists them all, come back as in-loop loads
  through a local pointer to the global (`const BattleMaskPresets *masks = &g_battleMaskPresets;`): armcc then hoists
  only the unconditional first test. It moved four smt4a near misses (`FUN_003ec6d8`, `FUN_003a98c4`,
  `FUN_00272310`, `FUN_002b4dcc`, wave 61), none to IDENTICAL yet.
- A halved value retail keeps in its own register (`asr r1, r0, #1`) at two draws, where it folds the
  shift into the add elsewhere, is one variable assigned in both blocks (`s32 centre;` declared once,
  `centre = (width - textWidth) / 2;` in each), not two block-local temporaries (`uniteDrawResultPanel`).
- In a sum of two fields and a scalar (`a->x + b->x + x`) only which pointer comes first changes the
  code (which halfwords load first, which registers the sums go through); where the scalar goes does
  not. Try both pointer orders, not every permutation (`labelEntry->x + entry->x + x`, smt4
  `titleConfigDraw`).
- Write one order in the whole function: smt4 `FUN_0019715c` matched closer (77 lines) with the operand order picked
  site by site to follow retail's adds; the wave 86 review wrote `row + part + x` throughout (155 lines).
- A value retail computes ahead of a call's stack arguments, or keeps across an earlier call in place of the value it
  derives from, was its own statement before the call: `s32 offset = bar->x - damage->x;` (smt4a `FUN_003c4250`) and
  `s32 nextSlide = slide + 13;` held across the first draw (smt4a `partyPanelDrawAilmentIcon`), both IDENTICAL (wave 73).
- armcc fuses `a * b + c` written as one expression into `vmla`; retail's separate `vmul` then `vadd`
  means the product was its own statement (`f32 pulse = speed * 0.5f; efctSetSpeed(pulse + 0.5f);`,
  smt4 `FUN_001a7810`). That is instruction evidence, not allocation.
- Conversions through `static __inline f32 get(p) { return p->field; }`; rounding as
  `f32 half = 0.5f;` declared first, then `floorf(scaled + half)`.
- A multiply by 1.0 that retail performs (`vldr s16` of 1.0 at entry, then `vmul` by `s16`) is a product with a
  variable that holds 1.0: a literal `* 1.0f` folds away. `f32 scale = 1.0f; … effect * scale` made smt4a
  `skillScreenDrawCandidateListRow` IDENTICAL (wave 72; 139 lines with the literal). This is instruction evidence; a 1.0f local that
  only moves where the constant is loaded is not.
- armcc orders address-taken locals on the stack by reference weight: the most-referenced gets the
  lowest `sp` offset, ties go by declaration order, and references inside conditionals weigh less. A
  frame-layout diff (two locals swapped) points at a missing or extra reference to one of them, not at
  their declaration order (smt4 `uniteCreateSelectedResult`).
- When retail reaches a field through its own pool word even in a function that already holds the
  enclosing object's base, the field is a separate object: split the symbol (smt4's `g_mapSelection`
  at 0x49FD14 was carved out of `g_gameState`).
  smt4a's `g_eventEffect` is several EventEffect.cpp globals: every function of the file pools its base and a second
  word; sized 0x1C with `g_eventBannerTextures` at 0x57f3d0, seven of them come out IDENTICAL by `fdiff` (wave 82).
- A block retail stores as `add r0, rG, #off; vstmia r0!, {s0}; stm r0, {...}` off a global's pool word, where the build
  stores `vstr` and a separate `stm`, is another global the same file defines: the voice initialisations smt4
  `FUN_00106650` and smt4a `FUN_0013ae58` define the voice queue and `g_voiceDuckSettings` (`sound/VoiceLoadQueue.h`)
  and are IDENTICAL, placed by relink (wave 84).
- Two globals that retail reaches from one pool word plus an offset (status as `g_asdSoundDuck + 0x1c`) are
  defined in the same file: armcc folds them onto one base only for data the translation unit defines. Define them
  in the unit that owns the file's data and keep every other declaration `extern` (smt4 `asdSoundInitialize`,
  smt4a `FUN_00142b84`: IDENTICAL, placed by relink, wave 70).
- Likewise, a float constant pooled ahead of a global's address where the build pools it after can mean
  the "array member" a struct points at is a separate adjacent global: declare it as its own object and
  store `&object` into the pointer (`SoundReverbFilterSize`, smt4 `FUN_00109580`).
- When a near miss stores fields in a slightly different order, check the stored offsets against a
  matched sibling first: it may be writing the wrong field (`FUN_0035ad50`).

### Helpers

Every helper below still needs the evidence the [helper rule](CONTRIBUTING.md#what-a-source-may-contain)
asks for.

- A stack key or temporary in scope at the end (a `bsearch` key, a copied struct) blocks retail's
  tail call or predication: move the lookup into a `static __inline` helper so its scope ends there.
- A body retail repeats in its callers (an allocator such as `effBlockCreate`, a sibling function from
  the same file) is a `static __inline` copy of that body.
- A script command whose code is a matched sibling command's except that it returns the shift base kept in a saved
  register (`mov r0, r8` where the sibling has `mov r0, #1`) is `return sibling();` with the sibling's body inlined:
  smt4 `FUN_002ff500` and `FUN_002f07c8`, smt4a `FUN_003729ec` and `FUN_003a83c0` are IDENTICAL with a `static __inline`
  copy of the body. The copy cannot move into a header the sibling uses too: its out-of-line body then returns the
  saved register as well and stops matching (wave 84).
- The navigation screens' flag-word updates are `flagsSetBits`/`flagsClearBits` (`util/BitsAndBytes.h`; one copy
  each, `*flags |= bits` and `*flags &= ~bits`): smt4 `screenStep` is IDENTICAL with it and its twelve other users in
  both games keep their scores (wave 84).
  Wave 86 kept the helper only where both twins of a pair use it and are IDENTICAL with it (`aocLoadingTaskStart`,
  `AocMain::submitTokenRequest`, `FUN_0038b4f0`/`FUN_00473e44`, `updateContentTransitionDispatch`/`FUN_004b73e8`) and
  rejected three singles whose twin keeps the operator or gets worse with the helper. Open question, not a rule: the
  same AocMain module's `aocBoardCreateDrawJobs` is IDENTICAL with a plain `|=`.
- A value retail forms twice, once for the range tests and again for the in-range result (`sub r1, r0, #1 ...
  subge r0, r0, #1`), is a macro evaluating its argument twice: the event viewers' `EVENT_WRAP_VALUE(value, max)`
  (`event/EventScriptJob.h`) with the `u32` event id converted, `EVENT_WRAP_VALUE((s32)work->eventId - 1, 999)`, took
  smt4a `FUN_00298978` from 252 lines (an inline function) to 36 and its IV twin `FUN_001e4d70` to 14 (wave 86).
- A degree or ratio product passed to both `sinf` and `cosf` is written in each call (`sinf(ratio * 1.5707964f)`,
  `cosf(ratio * 1.5707964f)`), not as a shared `angle` local: smt4 `FUN_0026f024`/smt4a `FUN_0039a2d8`,
  `effectSpawnAheadOfScene` and smt4a `FUN_003135bc` are IDENTICAL with it (wave 84).
- IV's shop list states inline the helpers Apocalypse's shop has as members (`Obj536044::selectedItem`, `canBuyItem`,
  `canSellItem`): `shopSelectedItem` and `shopCanBuyItem` in `shop/ShopScreen.h`, written as the members are, made smt4
  `shopDrawSelectedItem`, `FUN_003a18a0`, `FUN_003a3a9c` and `FUN_003a3c7c` IDENTICAL as ports of their twins (wave 75).
- A `__FILE__` trace naming `./effMisc.h` at line 450 (`asdDebugTrace(DAT_004102f4, 450)`: each unit has its own
  copy of the header's `__FILE__` string) followed by `memAlloc` and `rt_memclr` of the same size, with the size kept
  in a saved register (`mov sl, #168`), is effMisc.h's cleared-allocation inline: write it as a
  `static __inline void *effAllocCleared(u32 size)` (smt4 `FUN_003138a4` and smt4a `FUN_003aa6c0`, wave 56;
  `effEmitterCreateSmall` has the same body).
- Some retail shapes need small non-inline `static` functions instead: list cursors
  (`getTop`/`getPosition`/`set`), message commands (`showMessage(mode, wait)`), table walks
  (`tableEntry(section, index)`), comparator tie-breaks (`s32 x = F(a); s32 y = F(b); return x - y;`)
  and draw bodies between a render push and pop.
- A plain `static` function that armcc inlines on its own and the same body marked `static __inline`
  do not always schedule alike: once a helper has evidence, try both (the basename helper of
  `FUN_003dbb40`, the same expression as in `FUN_003dadd8` and `FUN_003dba3c`; the map-camera accessor
  of smt4a `FUN_002442ac`, read twice around a call).
- When a plain `static` helper is inlined depends on how many calls the translation unit holds: with one call armcc
  inlines it early (its constants share the caller's hoisted registers), with several it inlines late (each site
  materialises its own). smt4a `FUN_002007f4` (one call of `playLogSetState`) is 30 lines off alone and IDENTICAL
  compiled in one file with `FUN_0021545c` (five more calls; wave 68). A `multifile` entry cannot express this
  (`--no_autoinline` keeps the helper out of line), and a unit must not add calls to emulate it: such pairs are
  one [translation unit](project.md#translation-units), both units built from one source file
  (`camp/PlayLog/PlayLog/PlayLog.cpp` holds the play-log pair).
- A function retail inlines whole into another, variadic block included (`str r2, [sp]; add r3, sp, #4` of its
  `va_start` inside the caller), was in the same file: smt4a `numberFontDrawFormatted` and `numberFontMeasureFormatted` are
  one translation unit (`0018/NumberFont.cpp`), both IDENTICAL with the real function called, instead of a static copy
  of its body (wave 72). So are smt4a `FUN_002bf520` and `FUN_002bf534` (`camp/CampCec/CampCec/CampCec.cpp`: adjacent,
  the assert names CampCec.cpp, the getter inlined late at every use; wave 74).
- A value retail computes twice where one statement sequence would share it (`asr r4, r7, #3`, the byte index, again
  after the first of two bit sets) marks an inline boundary: armcc does not share it across two inlined helpers.
  The save's unlock-bit setters `unlockBitSetEarned`/`unlockBitSetPending` (`shard/ProgressUnlock.h`, beside the
  shared test) made smt4a `progressConditionsUpdateUnlocks` IDENTICAL; in place it is 13 lines off (wave 72).
- A draw block whose by-value parameters retail copies again (a flag moved from a saved register into its own
  stack slot, a float copied into `s1` before each product: `vmov.f32 s1, s16; vmul.f32 s0, s0, s1`) is a plain
  `static` helper inlined late: smt4a `contentListDrawRows`' cursor frame, `drawFocusFrame(screen, x, y, alpha,
  pressed)`, is 60 lines off with it and 114 in place (wave 69; still `NON_MATCHING`).
- Retail copying fields one `ldr`/`str` pair at a time where the build batches the same copies through VFP
  registers (`vldr`/`vstr` runs) is a plain `static` helper armcc inlined late, called once per copy: smt4
  `FUN_001569d8` and its smt4a twin `FUN_004491fc` (15 calls of `resetCursorRewind`, `current = begin`) are
  IDENTICAL with it and 60 lines off with the same body as `static __inline` (wave 58). A plain `static`
  search helper also gave retail's pair-unrolled loop in smt4 `FUN_0024d434`/`FUN_0023cd08`.
  The same holds for real builder functions a caller inlined: plain `static` copies of the reflect-queue builders'
  bodies (`btlReflectCreateKind21`/`22`/`24`, Apocalypse's `2b`/`2c`/`2e`, in `battle/btlReflect.h`) called with the
  caller's arguments made seven queue functions IDENTICAL (smt4 `FUN_00246454`, `FUN_003de60c`, `FUN_003de9e4`,
  `FUN_0023c368`; smt4a `FUN_004fe618`, `FUN_004fe900`, `FUN_004fcde0`, wave 62). Keep each copy's body equal to
  its out-of-line function; the inlined copies show the source's store order where the out-of-line code does not.
- smt4a `screenBuildItemDescriptionMessage` (2048 bytes) is IDENTICAL with its signed full-width number formatting
  (`±０`/`＋n`/`－n`, its own number buffer; IV's twin does the same with the same formats) as a plain `static` helper
  called once, 165 lines off with the same body `static __inline` and 84-157 written in the loop (wave 85).
- A constant table id that retail moves into a callee-saved register once and copies into `r0` before each lookup
  (`mov r4, #28` … `mov r0, r4; bl asdTMTexTableEntryAt`, where an inline literal is `mov r0, #28` at each call) is
  the parameter of an inline helper called once per lookup: `asdTMTexTableEntryRect(file, index, &x, &y, &w, &h)`
  (`AsdTMTexTable.h`, the inlined form of `rectRecRead`'s signature, three calls per function) made smt4
  `FUN_0039f874` and smt4a `FUN_00492e20` IDENTICAL (wave 65). The helper still needs its own evidence.
- A bounds-checked row getter (`if (i >= count) return NULL; return base + i * size;`) as a
  `static __inline` gives retail's `movcs r0, rN; bcs`.
- Two calls that fill a zeroed out-parameter, one scheduled `strh zero; ldr arg` and the other `ldr arg; strh zero`
  in the same function, are an open-coded call and a `static __inline` helper returning the value (its argument is
  evaluated before its body): `cureMask(event)` in smt4 `itemEffectCheckApplicable` (wave 64). Use the helper only
  where retail shows the second order.
- A state machine's `stepEnter(step, state)` helper that clears the counters and then stores the
  state gives retail's store order.
- `mov rN, #state; mov rM, #0; strd rN, rM, [rX, #off]` is a two-word state/phase record assigned
  whole: the record is a struct and a `static __inline` maker returns it (`ContentTransitionStep
  contentTransitionStep(state, phase)` in `shard/W6_W6Match6_ContentTransition.h`;
  `BtlUiPanelTimerA panelStartState(state)` with `{frame 0, state}` in `battle/btlUI.h`).
  `step = contentTransitionStep(2, 0);` keeps the `strd`, two field stores do not.
- nn::math's table trig (`SinFIdx`, `CosFIdx`, `SinCosFIdx`) is written as the SDK has it: `fabsf`, a plain
  `while (x >= 65536.0f) x -= 65536.0f;` wrap, `u16 index = nn::math::F32ToU16(x)`, the fraction through
  `nn::math::U16ToF32(index)`, then `index &= 0xff` and the table indexed at each use, the sign applied with a ternary
  (`nn/math/MathArithmetic.h`). smt4 `phaseCosInterpolate`, `mathSinFixedAngle`, `mathSinCos` and smt4a
  `phaseCosine`, `FUN_001a1ee0` are IDENTICAL with it; plain casts in place schedule differently (wave 79).
- nn::math's header inlines are helpers with evidence: `MTX44PerspectivePivotDeg` (`MTX44Perspective` of the angle
  in radians, then `MTX44PivotC`) written as a `static __inline` at both call sites gave retail's projection code in
  `stereoCameraSetPerspective` (both games), and `MTX44Transpose` returns its destination.
- A glyph lookup over a font's code maps (direct, table and binary-searched scan maps, `0xffff` falling back to the
  font's alternate glyph) is nw::font's `ResFontBase::GetGlyphIndex` → `FindGlyphIndex(c)` → `FindGlyphIndex(map, c)`
  chain inlined: write the three as `static __inline` helpers in the library's form (`text/TextFont.h`; the scan as
  `if (md->code < c) … else if (c < md->code) … else { index = md->glyphIndex; break; }`). smt4 `FUN_00247fc0` and
  smt4a `FUN_002a1970` are IDENTICAL with it (wave 67).
- nn::math's `VEC4Transform` (`nw/math/VEC4.h`) is written as the SDK has it: the four row dot products into a
  temporary `VEC4`, then copied to `pOut`, which it returns (pOut may alias the input): smt4 `FUN_0026e768` and smt4a
  `FUN_0043b5b4` (wave 59).
- A direction between two points (difference, `1.0f / sqrtf` of the squared length, three products) is nn::math's
  `VEC3Sub` then `VEC3Normalize` (`nw/math/VEC3.h`) on by-value `VEC3`s: smt4 `FUN_0025247c` and smt4a `FUN_003250ac`
  are IDENTICAL with it; open-coded, the 1.0 and the root land in other VFP registers (wave 75).
- An inlined orthographic projection (zero stores early, then elements 0/3/5/7/10/11, pooled as 0.0, far, 1.0, 2.0)
  is `MTX44Ortho` in the SDK's fast C form: the three reciprocals and the six computed elements into locals first,
  then the ten constant stores, then the six computed ones, all through the SDK's two-dimensional view
  `f32 (*const m)[4] = pOut->m;` (`m[0][1] = 0.0f; …`): with flat `m[k]` stores the out-of-line copies (smt4
  `FUN_002bbf8c`, smt4a `FUN_0015a050`) stay 32/20 lines off, with the 2-D stores both are IDENTICAL (wave 58).
  smt4 `titleLogoDraw` inlines it and stays 44 lines off either way (its frame layout).
- A depth bias packed to the GPU's float24 (fraction `>> 7` in both arms, `orr` of the sign, an unpredicated
  exponent mask) is NintendoWare's float-to-24-bit conversion written as the library has it: sign, exponent and
  fraction split first, `bits24 |= sign ? 0x800000 : 0;`, the exponent rebiased (`- 127 + 63`, 0 for ±0), then
  `if (exponent < 0) { } else if (exponent > 0x7f) bits24 = 0x7f << 16; else { fraction, exponent }`. The empty
  underflow arm is the library's and changes the code (21 lines without it). `gpuEncodeDepthBias`
  (`gfx/ModelDepthBias.h`, `static __inline`) made smt4 `FUN_0034914c` IDENTICAL (wave 58).
- A thread start (`nn::os::Thread::Start`) inlined into its caller is a `static __inline` helper that
  takes the thread's bound argument by value and passes its address (`&argument`) with the argument
  descriptor, then reports a failed result (`uniteStartThread`, `campCecStartThread`,
  `stageStartThread`, `btlStartWorkerThread`; SaveLoad's `startWorkerThread`).
- A comparator over a lookup sets its `{id, 0}` keys with separate stores and calls the lookup's body
  as a `static __inline` taking the keys by reference.
- A sound stop guarded by its handle (`if (u32 handle = playback.handles[i]) stop(handle, frames);`) is
  nw::snd's `SoundHandle::Stop` header inline: as a `static __inline` it gave the spatial actor stops of both games
  (smt4 `FUN_002ebdd8`, smt4a `FUN_0036be10`, wave 57); the same test written in place differs by two lines.
- A render-stack pop whose context retail loads into a scratch register and then forms the stack's address from
  (`ldr r0, [ctx]; add r4, r0, #4096`), where `renderStackPop(g_renderCtx->stacks + K)` loads the context straight
  into the address register, is the context-level pop inlined: `renderCtxPopCounted(context, kind)` (`camp/RenderCtx.h`,
  the body of the out-of-line `renderCtxPopState`). Five near misses became IDENTICAL with it alone (smt4 `FUN_002e15f8`,
  `shopDrawQuantityPanel`; smt4a `runWinDraw`, `aocMenuDrawGuideDown`, `FUN_00359c78`), and the GuestWin draws of both
  games use it (wave 71).
- Six render states pushed on different stacks, each stack's address held in its own callee-saved register until the
  pops run in reverse order at the end of a block, are scoped guards: `RenderCtxStateScope` (`camp/RenderCtx.h`, the
  push wrapper's order in its constructor, `renderStackPopChecked` in its destructor) made the screen fills smt4
  `FUN_00343364` and smt4a `FUN_004097b4` IDENTICAL; explicit pushes and pops are 337 lines off (wave 73).
- Two spellings of the same inline that differ only in which register one value gets (the set's apply test through
  `renderStackNeedsApply` or written out) are not two original forms: choosing one per unit by score is steering, and
  wave 73 rejected a `renderStackSetChecked` variant that matched three smt4a units that way.
- A predicate two sibling functions share is a real helper: Apocalypse's message commands `FUN_002a3348` and
  `FUN_002a3470` test the same (command, 13) pairs and are IDENTICAL calling `scrIsBustupMessageCommand`
  (`script/ScriptMessageBustup.h`); each with its own inline dispatcher missed by 8 lines (wave 76).
- A conversion's width comes from where the value goes: smt4 `FUN_003ddb50` and its twin match with `(s16)(red *
  100.0f)` stored into a `u8` field, but nothing shows a halfword (retail's signed `vcvt` only shows a signed cast), so
  the review kept `(s32)` and `NON_MATCHING`. Likewise a `memset` of a one-word field of unknown type, chosen because
  the byte fill orders its store before a later load (smt4 `FUN_003c7f20`, `FUN_0021eda8`), is steering (wave 76).
- The status screen's touch-region reset (remove every region, zero the count, fill the slots with -1) is
  `statusDownClearTouchRegions` (`status/StatusDown.h`, `StatusDownA.h`): six functions per game use it and stay or
  become IDENTICAL (`statusDownRebuildTouchRegions` in both games, wave 78).
- AocMenu's step change (store the step, clear the substep, delete the window) is `aocMenuChangeStep` in
  `classes/AocMenu.h`, the helper `AocMenu::runMainProcess` uses at six sites in each game; called in place of the
  open-coded statements it made smt4a `aocMenuUpdate` IDENTICAL (wave 57).
- In AocMenu steppers, test each flag bit with its own early `break` (`if (flagBit(flags, 2)) break; if (flagBit(flags, 3))
  break;`): a combined `!a && !b` folds into one `tst` of the mask 12, which retail does not (`AocMenu::closeMenu`, both
  games, wave 60; 24 lines off with the combined test).
- A real getter written `return c ? a : b;` and `if (c) return a; return b;` compiles the same out of line, but inlined
  as a `static __inline` copy into a caller only one form may give the caller's registers: smt4 `uiBindRecordRewardText`
  is IDENTICAL with `FUN_002bcddc`'s body in the `if` form and 8 lines off with the ternary (wave 60). Try both.
- A switch case that sets several globals and then looks a value up can be another function of the file
  inlined with constant arguments: smt4a `FUN_003b5064`'s resume mode 0 is `mapPlaceSet(1, 2, 0)`'s body
  (`mapPlaceSelect` in `smt4a/include/map/MapPlaceLookup.h`), where open-coded literals miss by 27 lines.
- An accessor called in a stack-argument list is scheduled first: armcc evaluates an inlined call's body ahead of
  the other arguments, so one stack argument retail loads before all the rest is an accessor, not a field read.
  smt4a `FUN_004e76cc` passes `unitTargetHp(unit)` (three sites) among 26 arguments and retail reads it first; open-coded it is 75 lines off
  (wave 70).
- A flag retail sets to 1 and tests again at the end of a loop body (`moveq r0, #1` then a branch to the test),
  where the open-coded statements branch straight on, is the result of a plain `static` helper inlined late:
  `procUpdate` in smt4/smt4a `asdProcessUpdate` (312 → 107 lines, wave 70; one arm still branches directly). With
  a single call it still needs evidence besides the diff.

- A per-element update a comparator performs for both records in one loop is a plain `static` helper called twice:
  `keepStrongest(record, element, &affinity, &strongest)` made smt4 `dataTable08CompareStrongestAffinity` and smt4a
  `uiCompareEntryRanksDescending` IDENTICAL (46 lines in place; 8 as `static __inline`; wave 80).
- A reset both games' fusion builders perform after their sort loops is one `static __inline` body
  (`fusionResetSelection`): smt4a `fusionRaceSelectionInitialize` is IDENTICAL with it (94 lines in place) and the IV
  twin `uniteCtrlBuildRaceLists` goes from 145 to 33 lines (wave 80).
- A GPU command upload of a header pair and a matrix, written through a cursor taken by address
  (`gpuAppendVertexUniformMatrix4x4(&cursor, index, matrix)`, `gfx/VertexUniformMatrix.h` per game), gives retail's
  `strd r2, r3, [r0], #8` header store: `gpuWriteVertexUniformMatrix` (both games) and smt4a `modelUploadStereoMatrices` are IDENTICAL
  with it. The cached-command emitters' identical `strd` (smt4 `FUN_00349cdc`/`d88`/`e34`, smt4a `FUN_00419c34`/`ce0`/
  `d8c`) does not come from it (18 -> 28 lines): those keep the header written in place (wave 81).
- Not evidence for a helper (wave 81 review): a single-use per-slot `static __inline` taking a `u32` index only
  because the module's real setters take one (smt4 `screenFadeSlotsReset`), and a single-use inline whose only effect is the
  literal-pool order of an argument's address (smt4 `padUpdateHeldFrames`). Both matched and both stay `NON_MATCHING`.
- A match that needs a local left unset on some path (retail reuses a stale register for a state that sets no
  interpolation endpoints) is undefined behaviour: initialise the local and keep `NON_MATCHING` (smt4/smt4a
  `faderStepAll`, 14 -> 37/40 lines, wave 81).
- A translation unit only helps when retail keeps the callee out of line: built as one file, smt4
  `buttonHelpSetSlot` was inlined into `buttonHelpCalc` (153 retail rows against 222), although both address the
  queued arrays from one pool word; the TU was not made (wave 80).
- Data addressed from another file-defined object's literal (`sub r1, r0, #0x120` from one table to the next) is
  evidence of the file too: smt4 `FUN_00326e94` and `FUN_00327858` joined the `EffectEditor/EffectEditor.cpp` unit
  (13 -> 11 and 13 lines). Their page tables belong to a larger block of editor menu pages in `.data` (labels in
  `.rodata`, handler pointers, `g_effectEditorState` among them) that the file defines and is not written yet
  (wave 86).
- When a caller inlines a real function, its out-of-line copy should call the shared inline and stay IDENTICAL:
  `gameSetFlag1E60` (`shard/GameGlobals.h`, FUN_0029dfc0's body written flat; the comma-assigned spelling is 38 lines
  off) made smt4 `campMenuSessionReset` IDENTICAL, `questReadRuntimeFlagInline` the quest-list collectors (wave 82).
- Not evidence (wave 82 review): an inline used only by a twin pair (`partyPanelWriteVisible`; the sibling
  `FUN_00331380` got worse with it, 23 -> 30), and a second spelling of the render-stack pop with the apply test
  written out (smt4a `FUN_0041c1d4`): both out-of-line `renderCtxPopState` copies are IDENTICAL with either spelling,
  so they decide nothing, and `renderCtxPopCounted`'s 20 users lose 5 IDENTICAL with the other one.
- Two pop spellings in one function (`renderCtxPopCounted` for the inner pop, `renderStackPop` for the outer, both on
  `RENDER_STACK_A`) are the same operation chosen per site by score: rejected for smt4 `FUN_003844a0` and smt4a
  `btlGameOverDrawOverlay`/`FUN_004cf58c` (wave 83).
- nn::os's `WaitObject::WaitOne` and `Thread::Join` are per-game header inlines (`nn/os/WaitObject.h`: IV waits through
  `WaitSynchronizationN`, Apocalypse through `WaitSynchronization1`); `nn::os::ThreadJoin` made smt4 `FUN_002ecfe4`
  IDENTICAL and moved two smt4a thread teardowns from 12/14 to 2/4 lines (wave 82).

### Loops and data

- Read the bound from the structure (`i < table->count`, `index < first + count`) instead of caching
  it; a `u32` index gives retail's count-down loop; an `entry = &entries[i]` local can stop armcc
  unrolling a search.
- armcc rerolls consecutive copies from an indexed source array into a loop: name the entries as
  struct members (smt4 `FUN_003852c8`'s sixteen step-function copies from its constant table, one member per
  state, wave 67).
- A short fixed copy (`dst[i] = src[i] >> 10` for eight elements) compiles to the same unrolled instructions as a
  loop or as one statement per element, but the two forms schedule a spilled parameter's reload differently: try
  both (smt4 `btlTargetSelectSetInfoPanel` is IDENTICAL with the eight statements, 50 lines off with the loop; its
  Apocalypse twin matches either way and keeps the same form, wave 72).
- A byte copy that retail peels and unrolls by two (one copy before the loop, then pairs) is a `do { *dst++ = *src++; }
  while (--count > 0);` over an unsigned count; a `while`/`for` copy compiles to a plain loop (the nn::cx `UncompressRL`
  copies, `rleDecompress`: 101 and 133 -> 8 lines in the two games, wave 65).
- Offsets split into two adds (`add #0x400; add #0x384`) mean retail reaches a sub-struct through a
  pointer: give the sub-struct a type and go through `&work->sub`.
- Constant tables addressed from one anchor (a `sub` chain from one pool word, such as `paramsInit`
  packets) are `static const` arrays in the unit holding the image's bytes; `relink.py` places them
  and checks the bytes. An extern `DAT_` "bundle" passed in pieces to `paramsInit` is such a set of
  tables: write them typed (`UiSpritePositionKey`, `UiSpriteScalarKey`, `SpriteAnimationCommand` from
  `ui/UiSpriteState.h`), named after the unit (`sPanelPositionKeys`), and pass `sizeof` each
  (smt4a `FUN_003f84e8`, `FUN_0049d3f0`).
- A local `const` table armcc emits right after the function's `bx lr` and copies from with `add rX, pc` (no pool
  load) is the function's trailing data: `config/symbols.txt`'s size covers it, and `build.py split` then takes it
  whole into the target. smt4 `FUN_0028886c` and smt4a `FUN_00345098` (an eight-byte priority table, size 0x3c) were
  IDENTICAL in `fdiff` but 92.9% in objdiff while the target held only its first word (wave 85).
- Data another thread changes (a run flag, a polled state) is `volatile` under the
  [`volatile` rule](CONTRIBUTING.md#what-a-source-may-contain).
  `nn::os::CriticalSection::state` (`nn/os/CriticalSection.h`) is the SDK's interlocked lock counter: `volatile`, it
  keeps retail's zero store before the `Initialize` call and before the deferred constructor's other stores, which made
  five static initialisers IDENTICAL (smt4 `FUN_003ec728`, `FUN_003eb734`, `FUN_003f2028`, `FUN_003f2134`, smt4a
  `FUN_00511778`; wave 79). relink still keeps their retail bytes (their `.bss` objects cannot be placed).
  `Obj42cd08` is nn::os's `LightEvent` (its `Signal` reloads the state between two tests): `volatile s32 state` made the
  AsdFile static initialiser smt4a `FUN_0050e2e0` IDENTICAL (wave 82).
- A descending clear whose following store keeps the object in a saved register is a `u32` count-down,
  `for (u32 i = 3; i-- != 0;)`: `btlStageCreate` is IDENTICAL in both games with it (`s32 i = 2; i >= 0` stores through
  r0; wave 82).
- Sleeps and timeouts take an `nn::fnd::TimeSpan` (`FromMicroSeconds`, `FromMilliSeconds`) by value,
  which rematerialises the constant at each call as retail does.

### Classes

- A destructor slot whose whole body is `b <Base>::~Base` names the base class: smt4a `Obj55c99c` (slot 0 is a tail
  call of `Obj422540::~Obj422540`, the Apocalypse twin vtable `_ZTV9Obj422540`) derives from `Obj422540`, and its
  creator `FUN_004ad184` is IDENTICAL built through the base's constructor (wave 82).
  Not yet for its siblings `Obj55c954`/`Obj55c978` (their destructor slots tail-call `~Obj422540` as well): with the
  base, the proven creator `FUN_004acea0` loses IDENTICAL in either order of the `kind`/`size` stores (6 or 15
  lines), so `classes/AllocatedSelection.h` keeps its `AllocatedSelectionState` view (wave 86).
- A vtable whose slots 0/1 are destructors: declare a virtual destructor and write `delete`; it fixes
  the predication around the call. Not when slot 0 is an ordinary method.
- A slot-0 function whose whole body is a removed tail call is not a native destructor even when the derived class's
  deleting destructor calls it as its base's: smt4 `_ZTV9Obj422094` lists 0x381254 in slot 0 (and 0 in slot 1), and
  written as `~Obj422094()` it stores the vptr and returns `this` where retail has one NOP; the unit keeps its member
  form and name (wave 76).
- A function taking a non-trivial class by value (callers copy it to the stack and pass pointers to the copies)
  has C++ linkage: armcc 4.1 b1454 stops with an internal fault on a call to an `extern "C"` function with such a
  parameter. Declare and define it outside `extern "C"` and give it its mangled name
  (`_Z21quadSetOrderedVectors10QuadVectorS_S_S_ii` in `shard/W6_W6Match7_QuadVectors.h`; `names.py` accepts the
  rename once the unit defines the C++ function).
- Constructor stores out of order: a base class taking the value in its constructor
  (`Base(kind) : kind(kind)`) gives retail's order; members of types with their own zeroing
  constructors give its registers.
- A function whose body is a class's inline default constructor, called by one file's functions only while every other
  file expands that constructor in place, is a derived type's out-of-line constructor: `struct AocMenuRequest :
  RequestParameters { AocMenuRequest(); using RequestParameters::operator=; };` (`classes/AocMenu.h`), with
  `RequestParameters()` defined in its header, keeps the AocMenu units' calls and takes the other callers 7-63 lines
  closer (wave 87). A copy out of the derived object into the base type is member by member (a base subobject);
  retail's whole `ldm`/`stm` copies mean the copy has the derived type too (`AocMenuRequest copy = result;`).
- `new (alloc) T` with a constructor and a class `operator new` gives retail's predicated allocation.
- An unnamed `bx lr` in a gap right after a class's structors, where a function passes an object to a removed call
  (`mov r0, <object>; nop`) before each return after constructing it, is that object's empty out-of-line destructor:
  added as a unit (`units.py add`) and written `AocCatalogQuery::~AocCatalogQuery() {}`, it took both catalog jobs from
  228 to 199 lines (wave 87).
- A handler a class's function-pointer table calls on `this` is a member function: written as one on the class's
  real fields (`void Obj536044::FUN_00497290()`, `classes/Obj536044.h`) it can match where the same body over a
  unit-local struct view of the object does not: smt4a `Obj536044::FUN_00497290` was 179 lines off as a C function
  taking a `ShopScreen *` view and is IDENTICAL as a member (wave 68, with `FUN_0049bd20` and `FUN_00499fdc` written
  the same way from their drafts).
- A native initializer list (`: vtable(...), table(data), owner(unit), count(data->count)`) plus
  members whose own constructors zero them (`ModelEffectList() : count(0), items(NULL) {}`) pairs the
  stores into retail's `strd`; the same stores written in the body do not (smt4a
  `ModelUnitExtra::ModelUnitExtra`).
- A constructor whose retail stores the vptr before a cleared member, where `: member(0)` puts the clear first, is a
  member type that clears itself in its own constructor: `Obj422594State() : flags(0) {}` made both games'
  `Obj422594::Obj422594()` IDENTICAL with an empty body (`classes/Obj422594.h`, wave 85).
- A hand-rolled `begin`/`end`/`capacity` pointer triple released through `__rw::__rw_deallocate` is the
  library's `std::vector<T *>` (`<vector>`): declare the member as one and write the owner's destructor with
  iterators and an explicit `clear()` (smt4a `Obj557dcc::~Obj557dcc`, `Obj557b58::~Obj557b58`; their
  constructors and other users stay IDENTICAL).
- NintendoWare gfx's `DynamicBuilder::Create` functions keep their default resource in NW's move-only pointer
  (`ut::MovePtr` with a deleter): `{Res *res; Deleter deleter;}` whose copy constructor takes the pointer and empties
  the source and whose destructor destroys a resource still held. With it the creator is
  `Handle res(create(allocator), allocator); T *p = new (memory) T(allocator, res, owner); p->initialize(allocator);`
  with no explicit release and no NULL ternary around the placement `new` (`Obj421230ResHandle`/`Obj55b680ResHandle`,
  `include/classes/Obj421230.h`; the light and fog creators of both games, wave 56; third-party code).

More on classes, constructors and destructors is in [C++](style-and-naming.md#c).

### Library calls, strings and one-instruction functions

- **armcc's copy helpers** `__ARM_common_memcpy4_N` are emitted for `strcpy` of an N-byte literal into
  an aligned buffer and for copies of N-byte packed records: write `strcpy` or the assignment. Likewise
  `__ARM_common_memclr4_N` is armcc's call for a `memset(p, 0, N)` of a word-aligned buffer it does not clear
  inline (Apocalypse's 9-byte clear-save options, `FUN_00241058`): write the `memset`. So is
  `__ARM_common_memset4_12` for a 12-byte `memset` of any one value (smt4a 0x50d778, once called
  `fillThreeWordsWithByte`): `memset(ui->touchRegions, -1, sizeof(ui->touchRegions))` keeps
  `saveLoadUiRebuildTouchRegions` IDENTICAL (wave 69). A caller
  that retail compiled against an opaque copy (it keeps a dead store into the copied record) declares
  `ARM_common_memcpy4_6_call`, an alias in `config/symbols.txt`.
- **`__2sprintf` is armlib's `sprintf`**: armcc compiles `sprintf(buf, fmt, ...)` under `<stdio.h>` as a
  call to it, plus R_ARM_NONE references to the format's `_printf_*` features on the function's first
  instruction (`build.py` drops them: no bytes). Those keep retail's `push; vpush; sub sp` ahead of the
  argument moves. Write `sprintf` with `<stdio.h>` (cast a `u8` buffer to `char *`) when retail's
  prologue has `vpush; sub sp` right after `push`; an inlined helper containing the `sprintf` anchors
  its caller too. A function that saves no VFP registers can also show `push; ldr; sub sp`: that is
  still `<stdio.h>` `sprintf` (smt4 `FUN_00194278`; with two loads, `push; ldr; ldr; sub sp`, smt4a `FUN_004b7e20`, as its
  twin `mikadoGateStep`). Only a load between `push` and `vpush`
  (`push; ldr; vpush; sub sp`, titleConfigDraw) is a plain variadic call: call `__2sprintf` through
  `runtime/Stdio.h` there. A `sprintf` whose format armcc cannot read
  (an `extern const char DAT_x[]`) becomes `__c89sprintf`, which retail never calls: define the format
  in the unit with the bytes at that address (`static const char s_romPathFormat[] = "rom:/%s";`);
  relink places it there. When two units use the same literal (the original's one file pooled it once:
  smt4a `asdLoadFileAsyncByPath` and `asdLoadFileSync`), neither can own it, because relink places one
  object at an address: both name the image's global (`g_asdRomPathFormat`) and pass it to `__2sprintf`
  from `runtime/Stdio.h` (`AsdSDK/Source/Sys/File/AsdLoadPath.h`), keeping `<stdio.h>` `sprintf` for the
  arm whose format is a plain pointer.
  The same holds when the other user is far away in the image (no translation unit): `effMenuBrowserStep`'s prologue
  comes out right with unit-local `static const char` formats, but `formattedTextCopyLabel` names the same two words, so
  the review kept `__2sprintf` with the image's globals (wave 78).
  Check before moving a format into a unit: `rg -l -a -uuu DAT_<address> <game>/orig/target` lists the retail objects
  naming the word. Skip objects left behind by functions renamed since (smt4's `FUN_00335518.o` is today's
  `btlAiScriptLoadFile`) and words that are numbers (smt4 `FUN_001124ac`'s run 0x400400-0x400464 is plain words in
  its smt4a twin): smt4 `btlAiScriptLoadFile` owns its two AI-script formats (wave 79).
- **`__2snprintf` is armlib's `snprintf`** (smt4 0x2522f8, smt4a 0x1028b8, 0x36-byte Thumb): write
  `snprintf(buf, sizeof(buf), fmt, ...)` with `<stdio.h>`, as for `sprintf`; a local prototype of the placeholder
  leaves the prologue and argument scheduling off (smt4 `effectTextureRequestsPump`, smt4a `FUN_0036f0a0` and three
  effect texture loaders per game, wave 59).
- **`__aeabi_memcpy` is armlib's byte copy** (smt4 0x2c5df8, smt4a 0x2e5a08; once `rt_memcpy`): armcc calls it for
  `memcpy` and struct copies of unknown alignment (smt4a `FUN_00429934`'s struct return), as it calls `__aeabi_memcpy4`
  for aligned ones. **`__hardfp_fmodf` is armlib's `fmodf`** (smt4a 0x1b4030): write `fmodf(x, 65536.0f)` with
  `<math.h>`; smt4a `phaseCosine` and `phaseSine` (nn::math's wrap) stay IDENTICAL with it (wave 79).
- **`__aeabi_f2ulz` is armlib's float to `u64` conversion** (smt4 0x235804, smt4a 0x524fb4): armcc calls it for a
  `(u64)` cast of a float. Write the cast (`u64 key = (u64)(depth * 16777215.0f) & 0xFFFFFF;`), not a call through a
  placeholder prototype (the model sort-key builders smt4 `FUN_003f8608`/`FUN_003f86e4`/`FUN_003f854c` and their
  Apocalypse twins, wave 60).
- Two format strings a unit owns at adjacent addresses with word padding between them (smt4
  `asdLoadFileAsync`'s `"patch:/%s"` at 0x409800 and `"rom:/%s"` at 0x40980c) are one `static const` struct of two
  `char` arrays sized to the padding: armcc emits separate `static const char[]` objects unpadded and in reverse
  declaration order, so relink cannot place them (`fdiff` is IDENTICAL either way).
- armcc's hex escapes are greedy: `"\x82e"` is the single escape `\x82e` (one byte), not 0x82 then
  `e`. Write `"\x82\x65"` or split the literal (`"\x82" "e"`); check Shift-JIS strings against the image.
- A magnitude test that retail compiles as `cmp rV, #0; ldrlt r0, [sp, #N]; movge r0, rV` (reusing a negation it
  already computed) is `abs(value)` from `<stdlib.h>`, not a ternary: smt4a `FUN_00169e38` and its IV twin
  `FUN_002bdce0` are IDENTICAL with it (wave 61).
- `__weak` on a declaration is allowed only for a function the image never defines, and only where every call site in
  retail is a NOP (`mov r0, r0`) after the call's argument setup: armlink removed calls to the undefined weak symbol,
  and `build.py` does the same. smt4 `FUN_002f2aa8` and smt4a `FUN_00375ec8` keep four such sites (x and y in r0/r1,
  the colour index in r2, the text in r3: the formatted buffer, a grid cell, `"BS"`, `"OK"`), written as calls of
  `__weak effMenuDebugDrawText` (`AsdSDK/Source/Gfx/Effect/effMenu.h`). A `__weak` that only stops a tail call or
  moves registers, with no NOP in retail, is steering (the Hermite family, rejected earlier).
- A lone `mov r0, #const` where a call would be, followed by a reload of a value the call would have
  clobbered, is a linker-inlined constant getter: write the call and add an `inlined.txt` row
  (`titleConfigUpdate`'s default volumes).
- `mov r0, #0; cmp r0, #0` (or `mov r0, #100; rsb r0, r0, #0`) is such a getter too: armcc folds a test or a negation of
  a constant, so the value came from a call (`resultGetGoldBonusPercent`, `-questCenterGetHealingFee()` in smt4
  `FUN_00382f4c`, wave 73). Argument moves before the lone `mov r0, #0` are the stub's real arguments: pass them.
- Record setters and getters are linker-inlined too: a widget reloaded into `r0` and the value rematerialised before
  each `strb r1, [r0, #N]` (or a lone `ldr r0, [r0, #N]` followed by the call's `nop` padding) is a call to a
  one-instruction accessor. Write the calls and add the rows after checking each call site's word in the image
  (`partyWidgetSet*`/`partyWidgetGetUnitId` in both games: smt4a `FUN_0026f3a0` and `partyPanelRefreshFilterMarks`,
  smt4 `FUN_001d13b0` and `partyPanelPollSelectedStatusColor`, wave 53).
  To find more sites, scan each unmatched unit's retail bytes for an `inlined.txt` word whose base register was set
  just before it (`mov r0, rN` or `add r0, rN, #off`, then the lone load or store); the generic words
  (`ldr r0, [r0, #0]`, `#4`, `#8`) are noise. Writing the calls made wave 55's smt4a `FUN_0021c1e0`
  (`partyWidgetGetUnitId`) and `FUN_003423e8` (`spriteSetLayer`/`spriteSetVisible`) IDENTICAL.
- A NULL test retail repeats right before a few stores through a pointer the function has already dereferenced is a
  small real function with its own NULL check, inlined there: write that function's body as a `static __inline`
  copy (smt4 `partyRestoreGroup`, with `FUN_002954bc`'s `if (unit != NULL) { hp = maxHp; mp = maxMp; }`).
- A `rev16` on a constant between argument moves (`mov r0, rN; rev16 r0, r0; mov rM, r0`) is a
  one-instruction function armlink inlined, not the compiler's byte-swap idiom: write the call and add
  an `inlined.txt` row (`textCodeSwapBytes`).

- A callback whose pool word is a plain number (no relocation in the retail object) points at code no unit covers:
  smt4a `FUN_002941c8` registers 0x329d64, four bytes before `FUN_00329d68`'s `push` (an `ldr r0, =g_mapDepart`
  armcc put first, as in smt4's twin). Move the unit's start with a `units.py add` `move` row and call the symbol;
  never cast an address in the source. Both are IDENTICAL after the move (wave 80).
- `asdMdlNodeGetCurrentMotion` (`ldr r0, [r0, #56]`) is a linker-inlined getter: the compared slot field is loaded
  after it, as after a call; with the calls and the `inlined.txt` rows smt4 `mapObjectVisibilityRestore`,
  `mapGimicUpdate` and smt4a `FUN_002d8cec` came 5-11 lines closer (wave 80).
- `stm r0, {r1, r2}` right after `mov r2, #y; mov r1, #x` on a node just returned in `r0`, followed by the call padding
  `nop {0}` twice or a reload of the node's global, is a linker-inlined two-word setter (`effMenuNodeSetOrigin`, the
  same body as `soundInitStackSet` but its own row): smt4 `FUN_00313704` and smt4a `FUN_003aa520` IDENTICAL (wave 83).
- A linker NOP with no argument set up before it, at the same place in both twins (smt4a `FUN_00295e54` and smt4
  `FUN_001e34fc`, before queueing a path's points), is a call the release build dropped: write `asdDebugHookVoid()`
  from `AsdSDK/AsdDebugHooks.h`, never omit it (wave 83).

## Sweeps

A sweep applies one real source form across every unit where it could hold, and keeps it only where
it scores better. Each site is compiled with the unit's own command (as `tools/trial.py` does) and
scored as `fdiff` scores it.

### Parameter order

- Float and integer arguments travel in separate register banks, so a prototype that lists the floats
  in the wrong place still links and runs, but it changes where armcc loads the float literals
  against the integer argument moves. Settle the order from the callee's definition and all its
  callers, not from one caller's match.
- armcc evaluates and schedules a call's arguments in the callee's declared parameter order, so the
  real order shows in every caller's schedule even where the registers agree.
  `debugDrawText(u32 color, f32 x, f32 y, f32 alpha, const char *text)` takes the text last: every
  caller loads the opacity literal between the text and the colour moves, and only the orders with
  the text last matched all its callers in both games (four of them became IDENTICAL).
  `textDrawString` is `(x, y, z, layer, width, color, height, text)` (the best of all 56
  interleavings, scored over all its callers), not the register order `(layer, color, text, x, ...)`.
  A near miss tuned to the wrong order (locals computed y-before-x) goes back to the plain call once
  the prototype is right.
  More functions have a real interleaved int/float order: `gxSubmitDrawZeroExtraParams(x, y, width,
  height, color0, color1, color2, depth, color3)` (`gfx/ColoredQuad.h`, the best of 126 orders over its
  23 callers in both games; six callers became IDENTICAL) and the spatial effect task factories
  `FUN_00244e1c`/`FUN_0031ba34(selector, flag, x, y, z, scale, mode, option)`
  (`event/SpatialEffectTask.h`: the scalar position and scale before the two `u8`s). When a callee's
  callers all miss by a float literal loaded before or after the integer moves, score the orders.
  When both arms of an `if` call the same function, armcc hoists the arguments the arms share, from the last
  parameter back to the first that differs; what stays in the arms shows the order. smt4a `FUN_00493518` and
  `FUN_004935c8` take `(rect, id, dx, dy, last, speed)` (retail hoists the speed and leaves the id in each arm):
  with that order `Obj55c920::FUN_004a24a8` is IDENTICAL and both definitions stay so (wave 79).
  `btlUiStartNumberPopup` takes its three integers before the coordinates `(handle, slot, number, unused, small,
  alt, anchored, x, y, z)` in both games: the best order over its definitions and callers, smt4a's definition
  IDENTICAL (IV's 2 -> 10 lines, unproven); a prototype's order is one fact for both twins (wave 85).
  `stereoCameraSetPerspective` keeps its by-value `CameraPerspective`: the scalar orders that make three callers
  IDENTICAL are not the best total, and the definition gets worse with them (wave 85).

The sweep: the callee's definition fixes the order within each bank (which integer goes in `r0`, which
float in `s0`), so only the interleaving of the two banks is free: 56 orders for three integers and
five floats, 126 for four and five. For each interleaving, rewrite the shared declaration and every
call, compile every caller in both games, and sum their scores. Apply the best order only when it is
the best over all the callers together and the relink proof loses no proven function (wave 48,
`a6f4f689a`, applied six orders this way).

### Publish-first allocation

The [locals shape](#locals-constants-and-literal-pools) `g = alloc(); T *p = g;` applies to many
creators at once. The sweep finds an allocation (a call to an allocator or creator, or a `new`
expression) stored into a local and published to a global in the next statement, and tries the
publish-first form:

```c
T *p = (T *)alloc(...);          ->    g = (T *)alloc(...);
g = p;                                 T *p = g;
```

with a cast on the read-back (`p = (T *)g;`) where the types need one. Sites are tried one at a time
on top of the best text so far, and a site stays only when the score drops strictly; an equal or
worse score, or a compile failure, reverts it.

### Keeping a sweep honest

- A sweep applies forms the cookbook already documents; it is not a search over rewrites. Random
  semantics-preserving rewrites found matches only through chains of meaningless temporaries, which
  is register steering, and the tool that tried them was removed (`4c6c0736f`).
- Review every kept site as a hand edit: wave 50's ternary-clamp sweep kept the form on 53 units and
  reverted 10 where it read as contrived (`abab670c2`).
- A sweep that touches headers or many units ends with `tools/usercheck.py` and the relink proof,
  like any other change.

## Compiler and flags

The default build is `--cpu=MPCore --fpmode=fast --apcs=/interwork --cpp --no_rtti --no_rtti_data
-O3 -Otime` (`<game>/config/project.json`, `compiler.cflags`).

### One compiler

**The compiler is armcc 4.1 b1454 throughout** (`config/toolchain.json`). Builds up to b713 never
fuse a halfword multiply-add into `smlabb`, and they write a `vdiv`/`vcvt` result over one of its
operands; retail fuses and keeps such results off their operands, as b791 and later builds do. When
the project switched from b713, b1454 matched more of both games; the functions it lost were b713
register tie-breaks. Fix the source; don't change the compiler per unit.

### Per-unit flags

**Compiler flags need evidence.** A unit can override the flags with a `cflags` list in
`config/project.json` when the retail code shows a different build:

- a constant division that calls `__aeabi_idivmod`/`__aeabi_uidivmod` instead of multiplying is
  `-Ospace` (the STL and SDK containers were built that way). Write `/` and `%` and set the flag;
  never call the helper by hand;
- Apocalypse's Thumb online library (around 0x11e000-0x128000) was built `-O3 -Ospace`: every unit
  there that needs a flag matches with it (`FUN_00124350`, `isLeapYear`, `FUN_00126d1c`,
  `FUN_0012736c`, `FUN_00127570`, `FUN_00122a10`); the proven ones at the default flags match either way;
- `--cpu=5TE` (Thumb register moves written `movs rd, rm` where MPCore armcc writes `mov`: runtime
  and library code), `-O2`: only when the function is IDENTICAL with the flag and not without it;
- `--fpu=softvfp`: code built without VFP. Retail copies 8- and 12-byte values through core
  registers (`ldrd`/`strd`, `ldm`/`stm`) where a VFP build uses `vldm`/`vstm` (Apocalypse's request
  and IPC library, the cfg stubs, the GPU command-buffer module). Prefer the flag when the module's
  neighbours or the function's twin carry it too; a register-only difference alone is weak evidence.
  IPC request stubs match as direct `cmd->header = …; cmd->words[i] = …;` stores (descriptors through
  `ipcMappedBufferDescriptor`), often with softvfp: most of smt4's request stubs at 0x351e54-0x3522f8
  and their smt4a twins at 0x4264d0-0x426a1c carry it, and their forwarders take the twin's flags.
  Not applied: `asdCmdBufferAppendCopyTransfer`/`asdCmdBufferAppendTextureTransfer` (both games) go from 107/54-56 to
  39/10-18 lines with softvfp and contain no VFP instruction, but nothing next to them is proven with the flag and the
  large functions right after them (smt4 0x143280, 0x144228) use VFP registers, so there is no run to extend (wave 78).
  Applied: the token-registry module (smt4 0x3df1d4-0x3df4dc, smt4a 0x500054 and 0x500234-0x5003b4) contains no VFP
  instruction, two twin pairs (`FUN_003df1d4`/`FUN_00500054`, `FUN_003df37c`/`FUN_00500254`, a 32-byte local copied
  through core registers) are IDENTICAL only with softvfp and every proven unit of the run stays so (wave 82; smt4a
  `FUN_005000c4` is worse with it and keeps the default). `-O2 -Otime` for smt4a `FUN_0020e5f0`/`FUN_00231464` was not
  applied: their proven neighbours break with it, so there is no contiguous run.
  Applied (wave 87): `-O2 -Otime` for the twins smt4 `FUN_00103fec`/smt4a `FUN_00138a64` (`commandQueueResetDefaults`,
  separate stores where -O3 forms an `stm`), IDENTICAL only with it, right after `asdProcessPauseAll`, which carries the
  same flags in both games; the next unit `asdPrimSwapBuffers` (another module) gets worse with it (0 -> 12) and keeps
  the default.

### `--multifile`

**The original was built with armcc `--multifile`.** A caller knew which registers its callees
really clobber: retail keeps a value in a caller-saved register (`r1`-`r3`, `ip`) across a `bl`,
or pushes fewer registers than a unit compiled alone does, yet the callees stay out of line. A
unit can name those callees in a `multifile` list in `config/project.json`; `build.py` and
`fdiff` then compile it in one `--multifile --no_autoinline` run with the callees' unit sources
and keep only the unit's function. Same evidence rule as `cflags`, and the callees' own sources
must clobber what retail's do (matched callees are best).
A callee that uses only VFP registers is the clearest case: retail's smt4a `FUN_004b6bc4` and `questMenuPanelUpdate`
read `r2`/`r3` right after `bl uiClampScrollOffset` (`vmov s1, r2`), and the IDENTICAL `uiClampScrollOffset` writes
no core register; as its `multifile` partner they went from 163 to 137 and 132 to 110 lines (wave 76). IV's
`contentMenuRebuildGroup` got worse with the same partner (118 to 135) and has no entry.
Both `recordPrepareLinkedOwner`s keep `r2`/`r3` across `bl packageKindToRecordKind`, the partner their proven sibling
`packageFileDisableByKindName` already has: with it they went from 14 to 2 lines (wave 87).

The recipe adds `--no_autoinline`, which most multifile units need (without it their callees are
inlined). Some need autoinline on: smt4 `mapDepartAdvanceCameraSequence` keeps retail's `r3` across six calls of
`vectorPairTransitionStep`, its prologue and its 116-byte frame only in a `--multifile` run without
`--no_autoinline` (the callee calls inline helpers; 84 lines left against 278 with the recipe and 304 alone;
wave 71). A unit's `"autoinline"` key overrides the recipe ([per-unit compile keys](project.md#per-unit-compile-keys)):

- `"autoinline": true` next to a `multifile` list drops `--no_autoinline`: use it when retail holds a
  caller-saved register across a call into the run (`r3 = &view->move` across `bl vectorPairTransitionStep`)
  and only the run with autoinline on reproduces it; `"autoinline": false` adds `--no_autoinline` to a
  unit or translation unit without partners, whose file inlines a callee retail keeps out of line (the
  ButtonHelp TU of wave 80, not retried). Same evidence rule as `cflags`; `trial.py --flags` probes both.
  smt4 `mapDepartAdvanceCameraSequence` and `lmapViewUpdateSelectableSequence` (580 lines alone and with the
  recipe, 532 so) have the entry `"multifile": ["vectorPairTransitionStep"], "autoinline": true`; the smt4
  `playerInitializeStats` translation unit has `"autoinline": false` (`playerGetGrowthParameters` IDENTICAL, 41 lines
  with autoinline; `playerInitializeStats` calls the header inlines retail inlined; wave 85).
- Autoinline off is not a file setting in retail: compiling every unproven unit of both games (1987 smt4, 2602 smt4a)
  with the other setting gave five isolated hits, no twin and no run, and the proven neighbours of the four plain
  units break with `--no_autoinline` (wave 86). Autoinline on is armcc's default for every plain unit; on a
  `multifile` unit, `"autoinline": true` is the normal fix when retail inlines what the recipe keeps out of line:
  smt4a `requestImageDraw` (`"multifile": ["requestIdToCode"]`) is IDENTICAL with it (4 lines with the recipe).

### Finding the evidence

`python -B tools/trial.py <game> <function> --flags` scores the unit under other cflags and with each
callee in a `multifile` run; those are diagnostics, and the config changes only with the evidence
above.

`python -B tools/flag_audit.py [--game G] [--jobs N] [--tsv OUT] [--apply none|evidenced]`
(output under `build/`, default `build/flag_audit.tsv`) looks for the flags that evidence points at
instead of trying every flag: each unmatched first-party unit is compiled (through `tools/trial.py`)
with the distinct cflags of its twin and of its three nearest units on each side, scored raw and
`--shape`, and each flag set gets an evidence class: `twin` (the twin carries exactly that set and is
proven with it), `run` (the preceding and following first-party units both carry it, or a run of two
or more does on one side and the other side is a module boundary), `one-side` (only one adjacent unit
does) or `none`. Only proven units count as carrying a set. `--apply evidenced` sets `cflags` (and
drops the `NON_MATCHING` comment) only for units that become IDENTICAL with `twin` or `run` evidence;
`one-side` hits are listed for review, and `--recheck F,...` re-derives a proven unit's flags with
its own cflags ignored (the wave-49 IPC stubs all come back IDENTICAL with `twin` evidence).

## Known unsolved

- A six-register prologue with `mov r5, r0` before `mov r4, r1` and a load through r5
  (smt4 `FUN_002072f0`, `FUN_001b18f0`; smt4a `FUN_002ce730`, `FUN_00290978`, `FUN_00241874`). Helpers,
  `const` parameters, local copies and multifile did not move it; don't spend long on it.
  The counter adders had it too and matched once an inner inline helper was written in place, its statements
  repeated (smt4a `gameCounterAddSaturating`, `FUN_002c5214`; smt4 `FUN_002021b4`; wave 78): try that before giving up.
- A halfword `|=` that retail writes back through a pre-indexed address (`ldrh rX, [rY, #N]!`) right after an
  `initialize()` call (`window->state |= 0x1000`: smt4 `Obj4223c4::FUN_003a6e68`, `saleListBuild` and others) was
  never reproduced: pointer, inline, sub-struct, bitfield, `s16`, `volatile` and flag variants all fail (wave 84).
- `push {r4, lr}; bl f; pop {r4, pc}` where the build tail-calls `b f` (smt4's `Obj4224b0`/`d4`/`f8`/`51c`
  destructors, `FUN_003e4fe8`, `FUN_003e5d78`; smt4a `FUN_0050625c`, `FUN_00506fec`) only comes back with `f`
  declared `__weak`, which the rules forbid for a function the image defines; leave them `NON_MATCHING` (wave 84).

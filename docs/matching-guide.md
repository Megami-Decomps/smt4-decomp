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
- A flag read with `ldrb` through a split large-offset base and tested against 0 is `s8`.
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
- Keep packing local to genuinely unaligned members, with size and offset assertions: packing a whole
  record downgrades its aligned word accesses.
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
- Parameter order is part of the signature even where the registers agree: see
  [Parameter order](#parameter-order).

### 64-bit flag masks

- A flag mask is a real `u64`, tested as `if (a & mask) return 1; return 0;` (or
  `if (...) f(1); else f(0);`) for retail's `movne`/`moveq`; word pairs and `!= 0` compile differently.
- A flag `|=`/`&=` whose temporary lands in `r1`/`r2` where armcc would use `r0`, or an
  `and rX, #N; movs rY, rX` test, is a `u64` field (`BtlMainState::battleMask`/`editorMask`,
  `BtlEntry::flagMask`).
- Read the field in each test (no `u64 flags = entry->flags;` copy) and choose `(flags & mask)` or
  `(mask & flags)` per test.

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
- A switch case whose jump-table entry points into another case's tail is a fall-through
  (`case A: …; /* fall through */ case B:`).
- Two identical branches that retail cross-jumps come from one inline helper called in both.
- An early-return arm whose final call retail cross-jumps into the other path's call to the same
  function (a `b` into the other arm's `bl`) is an if/else with the call in both arms, the early
  condition joined into the test: `if (stockOnly == 0 && row < 1) { …; f(unit, index, 0); } else { …;
  f(entry, index, 1); }` made smt4 `FUN_0026d3e0` and smt4a `partyPanelRefreshSelectedItemValues`
  IDENTICAL (wave 58), where `if (…) { …; f(…); return; }` followed by the tail did not.
- A load whose value retail never uses (`ldrb r0, [r1, #43]` between the stores, nothing reads `r0`) can be the
  condition of an `if`/`else` whose two arms do the same stores: armcc merges the arms and drops the compare but
  keeps the load (`if (definition->flags != 0) { x = 25.0f; y = 25.0f; } else { x = 25.0f; y = 25.0f; }`, smt4
  `bustupTextureStart`, wave 56; the same dead read is in the Apocalypse twin). The rule: both arms hold the statements
  retail performs and the tested value is a load retail keeps; an empty arm, or a test added only to move a branch
  or a register, is steering (wave 55 rejected one).
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
- In a nested search (an inner loop whose hit ends the outer one too), set the result variable before each
  `break`, break the outer loop on it and apply the default once after both: `result = level; break;` …
  `if (result != 0) break;` … `return result != 0 ? result : 1;`. smt4 `FUN_0029aef0` is IDENTICAL with it and
  39 lines off with `return level;` inside the loops (wave 63).
- A condition computed inside a guarded block and tested after the blocks join is a flag:
  `bool changed = false; if (ready && enabled) changed = memcmp(...) != 0; if (changed) { ... }`
  (smt4 `FUN_001ec6e0`). Nesting the test inside the guard gives a different branch layout.
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
  stack arguments go to `[sp]` and `[sp, #4]`. A block found only by its score is steering.

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
  change their registers.
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
- armcc fuses `a * b + c` written as one expression into `vmla`; retail's separate `vmul` then `vadd`
  means the product was its own statement (`f32 pulse = speed * 0.5f; efctSetSpeed(pulse + 0.5f);`,
  smt4 `FUN_001a7810`). That is instruction evidence, not allocation.
- Conversions through `static __inline f32 get(p) { return p->field; }`; rounding as
  `f32 half = 0.5f;` declared first, then `floorf(scaled + half)`.
- armcc orders address-taken locals on the stack by reference weight: the most-referenced gets the
  lowest `sp` offset, ties go by declaration order, and references inside conditionals weigh less. A
  frame-layout diff (two locals swapped) points at a missing or extra reference to one of them, not at
  their declaration order (smt4 `uniteCreateSelectedResult`).
- When retail reaches a field through its own pool word even in a function that already holds the
  enclosing object's base, the field is a separate object: split the symbol (smt4's `g_mapSelection`
  at 0x49FD14 was carved out of `g_gameState`).
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

### Loops and data

- Read the bound from the structure (`i < table->count`, `index < first + count`) instead of caching
  it; a `u32` index gives retail's count-down loop; an `entry = &entries[i]` local can stop armcc
  unrolling a search.
- armcc rerolls consecutive copies from an indexed source array into a loop: name the entries as
  struct members (smt4 `FUN_003852c8`'s sixteen step-function copies from its constant table, one member per
  state, wave 67).
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
- Data another thread changes (a run flag, a polled state) is `volatile` under the
  [`volatile` rule](CONTRIBUTING.md#what-a-source-may-contain).
- Sleeps and timeouts take an `nn::fnd::TimeSpan` (`FromMicroSeconds`, `FromMilliSeconds`) by value,
  which rematerialises the constant at each call as retail does.

### Classes

- A vtable whose slots 0/1 are destructors: declare a virtual destructor and write `delete`; it fixes
  the predication around the call. Not when slot 0 is an ordinary method.
- A function taking a non-trivial class by value (callers copy it to the stack and pass pointers to the copies)
  has C++ linkage: armcc 4.1 b1454 stops with an internal fault on a call to an `extern "C"` function with such a
  parameter. Declare and define it outside `extern "C"` and give it its mangled name
  (`_Z21quadSetOrderedVectors10QuadVectorS_S_S_ii` in `shard/W6_W6Match7_QuadVectors.h`; `names.py` accepts the
  rename once the unit defines the C++ function).
- Constructor stores out of order: a base class taking the value in its constructor
  (`Base(kind) : kind(kind)`) gives retail's order; members of types with their own zeroing
  constructors give its registers.
- `new (alloc) T` with a constructor and a class `operator new` gives retail's predicated allocation.
- A handler a class's function-pointer table calls on `this` is a member function: written as one on the class's
  real fields (`void Obj536044::FUN_00497290()`, `classes/Obj536044.h`) it can match where the same body over a
  unit-local struct view of the object does not: smt4a `Obj536044::FUN_00497290` was 179 lines off as a C function
  taking a `ShopScreen *` view and is IDENTICAL as a member (wave 68, with `FUN_0049bd20` and `FUN_00499fdc` written
  the same way from their drafts).
- A native initializer list (`: vtable(...), table(data), owner(unit), count(data->count)`) plus
  members whose own constructors zero them (`ModelEffectList() : count(0), items(NULL) {}`) pairs the
  stores into retail's `strd`; the same stores written in the body do not (smt4a
  `ModelUnitExtra::ModelUnitExtra`).
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
  still `<stdio.h>` `sprintf` (smt4 `FUN_00194278`). Only a load between `push` and `vpush`
  (`push; ldr; vpush; sub sp`, titleConfigDraw) is a plain variadic call: call `__2sprintf` through
  `runtime/Stdio.h` there. A `sprintf` whose format armcc cannot read
  (an `extern const char DAT_x[]`) becomes `__c89sprintf`, which retail never calls: define the format
  in the unit with the bytes at that address (`static const char s_romPathFormat[] = "rom:/%s";`);
  relink places it there. When two units use the same literal (the original's one file pooled it once:
  smt4a `asdLoadFileAsyncByPath` and `asdLoadFileSync`), neither can own it, because relink places one
  object at an address: both name the image's global (`g_asdRomPathFormat`) and pass it to `__2sprintf`
  from `runtime/Stdio.h` (`AsdSDK/Source/Sys/File/AsdLoadPath.h`), keeping `<stdio.h>` `sprintf` for the
  arm whose format is a plain pointer.
- **`__2snprintf` is armlib's `snprintf`** (smt4 0x2522f8, smt4a 0x1028b8, 0x36-byte Thumb): write
  `snprintf(buf, sizeof(buf), fmt, ...)` with `<stdio.h>`, as for `sprintf`; a local prototype of the placeholder
  leaves the prologue and argument scheduling off (smt4 `effectTextureRequestsPump`, smt4a `FUN_0036f0a0` and three
  effect texture loaders per game, wave 59).
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
- A lone `mov r0, #const` where a call would be, followed by a reload of a value the call would have
  clobbered, is a linker-inlined constant getter: write the call and add an `inlined.txt` row
  (`titleConfigUpdate`'s default volumes).
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

### `--multifile`

**The original was built with armcc `--multifile`.** A caller knew which registers its callees
really clobber: retail keeps a value in a caller-saved register (`r1`-`r3`, `ip`) across a `bl`,
or pushes fewer registers than a unit compiled alone does, yet the callees stay out of line. A
unit can name those callees in a `multifile` list in `config/project.json`; `build.py` and
`fdiff` then compile it in one `--multifile --no_autoinline` run with the callees' unit sources
and keep only the unit's function. Same evidence rule as `cflags`, and the callees' own sources
must clobber what retail's do (matched callees are best).

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

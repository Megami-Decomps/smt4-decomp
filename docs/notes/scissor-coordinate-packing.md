# Scissor coordinate packing

`packScissorCoordinates` is an inferred name for a removed leaf helper whose
ordinary C body is `return x | (y << 16);`, with two `u32` arguments. The pinned
compiler emits `orr r0, r0, r1, lsl #16` followed by `bx lr` for this body.
The project's existing armlink-inline model replaces calls with that instruction.

## Independent evidence

The following retail sites retain the helper's argument/return convention:

| Game | Caller | Relative offsets |
| --- | --- | --- |
| IV | `FUN_0029a17c` | `0x64`, `0xac` |
| IV | `gxSetClippedBottomScreenScissor` (`0x231258`) | `0x13c`, `0x180` |
| Apocalypse | `FUN_0035ae58` | `0x64`, `0xac` |
| Apocalypse | `renderSetClippedScissor` (`0x4cfb64`) | `0x13c`, `0x180` |

Six sites copy existing saved-register values into `r0` and `r1` immediately
before the same `orr` returning in `r0`. The two remaining sites already have
the arguments in those registers. An ordinary expression would use the saved
registers directly. Both retail images lack a surviving `orr; bx lr` body,
consistent with armlink removing an unreferenced helper after inlining all calls.
No original symbol name is claimed.

## Scene ownership around callbacks

Each update reads the scene pointer, packs its coordinates, and then addresses
the corresponding state stack. The second update reads the global again because
the first stack's callback can replace it. Expressing these as two scoped scene
snapshots reproduces the native call order without register constraints or
compiler-flag changes.

The simple scissor twins compile identically, including all text bytes and
relocations, through the normal build pipeline with the documented inline rule.
The more complex clipping callers above are independent evidence, not new matches
claimed by this change. Complete-build matched relinks remain the acceptance gate.

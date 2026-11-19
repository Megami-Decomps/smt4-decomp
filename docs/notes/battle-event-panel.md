# Apocalypse battle event panel

- **Games:** Apocalypse
- **Functions:** `btlEventPanelInitialize` (smt4a `0x2CDAD4`), matched in `e116e911f`; argument contracts of `FUN_004a9a50` and `FUN_0035bd4c`
- **Headers:** `include/battle/btlUI.h` (`BtlUiObjBA`), `include/code/Code0035.h`
- **Twin status:** no twin paired by `tools/shared.py`; no IV counterpart identified

`btlEventPanelInitialize` (`002CDAD4`, 568 code bytes plus its literal pool)
initializes the event panel at `BtlUiA::objB` (`+0x24BC`). The next widget begins
at `+0x28C4`, independently bounding this panel to `0x408` bytes. Its initializer,
preset selector, and update routine now use the same `BtlUiObjBA` definition.

## Animation resources

The initializer previously matched instructions, but the stock matched relinker
rejected its data. Scalar-key durations had been written as floating-point
numbers rather than the actual halfword duration and byte flags.

The four arrays now use the existing sprite resource records:

| Original address | Record | Count | Bytes |
| --- | --- | --- | --- |
| `0052AA1C` | `UiSpritePositionKey` | 4 | 48 |
| `0052AA4C` | `UiSpriteScalarKey` | 6 | 72 |
| `0052AA94` | `UiSpriteScalarKey` | 4 | 48 |
| `0052AAC4` | `SpriteAnimationCommand` | 12 | 336 |

Every compiled array byte was compared independently with the original image.
The native pool references the command array and derives the other three bases
by subtraction; ordinary adjacent static arrays reproduce that relationship.
No matching flags, alignment overrides, or fabricated containing object are used.

## Supporting argument contracts

Two already instruction-identical helpers lost live arguments in their old C++:

- `FUN_004a9a50` selects the global turn-icon panel, but must forward the two
  incoming change values to `FUN_0028fce8`. Its first owner argument is unused.
- `FUN_0035bd4c` looks up the table-0C record for the incoming ID, then submits
  that record's message with the supplied position/style arguments. It does not
  implicitly select a current actor.

Their shared declarations and sole callers now preserve those contracts. Both
helpers remain instruction- and relocation-identical; no large unfinished
renderer or turn-icon reconstruction is included.

## Qualification

The stock per-function comparison is identical (including the pool-to-data
relationship), both full reports preserve every previously proven function,
and both matched relinks reproduce the original `.code` hashes. Apocalypse
adds this initializer to the proven set in `e116e911f`; IV's proven set is
unchanged. The local Linux runner shows only the
[known host failures](../troubleshooting.md#known-host-failures), unrelated to this match;
native CI is the separate complete-build gate.

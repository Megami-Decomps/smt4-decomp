# Shared map resources (Apocalypse)

- **Games:** Apocalypse
- **Functions:** `mapSystemLoadSharedFiles` (smt4a `0x2326B4`), matched in `e04a5605a`
- **Headers:** `include/game/GameStateA.h`, `include/map/mapCommon.h` (new)
- **Twin status:** IV's `mapSystemLoadSharedFiles` (smt4 `0x1A8748`) is proven; its code differs, so `tools/shared.py` does not pair them

`mapSystemLoadSharedFiles` at `0x002326B4` loads the field map's scripts and model
content. Its IV counterpart already has the same name; IV retains file handles,
while Apocalypse constructs fifteen `MoriModelContent` owners.

## Recovered contracts

- The two synchronous file loads take `map/all/mapsys_scr.bf` and
  `map/all/mapsys_mes.mbm`. Their returned pointers belong to `g_gameState` at
  `0x50C` and `0x510`, not separate unrelated globals.
- Each traced allocation requests `sizeof(MoriModelContent)` (`0x20`). The
  conditional `modelListInit` constructor result is retained, then the content
  loads its named file and creates its body with a null parent.
- The shared resources occupy the existing slots from `0x514` through `0x570`:
  damage, four arm models, an additional arm model, two rings, three area/arrow
  resources, Navarre, Estoma, light Estoma, and the jade knife. Unknown intervening
  storage remains unknown. Offset assertions cover the recovered fields.
- The filename buffer is 128 bytes, matching the original stack reservation.

`GameStateA` now uses the canonical `MoriModelContent` type instead of the older
partial `SceneModel` view. The existing map-scene registration consumer reads
`content->body` and converts it only at the handle-registry boundary. The script
entry consumer uses the existing `TableGroupHeader` record and the lookup's
actual name-pointer argument. Both consumers retain their original bytes.

## Verification

The initializer's entire 1,700-byte `.text` section, including inline strings and
literal pools, was compared with its original target. Its project function
extent is 1,604 bytes. Instructions and relocation targets also agree. No new
external static data, compiler flags, linker exceptions, or matching-tool
changes are involved. Standard whole-game reports and matched-image relinking
are the acceptance gate; diagnostic similarity alone is not a match.

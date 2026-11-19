# Apocalypse maze wall auto-tiles

- **Games:** Apocalypse
- **Functions:** `mapRebuildWallAutoTiles` (smt4a `0x2C5468`), matched in `8cc7b7029`
- **Headers:** none changed; the grid is `MapSaveBlockA` from `include/gamedata/MapSaveBlockA.h`
- **Twin status:** no twin paired by `tools/shared.py`

`mapRebuildWallAutoTiles` (`002C5468`, 208 bytes) visits the interior of the
saved maze grid. For each state-2 wall it tests its four state-1 neighbors
(west/east/north/south bits 1/2/4/8) and writes the corresponding tile and variant.
Other cells have their neighbor-derived tile cleared.

The old source compiled to the correct instructions, but its two `const` lookup
tables landed in `.constdata`. Retail owns both 16-byte tables in writable
`.data`, at `005814A4` and `005814B4`. The stock matched relinker therefore could
not place the old compiled data at their actual addresses and did not count the
function as proven.

Removing the incorrect `const` qualifiers preserves every instruction and all
32 original data bytes. Normal compiler and linker behavior now places the two
ordinary static arrays together in `.data`; no flags, placement overrides, or
matching-tool changes are involved. The grid layout remains the shared
`MapSaveBlockA`/`MapCell` definition. Other retail references to the same tables
retain their original addresses.

The final stock report and matched relink include the initializer and this
function, adding it to Apocalypse's proven set in `8cc7b7029` without losing any
prior match; the resulting `.code` is byte-identical to the original. Both
complete compiled arrays were also independently checked against the original
image. The [known host failures](../troubleshooting.md#known-host-failures) are unchanged.

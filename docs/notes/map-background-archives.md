# Map background archive loading

- **Games:** IV
- **Functions:** `mapBgLoadArchivesStep` (smt4 `0x2D1CE0`), matched in `5b5db02eb`
- **Headers:** `include/map/mapBg.h` (new), `include/map/mapDepart.h`
- **Twin status:** Apocalypse's expanded counterpart is unmatched and not paired by `tools/shared.py`

IV `mapBgLoadArchivesStep` (formerly `FUN_002d1ce0`) advances the optional sky
and destination-map BAM requests kept by `g_mapDepartWork`.

The native instructions select a signed halfword state at +0x14, read the sky
identifier at +0x18, and format map/area identifiers from +0x1C/+0x1E. These
fields belong to the existing 0x30-byte `MapDepartWork`, not a separate local
overlay. Its layout assertions now cover those fields and both resource slots.
The native loader rereads the same global owner after asynchronous request
calls. Using two incompatible owner descriptions incorrectly changed aliasing
and instruction allocation.

States 0 and 99 independently return completion; state 1 waits without starting
a request. Separate source cases reproduce the shared native return tail.
States 2/3 request and wait for the sky, then 10/11 request and wait for the map.
The existing descriptor word at +0x24 is assigned 4 after either wait completes;
its historical `sizeA` name is retained rather than inferring a new meaning.

The compiled section contains 308 bytes of instructions and 56 bytes of literal
pool/string data. All 364 bytes and normalized relocations match retail.
There are no external static tables. The known caller retains identical code
with the canonical declaration. Apocalypse's expanded counterpart remains
unmatched and is not included in this change.

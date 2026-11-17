# Fusion-result initialization and source-visible tone access

`uniteResultInitialize` (SMT IV, `001eea88`) sets up the fusion-result
presentation: material textures and a render target, the two/three/four-material
stage and camera, the result demon's tone-specific message script, and sprites.

The record's `talkTone` is the unsigned byte at offset `0x30`. Retail passes the
record returned by `nkmBaseGetRecord` in `r0` through a byte getter, then sign
extends that result before the table-25 lookup. The existing linker-inlined
`devilRecordGetTone` entry records the load (`e5d00030`). Its ordinary C body is:

```cpp
u8 devilRecordGetTone(const NkmBaseRecord *record)
{
    return record->talkTone;
}
```

An external declaration alone reproduces the load and sign extension but makes
ARMCC insert three scheduling NOP hints and changes the preceding script-file
store's scheduling. Keeping this small getter's definition visible in the same
source restores the native instruction sequence under the unchanged compiler
options. No register declarations, assembly, optimization overrides, artificial
side effects, or object-byte corrections are needed. The normal build carves
out the initializer and applies the already-established linker-inlined getter.

The table-25 call uses its shared `Table25Record` declaration: the signed byte
selects the record, whose string payload begins at byte one. Its text is inserted
in `battle/DevilMsg/%s.mbm`.

The final `paramsInit` packet is the 224-byte static
`sUniteResultSpriteKeys` table at `00403440`. Naming the data makes its local
symbol and the retail relocation agree after function carving. Its full bytes
are checked by the matched relink, not just by instruction comparison.

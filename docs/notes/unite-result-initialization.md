# Fusion-result initialization and source-visible tone access

- **Games:** both
- **Functions:** `uniteResultInitialize` (smt4 `0x1EEA88`, matched in `011a15af8`, key types corrected in `392290a34`; smt4a `0x2A74AC`, matched in `10d3b9499`)
- **Headers:** none changed; a `uniteRenderTargetSetTexture` row in `smt4a/config/inlined.txt` (IV uses the existing `devilRecordGetTone` row)
- **Twin status:** both proven; not paired by `tools/shared.py`

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
symbol and the retail relocation agree after function carving. Function carving resolves that local table symbol against the original image;
therefore the matched relink alone does **not** verify the discarded data
sections. The uncarved compiler object's four table definitions were checked
separately against the image at `004033e0`, `00403404`, `00403434`, and
`00403440` (36, 48, 12, and 224 bytes respectively).

That independent check found five pre-existing incorrectly typed duration
values in the second and third packets. Each key contains two floating-point
values and one integer frame count, not three floats. `UniteFloatKey` expresses
that mixed layout directly. All four complete compiled tables now match the
original bytes, and the function's instructions remain identical.

## Apocalypse counterpart

Apocalypse's initializer (`002a74ac`, also `uniteResultInitialize`) uses the
same presentation sequence with a larger work layout, canonical `ModelList`
and `Obj557af8` camera construction, and integer-framed animation keys. Camera
file sizes are construction-local outputs. Traced allocations are checked
before ordinary placement construction; no custom traced-new behavior is
invented.

Its removed render-target accessor has this ordinary contract:

```cpp
void uniteRenderTargetSetTexture(UniteRenderTarget *target, u32 texture)
{
    target->texture = texture;
}
```

The IV counterpart calls surviving `FUN_0021a374` at the same point. In
Apocalypse, native code loads the texture into `r1`, forms the render-target
address in `r0`, and executes `str r1,[r0,#4]`. The catalog records that verified
single-instruction body (`e5801004`), not an unrelated surviving setter with
coincidentally identical bytes. The call's argument setup remains in the
source, as it does in the image.

The Apocalypse uncarved object's four complete tables are independently equal
to native data at `0052f360`, `0052f384`, `0052f3b4`, and `0052f3c0` (again 36,
48, 12, and 224 bytes). Its tone field is at `0x38`; the source-visible getter
and signed conversion use `NkmBaseRecordA` and the table-25 record payload.

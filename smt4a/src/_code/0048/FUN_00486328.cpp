/* NON_MATCHING: only the store of the cleared `flagged` byte is scheduled after the x/z conversions in retail (strbeq fp after vmov); retail also saves fp for a zero. */
#include "common.h"

extern "C" {

typedef struct {
    u8 unk0[4];
    u8 kind;  /* 0x4 */
} MarkerTarget;

typedef struct {
    u8 unk0[3];
    u8 icon;  /* 0x3 */
} MarkerStyle;

typedef struct {
    u16 id;       /* 0x0 */
    u8 sub;       /* 0x2 */
    u8 unk3;      /* 0x3 */
    u16 kind;     /* 0x4 */
    u8 icon;      /* 0x6 */
    u8 flagged;   /* 0x7 */
    s16 x;        /* 0x8 */
    s16 z;        /* 0xa */
    u8 unkC[4];
} MapMarker; /* size 0x10 */

typedef struct {
    u8 unk0[0x166];
    MapMarker markers[1]; /* 0x166 */
} MapMarkerOwner;

MarkerTarget *FUN_00491abc(MapMarkerOwner *owner, u32 id, u32 sub, f32 x, f32 y, f32 z);
MarkerStyle *dataTable2BFindType1Entry(MapMarkerOwner *owner, u32 id, u8 kind);

/* Fills marker `slot` from target `id`/`sub` at (x, y, z), or clears it when `enable` is 0. */
void FUN_00486328(MapMarkerOwner *owner, s32 slot, s32 enable, u32 id, f32 x, f32 y, f32 z, u32 sub, s32 flagged)
{
    MarkerTarget *target;
    MarkerStyle *style;

    if (enable == 0) {
        owner->markers[slot].id = 0;
        owner->markers[slot].sub = 0;
        owner->markers[slot].kind = 0;
        owner->markers[slot].icon = 0;
        owner->markers[slot].flagged = 0;
        owner->markers[slot].x = 0;
        owner->markers[slot].z = 0;
        owner->markers[slot].unk3 = 0;
        return;
    }
    target = FUN_00491abc(owner, id, sub, x, y, z);
    style = dataTable2BFindType1Entry(owner, id, target->kind);
    owner->markers[slot].id = id;
    owner->markers[slot].sub = sub;
    owner->markers[slot].kind = target->kind;
    owner->markers[slot].icon = style->icon;
    if (flagged != 0) {
        owner->markers[slot].flagged = 1;
    } else {
        owner->markers[slot].flagged = 0;
    }
    owner->markers[slot].x = (s16)x;
    owner->markers[slot].z = (s16)z;
}

} /* extern "C" */

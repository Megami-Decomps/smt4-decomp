#include "common.h"

extern "C" {

void FUN_0023aa28(void *range, f32 *x, f32 *y);

typedef struct {
    f32 x, y, z;
} PosVec3;

typedef struct {
    u8 unk0[0xc];
    PosVec3 pos;          /* 0x0c */
    u8 unk18[0x48 - 0x18];
    s32 hasOffset;        /* 0x48 */
    u8 unk4C[0xbc - 0x4c];
    f32 height;           /* 0xbc */
    u8 unkC0[0x100 - 0xc0];
    u8 offsetRange[0x14]; /* 0x100 */
} PosEntry; /* size 0x114 */

typedef struct {
    u8 unk0[0x1e98];
    PosEntry *entries; /* 0x1e98 */
} PosOwner;

typedef struct {
    u8 unk0[4];
    PosOwner *owner;   /* 0x04 */
    PosVec3 pos;       /* 0x08 */
} PosQuery;

/* Copies entry `index`'s position into the query, adds its offset and a height lift, returns it. */
PosVec3 *FUN_0034d8d0(PosQuery *query, s32 index)
{
    PosEntry *entry = &query->owner->entries[index];
    f32 offset[2];

    query->pos = entry->pos;
    if (entry->hasOffset == 1) {
        FUN_0023aa28(entry->offsetRange, &offset[0], &offset[1]);
        query->pos.x += offset[0];
        query->pos.y += offset[1];
    }
    query->pos.x += entry->height;
    query->pos.y += entry->height * 0.25f;
    return &query->pos;
}

} /* extern "C" */

#include "common.h"
#include <stddef.h>
#include "code/Code0048_Smt4a.h"

/* Counts of carried items: seven categories of 0x78 slots (the last is only 0x32 long), starting at item id 0x3d. */
struct ItemBoxCounts {
    /* 0x000 */ u8 unk000[0xF0];
    /* 0x0F0 */ u16 equipment[0x3C];
    /* 0x168 */ u16 counts[7][0x78];
    /* 0x7F8 */ u8 unk7F8[0xF3C - 0x7F8];
    /* 0xF3C */ u16 skills[0x40];
    /* 0xFBC */ u8 unkFBC[0xFC];
};

typedef char ItemBoxCountsOffsets[offsetof(ItemBoxCounts, counts) == 0x168 &&
    offsetof(ItemBoxCounts, skills) == 0xF3C &&
    offsetof(ItemBoxCounts, unkFBC) == 0xFBC ? 1 : -1];

extern "C" {

s32 itemGetStackLimit(s32 itemId);
void rt_memcpy(void *dst, const void *src, u32 bytes);

/* Adds the item counts of one box into another, clamping each count to its stack limit. */
void FUN_0048111c(ItemBoxCounts *dst, const ItemBoxCounts *src)
{
    u32 i;
    s32 limit;
    s32 slot;

    for (slot = 0; slot < 0x3C; slot++) {
        dst->equipment[slot] += src->equipment[slot];
    }
    for (slot = 0; slot < 0x40; slot++) {
        dst->skills[slot] += src->skills[slot];
    }
    for (i = 0; i < 0x78; i++) {
        dst->counts[0][i] += src->counts[0][i];
        limit = itemGetStackLimit(0x3d + i);
        if (limit < dst->counts[0][i]) {
            dst->counts[0][i] = limit;
        }
    }
    for (i = 0; i < 0x78; i++) {
        dst->counts[1][i] += src->counts[1][i];
        limit = itemGetStackLimit(0xb5 + i);
        if (limit < dst->counts[1][i]) {
            dst->counts[1][i] = limit;
        }
    }
    for (i = 0; i < 0x78; i++) {
        dst->counts[2][i] += src->counts[2][i];
        limit = itemGetStackLimit(0x12d + i);
        if (limit < dst->counts[2][i]) {
            dst->counts[2][i] = limit;
        }
    }
    for (i = 0; i < 0x78; i++) {
        dst->counts[3][i] += src->counts[3][i];
        limit = itemGetStackLimit(0x1a5 + i);
        if (limit < dst->counts[3][i]) {
            dst->counts[3][i] = limit;
        }
    }
    for (i = 0; i < 0x78; i++) {
        dst->counts[4][i] += src->counts[4][i];
        limit = itemGetStackLimit(0x21d + i);
        if (limit < dst->counts[4][i]) {
            dst->counts[4][i] = limit;
        }
    }
    for (i = 0; i < 0x78; i++) {
        dst->counts[5][i] += src->counts[5][i];
        limit = itemGetStackLimit(0x295 + i);
        if (limit < dst->counts[5][i]) {
            dst->counts[5][i] = limit;
        }
    }
    for (i = 0; i < 0x32; i++) {
        dst->counts[6][i] += src->counts[6][i];
        limit = itemGetStackLimit(0x30d + i);
        if (limit < dst->counts[6][i]) {
            dst->counts[6][i] = limit;
        }
    }
    rt_memcpy(dst->unkFBC, src->unkFBC, sizeof(dst->unkFBC));
}

} /* extern "C" */

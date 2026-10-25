/* NON_MATCHING: the final 100-bit clear loop now uses retail's 1-based flag id (pool constant 0x79f); armcc strength-reduces the down counter into an up counter (cmp #101) where retail keeps `subs`/bne */
#include "common.h"
#include <stddef.h>
#include "util/RecordPackedValue.h"

/* Counts of carried items: seven categories of 0x78 slots (the last is only 0x32 long), starting at item id 0x3d. */
struct ItemBoxCounts {
    /* 0x000 */ u8 unk000[0xF0];
    /* 0x0F0 */ u16 equipment[0x3C];
    /* 0x168 */ u16 counts[7][0x78];
    /* 0x7F8 */ u8 unk7F8[0xF49 - 0x7F8];
    /* 0xF49 */ u8 flags[0x101]; /* one bit per entry, bits 0x79e.. are cleared unless the merge keeps them */
};

typedef char ItemBoxCountsOffsets[offsetof(ItemBoxCounts, counts) == 0x168 &&
    offsetof(ItemBoxCounts, flags) == 0xF49 ? 1 : -1];

extern "C" {

void rt_memcpy(void *dst, const void *src, u32 bytes);

/* Adds the item counts of one box into another, clamping each count to its stack limit. */
void FUN_00394fd8(ItemBoxCounts *dst, const ItemBoxCounts *src, s32 keepFlags)
{
    u32 i;
    s32 limit;
    s32 slot;

    for (slot = 0; slot < 0x3C; slot++) {
        dst->equipment[slot] += src->equipment[slot];
    }
    for (i = 0; i < 0x78; i++) {
        dst->counts[0][i] += src->counts[0][i];
        limit = recordPackedValue(0x3d + i);
        if (limit < dst->counts[0][i]) {
            dst->counts[0][i] = limit;
        }
    }
    for (i = 0; i < 0x78; i++) {
        dst->counts[1][i] += src->counts[1][i];
        limit = recordPackedValue(0xb5 + i);
        if (limit < dst->counts[1][i]) {
            dst->counts[1][i] = limit;
        }
    }
    for (i = 0; i < 0x78; i++) {
        dst->counts[2][i] += src->counts[2][i];
        limit = recordPackedValue(0x12d + i);
        if (limit < dst->counts[2][i]) {
            dst->counts[2][i] = limit;
        }
    }
    for (i = 0; i < 0x78; i++) {
        dst->counts[3][i] += src->counts[3][i];
        limit = recordPackedValue(0x1a5 + i);
        if (limit < dst->counts[3][i]) {
            dst->counts[3][i] = limit;
        }
    }
    for (i = 0; i < 0x78; i++) {
        dst->counts[4][i] += src->counts[4][i];
        limit = recordPackedValue(0x21d + i);
        if (limit < dst->counts[4][i]) {
            dst->counts[4][i] = limit;
        }
    }
    for (i = 0; i < 0x78; i++) {
        dst->counts[5][i] += src->counts[5][i];
        limit = recordPackedValue(0x295 + i);
        if (limit < dst->counts[5][i]) {
            dst->counts[5][i] = limit;
        }
    }
    for (i = 0; i < 0x32; i++) {
        dst->counts[6][i] += src->counts[6][i];
        limit = recordPackedValue(0x30d + i);
        if (limit < dst->counts[6][i]) {
            dst->counts[6][i] = limit;
        }
    }
    rt_memcpy(dst->flags, src->flags, sizeof(dst->flags));
    if (keepFlags == 0) {
        s32 id = 0x79f;

        for (slot = 100; slot != 0; slot--, id++) {
            s32 bit = id - 1;
            dst->flags[bit >> 3] &= ~(1 << (bit & 7));
        }
    }
}

} /* extern "C" */

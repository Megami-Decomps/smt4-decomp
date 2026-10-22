/* NON_MATCHING: register allocation only: retail keeps the slot pointer in r1 (category in r0) and assigns the size constants to s18/s16/s19/s17. */
#include "common.h"

namespace {
struct MapStateEffectSlot {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ s32 state;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ f32 transform[4];
    /* 0x1C */ u8 unk1C[6];
    /* 0x22 */ s16 tag;
    /* 0x24 */ s16 category;
    /* 0x26 */ u8 unk26[2];
    /* 0x28 */ u32 flagIndex;
    /* 0x2C */ u8 unk2C[0x20];
};
struct MapStateEffectTable {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ MapStateEffectSlot slots[32];
};
}

extern "C" {

extern MapStateEffectTable *g_mapStateSlots;
void FUN_002671f4(s32 layer, f32 first, f32 second, f32 third, f32 fourth, f32 width, f32 height, f32 depth);

/* Place a marker at every active map slot of categories 3, 4, 5 (larger) and 7 (smaller). */
void FUN_0027b1b4(void)
{
    for (s32 i = 0; i < 32; ++i) {
        MapStateEffectSlot *slot = &g_mapStateSlots->slots[i];
        if (slot->active) {
            switch (slot->category) {
            case 3:
            case 4:
            case 5:
                FUN_002671f4(0, slot->transform[0], slot->transform[1], slot->transform[2], slot->transform[3],
                    80.0f, 70.0f, 36.0f);
                break;
            case 7:
                FUN_002671f4(0, slot->transform[0], slot->transform[1], slot->transform[2], slot->transform[3],
                    60.0f, 70.0f, 36.0f);
                break;
            }
        }
    }
}

} /* extern "C" */

/* NON_MATCHING: load form of the 64-bit marker flags: retail loads the two words with separate ldr (register r1 base) and both mask words first; the build uses ldm and a different order. */
#include "common.h"

/* The battle state; only the phase value and the marker flags are named. */
struct MarkerBattleState {
    /* 0x0000 */ u8 unk0000[0x3034];
    /* 0x3034 */ s32 phase;
    /* 0x3038 */ u8 unk3038[0x1570];
    /* 0x45A8 */ u64 markerFlags;
};

/* The marker flag mask block at g_btlMain + 0x1F8. */
struct MarkerMasks {
    /* 0x000 */ u8 unk000[0x1F8];
    /* 0x1F8 */ u64 markerMask;
};

struct MarkEntry {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ s16 count;
};

extern "C" {

extern MarkerMasks g_btlMain; /* 0x573920 */
MarkEntry *gameDataGetMarkEntry(s32 index);

/* Returns 1 when a marker flag is set, the phase is 1-4, or any of the 32 mark entries has a count; else 0. */
u32 FUN_003e98e0(MarkerBattleState *battle)
{
    if ((battle->markerFlags & g_btlMain.markerMask) == 0 && (u32)(battle->phase - 1) > 3) {
        s32 used = 0;

        for (s32 i = 0; i < 0x20; i++) {
            if (gameDataGetMarkEntry(i)->count != 0) {
                used++;
            }
        }
        if (used < 1) {
            return 0;
        }
    }
    return 1;
}

} /* extern "C" */

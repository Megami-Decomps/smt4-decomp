/* NON_MATCHING: with the mask read first the loads, their order and every offset match retail; only
 * the registers of the four words differ (retail: flags in r2/r1 based on r1, mask in r3/ip based on
 * ip; and the high words are or'ed first). */
#include "common.h"
#include "gamedata/GameDataAccess_VariantJ.h"

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

/* Returns 1 when a marker flag is set, the phase is 1-4, or any of the 32 mark entries has a count; else 0. */
u32 FUN_003e98e0(MarkerBattleState *battle)
{
    u64 mask = g_btlMain.markerMask;
    if ((battle->markerFlags & mask) == 0 && (u32)(battle->phase - 1) > 3) {
        s32 used = 0;

        for (s32 i = 0; i < 0x20; i++) {
            if (reinterpret_cast<MarkEntry *>(gameDataGetMarkEntry(i))->count != 0) {
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

/* NON_MATCHING: compiler loads the first exclusion mask with ADD/LDM into R3/IP; retail interleaves separate low/high loads into IP/R3 around the state LDRD. */
#include "shard/W5_W5Match7_BattleMask.h"

struct BattleCountedMaskState {
    BattleMaskState state;
    u8 unk4CE0[0x8c];
    s32 count;
};

struct BattleExclusionMasks {
    u8 unk00[0xd0];
    u64 first;
    u8 unkD8[0x30];
    u64 second;
};

extern "C" {
extern BattleExclusionMasks g_btlMain;

u32 FUN_003ec7b0(const BattleCountedMaskState* battle)
{
    if (battle->count > 0) {
        u64 mask = battle->state.mask;
        if ((g_btlMain.first & mask) == 0 && (mask & g_btlMain.second) == 0) {
            return 1;
        }
    }
    return 0;
}
}

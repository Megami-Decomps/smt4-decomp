#include "shard/BattleFlagMasks.h"

extern "C" {


u32 gameDataFlagTestBit(u32 bit);

/* 0 when a blocking flag is set, 1 when a forcing flag is set, else the state of data flag 0x10. */
u32 battleFlagsQueryBlockedOrForced(BattleFlagsState *state)
{
    if ((state->blockFlags & g_btlMain.blockMask) != 0) {
        return 0;
    }
    if ((state->forceFlags & g_btlMain.forceMask) != 0) {
        return 1;
    }
    return gameDataFlagTestBit(0x10);
}

} /* extern "C" */

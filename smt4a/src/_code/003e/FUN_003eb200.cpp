#include "shard/BattleFlagMasks.h"

extern "C" {

/* True when no disabling flag is set and either an allowing flag or a negative state is present. */
u32 FUN_003eb200(BattleFlagsState *state)
{
    if ((state->blockFlags & g_btlMain.disableMask) != 0) {
        return 0;
    }
    if ((state->blockFlags & g_btlMain.allowMask) == 0 && state->signedState >= 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */

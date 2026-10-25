#include "battle/BtlMainAccess.h"
#include "shard/W5_W5Match7_BattleMask.h"

extern "C" {

s32 scrCommApplySecondBattleMask(void)
{
    BtlMainStateA *state = btlGetMainState();
    state->stateFlags64.bits = state->stateFlags64.bits | g_battleMaskPresets.second;
    return 1;
}

} /* extern "C" */

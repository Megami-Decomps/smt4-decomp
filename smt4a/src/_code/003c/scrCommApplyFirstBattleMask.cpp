#include "battle/BtlMainAccess.h"
#include "shard/W5_W5Match7_BattleMask.h"

extern "C" {



s32 scrCommApplyFirstBattleMask(void)
{
    BtlMainStateA *state = btlGetMainState();
    state->stateFlags64.bits = state->stateFlags64.bits | g_battleMaskPresets.first;
    return 1;
}

} /* extern "C" */

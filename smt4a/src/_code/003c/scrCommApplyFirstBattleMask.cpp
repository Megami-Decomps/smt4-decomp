#include "shard/W5_W5Match7_BattleMask.h"

extern "C" {



s32 scrCommApplyFirstBattleMask(void)
{
    BattleMaskState *state = btlGetMainState();
    state->mask = state->mask | g_battleMaskPresets.first;
    return 1;
}

} /* extern "C" */

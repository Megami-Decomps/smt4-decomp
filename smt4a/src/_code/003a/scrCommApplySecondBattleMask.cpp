/* NON_MATCHING: retail uses `ldr r2, [ip, #104]` where armcc emits `ldr ip, [r1, #104]`. */
#include "shard/W5_W5Match7_BattleMask.h"

extern "C" {



s32 scrCommApplySecondBattleMask(void)
{
    btlGetMainState()->mask |= g_battleMaskPresets.second;
    return 1;
}

} /* extern "C" */

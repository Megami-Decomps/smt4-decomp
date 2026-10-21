/* NON_MATCHING: retail uses `ldr r2, [ip, #64]` where armcc emits `ldr ip, [r1, #64]`. */
#include "shard/W5_W5Match7_BattleMask.h"

extern "C" {



s32 scrCommApplyFirstBattleMask(void)
{
    btlGetMainState()->mask |= DAT_00570d78.first;
    return 1;
}

} /* extern "C" */

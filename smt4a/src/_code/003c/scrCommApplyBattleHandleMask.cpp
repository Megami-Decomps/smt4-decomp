/* NON_MATCHING: retail uses `ldr r0, [r0]` where armcc emits `ldr r0, [r0]`. */
#include "shard/W5_W5Match7_BattleMask.h"

extern "C" {

extern u64 DAT_00570dd8;
void FUN_004aa8b0(u32 handle, s32 mode);

s32 scrCommApplyBattleHandleMask(const u32 *handle)
{
    FUN_004aa8b0(*handle, 1);
    btlGetMainState()->mask |= DAT_00570dd8;
    return 1;
}

} /* extern "C" */

/* NON_MATCHING: only register choice/scheduling of the 64-bit mask test and the 1.0f constant load differ. */
#include "battle/BtlMainAccess.h"
#include "shard/W5_W5Match7_BattleMask.h"
#include "code/Code0018_VariantA_DevilRecordA.h"

extern "C" {

void FUN_0015f490(u32 id, s32 a, s32 b, s32 c, f32 value);

// Script command: play the effect of the unit's devil unless a blocking battle state is active.
u32 FUN_003a9820(void)
{
    BtlMainStateA *state = btlGetMainState();
    if ((state->stateFlags64.bits & g_battleMaskPresets.blockedView.blockedMask) == 0) {
        u16 devil = state->devil.devilId;
        if (devil != 0 && FUN_00184310(devil) != 0) {
            FUN_0015f490(devil, 3, 1, 0, 1.0f);
        }
    }
    return 1;
}

} /* extern "C" */

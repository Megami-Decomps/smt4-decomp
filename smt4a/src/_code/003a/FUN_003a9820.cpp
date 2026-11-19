/* NON_MATCHING: only register choice/scheduling of the 64-bit mask test and the 1.0f constant load differ. */
#include "battle/BtlMainAccess.h"
#include "shard/W5_W5Match7_BattleMask.h"
#include "gamedata/NkmBaseRecordA.h"

extern "C" {

void FUN_0015f490(u32 id, s32 a, f32 value, s32 b, s32 c);

// Script command: play the effect of the unit's devil unless a blocking battle state is active.
u32 FUN_003a9820(void)
{
    BtlMainStateA *state = btlGetMainState();
    if ((state->stateFlags64.bits & g_battleMaskPresets.blockedView.blockedMask) == 0) {
        u16 devil = state->devil.devilId;
        if (devil != 0 && nkmBaseGetRecord(devil) != 0) {
            FUN_0015f490(devil, 3, 1.0f, 1, 0);
        }
    }
    return 1;
}

} /* extern "C" */

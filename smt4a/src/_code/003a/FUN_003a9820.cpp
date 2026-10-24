/* NON_MATCHING: only register choice/scheduling of the 64-bit mask test and the 1.0f constant load differ. */
#include "shard/W5_W5Match7_BattleMask.h"

struct BattleUnitView {
    u8 unk000[0x11e];
    u16 devilId; // 0x11e
};

extern "C" {

s32 FUN_00184310(u16 id);
void FUN_0015f490(u32 id, s32 a, s32 b, s32 c, f32 value);

// Script command: play the effect of the unit's devil unless a blocking battle state is active.
u32 FUN_003a9820(void)
{
    BattleMaskState *state = btlGetMainState();
    if ((state->mask & g_battleMaskPresets.blockedView.blockedMask) == 0) {
        u16 devil = ((BattleUnitView *)state)->devilId;
        if (devil != 0 && FUN_00184310(devil) != 0) {
            FUN_0015f490(devil, 3, 1, 0, 1.0f);
        }
    }
    return 1;
}

} /* extern "C" */

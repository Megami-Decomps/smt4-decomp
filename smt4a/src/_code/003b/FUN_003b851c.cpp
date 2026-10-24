#include "shard/W5_W5Match7_BattleMask.h"

extern "C" {

s32 scrGetArg(u32 index);

// Script command: set (argument > 0) or clear the scripted battle mask bits of the main battle state.
u32 FUN_003b851c(void)
{
    s32 enable = scrGetArg(0);
    BattleMaskState *state = btlGetMainState();
    if (enable > 0) {
        state->mask |= g_battleMaskPresets.scriptMask;
    } else {
        state->mask &= ~g_battleMaskPresets.scriptMask;
    }
    return 1;
}

} /* extern "C" */

#include "battle/BtlMainAccess.h"
#include "shard/W5_W5Match7_BattleMask.h"

extern "C" {

s32 scrGetArg(u32 index);

// Script command: set (argument > 0) or clear the scripted battle mask bits of the main battle state.
u32 FUN_003b851c(void)
{
    s32 enable = scrGetArg(0);
    BtlMainStateA *state = btlGetMainState();
    if (enable > 0) {
        state->stateFlags64.bits |= g_battleMaskPresets.scriptMask;
    } else {
        state->stateFlags64.bits &= ~g_battleMaskPresets.scriptMask;
    }
    return 1;
}

} /* extern "C" */

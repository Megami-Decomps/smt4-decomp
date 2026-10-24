#include "shard/W5_W5Match7_BattleMask.h"

extern "C" {

s32 scrGetArg(u32 index);

s32 scrCommClearBattleMaskBit(void)
{
    s32 bit = scrGetArg(0);
    BattleMaskState *state = btlGetMainState();
    s32 mask = ~(1 << bit);
    state->scriptFlags &= (s64)mask;
    return 1;
}

} /* extern "C" */

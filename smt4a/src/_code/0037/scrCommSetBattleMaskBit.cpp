#include "shard/W5_W5Match7_BattleMask.h"

extern "C" {

s32 scrGetArg(u32 index);

s32 scrCommSetBattleMaskBit(u32 index)
{
    s32 bit = scrGetArg(index);
    BattleMaskState *state = btlGetMainState();
    s32 mask = 1 << bit;
    state->scriptFlags |= (s64)mask;
    return 1;
}

} /* extern "C" */

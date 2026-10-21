/* NON_MATCHING: retail uses `add r0, r0, #19456` where armcc emits `mov r1, r0`. */
#include "shard/W5_W5Match7_BattleMask.h"

extern "C" {

s32 scrGetArg(u32 index);

s32 scrCommClearBattleMaskBit(u32 index)
{
    s32 bit = scrGetArg(index);
    BattleMaskState *state = btlGetMainState();
    s32 mask = ~(1 << bit);
    state->scriptFlags &= (s64)mask;
    return 1;
}

} /* extern "C" */

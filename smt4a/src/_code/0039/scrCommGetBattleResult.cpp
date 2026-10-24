#include "shard/W5_W5Match7_BattleMask.h"

extern "C" {

s32 scrGetArg(u32 index);
s32 FUN_003ea2b0(BattleMaskState *state, s32 value);
void scrSetResult(s32 result);

s32 scrCommGetBattleResult(void)
{
    s32 value = scrGetArg(0);
    s32 result = FUN_003ea2b0(btlGetMainState(), value);
    if (result != 0) {
        scrSetResult(btlGetMainState()->result);
        result = 1;
    }
    return result;
}

} /* extern "C" */

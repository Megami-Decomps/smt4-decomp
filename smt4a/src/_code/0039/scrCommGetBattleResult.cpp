#include "battle/BtlMainAccess.h"

extern "C" {

s32 scrGetArg(u32 index);
s32 btlSummonLoadAndSpawn(BtlMainStateA *state, s32 value);
void scrSetResult(s32 result);

s32 scrCommGetBattleResult(void)
{
    s32 value = scrGetArg(0);
    s32 result = btlSummonLoadAndSpawn(btlGetMainState(), value);
    if (result != 0) {
        scrSetResult(btlGetMainState()->outcome.result);
        result = 1;
    }
    return result;
}

} /* extern "C" */

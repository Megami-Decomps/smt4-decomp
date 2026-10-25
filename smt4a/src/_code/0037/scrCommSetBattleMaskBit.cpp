#include "battle/BtlMainAccess.h"

extern "C" {

s32 scrGetArg(u32 index);

s32 scrCommSetBattleMaskBit(void)
{
    s32 bit = scrGetArg(0);
    BtlMainStateA *state = btlGetMainState();
    s32 mask = 1 << bit;
    state->scriptFlags |= (s64)mask;
    return 1;
}

} /* extern "C" */

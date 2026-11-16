/* NON_MATCHING: retail loads the 64-bit script flags with `ldrd r2, [r1]` (low word r2); the build allocates the low word to r3 and so uses two `ldr`. */
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

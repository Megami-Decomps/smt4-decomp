/* NON_MATCHING: mask-first OR restores retail's `ldrd r2, [r1]` and register use; only the high-word orr operand order differs (retail `orr r2, r3, ip`, here `orr r2, ip, r3`). */
#include "battle/BtlMainAccess.h"

extern "C" {

s32 scrGetArg(u32 index);

/* Script command: sets bit argument 0 of the battle's 64-bit script flags (the bit is sign-extended from 32 bits). */
s32 scrCommSetBattleMaskBit(void)
{
    s32 bit = scrGetArg(0);
    BtlMainStateA *state = btlGetMainState();
    state->scriptFlags = (s64)(1 << bit) | state->scriptFlags;
    return 1;
}

} /* extern "C" */

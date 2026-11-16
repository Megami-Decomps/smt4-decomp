#include "battle/BtlMainAccess.h"

extern "C" {

s32 scrGetArg(u32 index);

/* Script command: sets bit argument 0 of the battle's 64-bit script flags (the bit is sign-extended from 32 bits). */
s32 scrCommSetBattleMaskBit(void)
{
    s32 bit = scrGetArg(0);
    btlGetMainState()->scriptFlags |= 1 << bit;
    return 1;
}

} /* extern "C" */

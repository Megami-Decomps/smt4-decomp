#include "common.h"

extern "C" {

s32 gameFlagIsSet(u32 flag);

/* Returns whether flag 0x4D0 is set. */
u8 FUN_002e2b38(void)
{
    s32 flag;

    flag = gameFlagIsSet(0x4D0);
    return flag != 0;
}

} /* extern "C" */

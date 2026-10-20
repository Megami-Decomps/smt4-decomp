#include "common.h"

extern "C" {

s32 FUN_0018719c(u32 flag);

/* Returns whether flag 0x4D0 is set. */
u8 FUN_002e2b38(void)
{
    s32 flag;

    flag = FUN_0018719c(0x4D0);
    return flag != 0;
}

} /* extern "C" */

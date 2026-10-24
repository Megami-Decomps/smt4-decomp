#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
s32 gamePackedFlagTest(s32 flag);
s32 scrSetResult(s32 value);

/* Script command: returns whether the packed game flag in argument zero is set. */
s32 FUN_0035f630(void)
{
    scrSetResult(gamePackedFlagTest(scrGetArg(0)) != 0);
    return 1;
}

} /* extern "C" */

#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
s32 unlockFlagTest(s32 flag);
s32 scrSetResult(s32 value);

/* Script command: returns whether the unlock flag in argument zero is set. */
s32 FUN_002e40a8(void)
{
    scrSetResult(unlockFlagTest(scrGetArg(0)) != 0);
    return 1;
}

} /* extern "C" */

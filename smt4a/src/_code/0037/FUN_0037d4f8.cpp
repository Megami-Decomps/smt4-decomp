#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
void FUN_003537c8(s32 value);
/* Script command: passes its first argument to FUN_003537c8. */
s32 FUN_0037d4f8(void)
{
    FUN_003537c8(scrGetArg(0));
    return 1;
}
}

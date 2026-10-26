#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
void FUN_00417b70(u16 questIndex);
/* Script command: resets the flag entry named by its first argument. */
s32 FUN_002ed35c(void)
{
    FUN_00417b70(scrGetArg(0));
    return 1;
}
}

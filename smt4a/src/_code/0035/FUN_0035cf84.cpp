#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void FUN_00363bec(s32 value);

/* Script command: passes its first argument to FUN_00363bec. */
s32 FUN_0035cf84(void)
{
    FUN_00363bec(scrGetArg(0));
    return 1;
}
}

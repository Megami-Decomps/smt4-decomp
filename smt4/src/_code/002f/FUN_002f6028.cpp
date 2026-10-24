#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
void FUN_00333e30(s16 value);
/* Script command: passes its first argument to FUN_00333e30 as a halfword. */
s32 FUN_002f6028(void)
{
    FUN_00333e30(scrGetArg(0));
    return 1;
}
}

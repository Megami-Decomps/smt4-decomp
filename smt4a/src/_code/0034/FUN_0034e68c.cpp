#include "common.h"

extern "C" {

s32 FUN_001ba3d4(s32 value);
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);

/* Script command: reports FUN_001ba3d4 of the first argument. */
u32 FUN_0034e68c(void)
{
    scrSetResult(FUN_001ba3d4(scrGetArg(0)));
    return 1;
}

} /* extern "C" */

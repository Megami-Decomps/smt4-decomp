#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
s32 FUN_00255de0(u32 first, s32 second);

/* Script command: returns FUN_00255de0(0, argument). */
u32 FUN_00205c54(void)
{
    scrSetResult(FUN_00255de0(0, scrGetArg(0)));
    return 1;
}

} /* extern "C" */

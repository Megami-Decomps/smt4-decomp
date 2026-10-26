#include "common.h"

extern "C" {

s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
s32 randBetween(s32 first, s32 second);

/* Script command: reports randBetween(0, first argument). */
u32 FUN_001b4c98(void)
{
    scrSetResult(randBetween(0, scrGetArg(0)));
    return 1;
}

} /* extern "C" */

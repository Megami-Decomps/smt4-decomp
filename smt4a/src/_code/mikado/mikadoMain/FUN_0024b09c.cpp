#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
s32 randBetween(u32 first, s32 second);

/* Script command: returns randBetween(0, argument). */
u32 FUN_0024b09c(void)
{
    scrSetResult(randBetween(0, scrGetArg(0)));
    return 1;
}

} /* extern "C" */

#include "common.h"

extern "C" {

s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
s32 FUN_0034ef58(s32 first, s32 second);

/* Script command: reports FUN_0034ef58(0, first argument). */
u32 FUN_002cc2f8(void)
{
    scrSetResult(FUN_0034ef58(0, scrGetArg(0)));
    return 1;
}

} /* extern "C" */

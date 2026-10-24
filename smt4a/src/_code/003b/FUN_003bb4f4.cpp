#include "common.h"

extern "C" {

s32 FUN_0041862c(s32 value);
s32 scrSetResult(s32 value);

/* Script command: returns FUN_0041862c(0) to the script. */
s32 FUN_003bb4f4(void)
{
    scrSetResult(FUN_0041862c(0));
    return 1;
}

} /* extern "C" */

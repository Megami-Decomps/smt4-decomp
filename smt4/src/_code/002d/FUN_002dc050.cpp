#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

s32 flagValueRead(s32 value);

/* Script command: reports flagValueRead of the first argument. */
u32 FUN_002dc050(void)
{
    scrSetResult(flagValueRead(scrGetArg(0)));
    return 1;
}

} /* extern "C" */

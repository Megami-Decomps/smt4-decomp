#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

s32 FUN_0028fb40(s32 value);
s32 scrGetArg(s32 index);

/* Script command: reports FUN_0028fb40 of the first argument. */
u32 FUN_002dc050(void)
{
    scrSetResult(FUN_0028fb40(scrGetArg(0)));
    return 1;
}

} /* extern "C" */

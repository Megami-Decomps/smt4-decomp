#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
s32 FUN_0031d038(u16 value);
s32 scrSetResult(s32 value);

/* Script command: returns FUN_0031d038 of argument zero. */
s32 FUN_0038dc64(void)
{
    scrSetResult(FUN_0031d038(scrGetArg(0)));
    return 1;
}

} /* extern "C" */

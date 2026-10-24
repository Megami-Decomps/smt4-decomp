#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
s32 FUN_00163fd4(u8 id);

/* Script command: returns 1 when FUN_00163fd4 accepts the argument. */
u32 FUN_002ba834(void)
{
    scrSetResult(FUN_00163fd4(scrGetArg(0)) != 0);
    return 1;
}

} /* extern "C" */

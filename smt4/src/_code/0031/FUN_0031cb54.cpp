#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
s32 FUN_0029ea68(u16 id);

/* Script command: returns 1 when FUN_0029ea68 accepts the argument. */
u32 FUN_0031cb54(void)
{
    scrSetResult(FUN_0029ea68(scrGetArg(0)) != 0);
    return 1;
}

} /* extern "C" */

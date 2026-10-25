#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
s32 itemGetFlagBit1(u16 id);

/* Script command: returns 1 when itemGetFlagBit1 accepts the argument. */
u32 FUN_0031cb54(void)
{
    scrSetResult(itemGetFlagBit1(scrGetArg(0)) != 0);
    return 1;
}

} /* extern "C" */

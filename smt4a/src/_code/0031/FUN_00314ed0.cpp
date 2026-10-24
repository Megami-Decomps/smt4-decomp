#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
s32 padButtonIsPressed(u8 button);
void scrSetResult(s32 result);
}

extern "C" s32 FUN_00314ed0(void)
{
    scrSetResult(padButtonIsPressed(scrGetArg(0)) != 0);
    return 1;
}

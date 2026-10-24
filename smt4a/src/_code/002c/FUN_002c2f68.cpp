#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void applyIfIdValid(s32 value);
}

extern "C" s32 FUN_002c2f68(void)
{
    applyIfIdValid(scrGetArg(0));
    return 1;
}

#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void FUN_00377e50(s32 value);
}

extern "C" s32 FUN_0039bba8(void)
{
    FUN_00377e50(scrGetArg(0));
    return 1;
}

#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void objectE0Reset(s32 value);
}

extern "C" s32 FUN_00349124(void)
{
    objectE0Reset(scrGetArg(0));
    return 1;
}

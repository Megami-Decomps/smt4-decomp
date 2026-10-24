#include "common.h"

extern "C" {
extern s32 DAT_0044cfb8;
s32 scrGetArg(u32 index);
s32 jyoucyuGetTableEntry(u32 index);
}

extern "C" s32 FUN_002229b8(void)
{
    s32 value = scrGetArg(0);

    jyoucyuGetTableEntry(0);
    DAT_0044cfb8 = value;
    return 1;
}

#include "common.h"

extern "C" {
extern s32 g_scrConditionRejected;
s32 scrGetArg(u32 index);
s32 jyoucyuGetTableEntry(u32 index);
}

extern "C" s32 FUN_0031d654(void)
{
    s32 value = scrGetArg(0);

    jyoucyuGetTableEntry(0);
    g_scrConditionRejected = value;
    return 1;
}

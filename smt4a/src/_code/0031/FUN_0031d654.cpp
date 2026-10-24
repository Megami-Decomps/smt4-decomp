#include "common.h"

extern "C" {
extern s32 DAT_0058800c;
s32 scrGetArg(u32 index);
s32 jyoucyuGetTableEntry(u32 index);
}

extern "C" s32 FUN_0031d654(void)
{
    s32 value = scrGetArg(0);

    jyoucyuGetTableEntry(0);
    DAT_0058800c = value;
    return 1;
}

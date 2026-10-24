#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void sysClearCachedFlag(void);
s32 FUN_00376fa4(s32 value);
void FUN_0036af24(s32 value);

/* Script command: runs sysClearCachedFlag, then FUN_0036af24 on FUN_00376fa4 of its first argument. */
s32 FUN_0037d618(void)
{
    s32 value = scrGetArg(0);
    sysClearCachedFlag();
    FUN_0036af24(FUN_00376fa4(value));
    return 1;
}
}

#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void sysClearCachedFlag(void);
void FUN_00376fa4(s32 value);
void FUN_0035846c(void);

/* Script command: clears the cached flag, runs FUN_00376fa4 on argument zero, then FUN_0035846c. */
s32 FUN_0037d640(void)
{
    s32 value = scrGetArg(0);
    sysClearCachedFlag();
    FUN_00376fa4(value);
    FUN_0035846c();
    return 1;
}

} /* extern "C" */

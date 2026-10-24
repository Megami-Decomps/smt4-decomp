#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void sysClearCachedFlag(void);
void FUN_00376fa4(s32 value);
void FUN_0036ae68(void);

/* Script command: clears the cached flag, applies the argument and refreshes. */
u32 FUN_0037d5f0(void)
{
    s32 value = scrGetArg(0);

    sysClearCachedFlag();
    FUN_00376fa4(value);
    FUN_0036ae68();
    return 1;
}

} /* extern "C" */

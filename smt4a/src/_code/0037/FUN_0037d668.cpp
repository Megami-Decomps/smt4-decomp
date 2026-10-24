#include "common.h"

extern "C" {

s32 scrGetArg(s32 index);
void sysClearCachedFlag(void);
void FUN_00376fa4(s32 value);

/* Script command: clears the cached flag, then passes the first argument to FUN_00376fa4. */
u32 FUN_0037d668(void)
{
    s32 value = scrGetArg(0);
    sysClearCachedFlag();
    FUN_00376fa4(value);
    return 1;
}

} /* extern "C" */

#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void sysClearCachedFlag(void);
void mapSetActiveEntryId(s32 value);
void FUN_0035846c(void);

/* Script command: clears the cached flag, runs mapSetActiveEntryId on argument zero, then FUN_0035846c. */
s32 FUN_0037d640(void)
{
    s32 value = scrGetArg(0);
    sysClearCachedFlag();
    mapSetActiveEntryId(value);
    FUN_0035846c();
    return 1;
}

} /* extern "C" */

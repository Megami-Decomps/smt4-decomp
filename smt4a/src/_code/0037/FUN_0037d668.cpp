#include "common.h"

extern "C" {

s32 scrGetArg(s32 index);
void sysClearCachedFlag(void);
void mapSetActiveEntryId(s32 value);

/* Script command: clears the cached flag, then passes the first argument to mapSetActiveEntryId. */
u32 FUN_0037d668(void)
{
    s32 value = scrGetArg(0);
    sysClearCachedFlag();
    mapSetActiveEntryId(value);
    return 1;
}

} /* extern "C" */

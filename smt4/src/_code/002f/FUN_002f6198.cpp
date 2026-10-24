#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void sequenceRequestClearDeferred(void);
s32 FUN_0027d8b4(s32 value);
void FUN_002eb5dc(s32 value);

/* Script command: runs sequenceRequestClearDeferred, then FUN_002eb5dc on FUN_0027d8b4 of its first argument. */
s32 FUN_002f6198(void)
{
    s32 value = scrGetArg(0);
    sequenceRequestClearDeferred();
    FUN_002eb5dc(FUN_0027d8b4(value));
    return 1;
}
}

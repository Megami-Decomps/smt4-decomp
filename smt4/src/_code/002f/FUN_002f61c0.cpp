#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void sequenceRequestClearDeferred(void);
void FUN_0027d8b4(s32 value);
void FUN_002eb674(void);

/* Script command: clears the deferred sequence request, runs FUN_0027d8b4 on argument zero, then FUN_002eb674. */
s32 FUN_002f61c0(void)
{
    s32 value = scrGetArg(0);
    sequenceRequestClearDeferred();
    FUN_0027d8b4(value);
    FUN_002eb674();
    return 1;
}

} /* extern "C" */

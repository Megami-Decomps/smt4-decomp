#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void sequenceRequestClearDeferred(void);
s32 mapSetActiveEntryId(s32 value);
void FUN_002eb5dc(s32 value);

/* Script command: runs sequenceRequestClearDeferred, then FUN_002eb5dc on mapSetActiveEntryId of its first argument. */
s32 FUN_002f6198(void)
{
    s32 value = scrGetArg(0);
    sequenceRequestClearDeferred();
    FUN_002eb5dc(mapSetActiveEntryId(value));
    return 1;
}
}

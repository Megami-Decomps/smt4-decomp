#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void sequenceRequestClearDeferred(void);
void mapSetActiveEntryId(s32 value);
void mapSaveSceneReturnSnapshot(void);

/* Script command: clears the deferred sequence request, runs mapSetActiveEntryId on argument zero, then mapSaveSceneReturnSnapshot. */
s32 FUN_002f61c0(void)
{
    s32 value = scrGetArg(0);
    sequenceRequestClearDeferred();
    mapSetActiveEntryId(value);
    mapSaveSceneReturnSnapshot();
    return 1;
}

} /* extern "C" */

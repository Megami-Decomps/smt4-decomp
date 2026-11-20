#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void sysClearCachedFlag(void);
s32 mapSetActiveEntryId(s32 value);
void mapSnapshotTransitionDestination(s32 value);

/* Script command: runs sysClearCachedFlag, then mapSnapshotTransitionDestination on mapSetActiveEntryId of its first argument. */
s32 FUN_0037d618(void)
{
    s32 value = scrGetArg(0);
    sysClearCachedFlag();
    mapSnapshotTransitionDestination(mapSetActiveEntryId(value));
    return 1;
}
}

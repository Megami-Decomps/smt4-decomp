#include "shard/Shard0037.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void sequenceRequestDefer(u32 a, u32 b);
extern void mapSetActiveEntryId(u32 a);
extern void mapSnapshotTransitionDestination(void);

/* Script command: runs sequenceRequestDefer(arg1, arg2), mapSetActiveEntryId(arg0) and mapSnapshotTransitionDestination. */
u32 scrCommRun3(void)
{
    u32 a = scrGetArg(0);
    u32 b = scrGetArg(1);
    u32 c = scrGetArg(2);

    sequenceRequestDefer(b, c);
    mapSetActiveEntryId(a);
    mapSnapshotTransitionDestination();
    return 1;
}

} /* extern "C" */

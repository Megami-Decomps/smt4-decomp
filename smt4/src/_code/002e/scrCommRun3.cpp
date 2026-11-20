#include "common.h"

extern "C" {

int sequenceRequestDefer(u32 a, u32 b);
int mapSetActiveEntryId(u32 a);
int mapSaveSceneReturnSnapshot(void);
extern u32 scrGetArg(u32 index);

u32 scrCommRun3(void)
{
    u32 a = scrGetArg(0);
    u32 b = scrGetArg(1);
    u32 c = scrGetArg(2);

    sequenceRequestDefer(b, c);
    mapSetActiveEntryId(a);
    mapSaveSceneReturnSnapshot();
    return 1;
}

} /* extern "C" */

/* Releases the object's pending handle (if any) and passes the result (1 when there was none) to scrSetResult. */
#include "gamedata/MapSaveBlockA.h"

extern "C" {

void scrSetResult(s32 result);
s32 FUN_003857c8(s32 handle);

u32 scrReleaseHandleResult(void)
{
    MapSaveBlockA *owner = gameFlagsGetBlock();
    scrSetResult(owner->sceneResult != 0 ? FUN_003857c8(owner->sceneResult) : 1);
    return 1;
}

} /* extern "C" */

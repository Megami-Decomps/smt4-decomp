/* Returns 1 if the stage actor is active and its game flag is set, else 0. */
#include "map/MapGimicGlobal.h"

extern "C" {

extern s32 gameFlagIsSet(u32 handle);

u32 FUN_003bf574(void)
{
    MapGimicStageActorA *sub = &g_mapGimic->stageActor;
    if (sub->active != 0) {
        return gameFlagIsSet(sub->flag) != 0;
    }
    return 0;
}

} /* extern "C" */

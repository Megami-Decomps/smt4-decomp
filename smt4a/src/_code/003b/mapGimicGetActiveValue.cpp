#include "map/MapGimicGlobal.h"

extern "C" {

/* The stage actor's g_mapEntries row while it is active, else -1. */
s32 mapGimicGetActiveValue(void)
{
    MapGimicStageActorA *entry = &g_mapGimic->stageActor;
    return entry->active != 0 ? entry->index : -1;
}

} /* extern "C" */

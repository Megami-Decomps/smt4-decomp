#include "shard/W5_W5Match7_SceneState.h"

extern "C" {


s32 mapGimicGetActiveValue(void)
{
    MapGimicEntry *entry = &g_mapGimic->entry;
    return entry->active != 0 ? entry->value : -1;
}

} /* extern "C" */

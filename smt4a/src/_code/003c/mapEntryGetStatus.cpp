#include "shard/W5_W5Match7_SceneState.h"

extern "C" {



s32 mapEntryGetStatus(s32 index)
{
    MapEntry *entry = &g_mapEntries[index];
    return entry != NULL ? entry->status : 1;
}

} /* extern "C" */

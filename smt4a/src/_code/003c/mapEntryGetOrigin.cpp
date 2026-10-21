#include "shard/W5_W5Match7_SceneState.h"

extern "C" {



MapVector mapEntryGetOrigin(s32 index)
{
    MapEntry *entry = &g_mapEntries[index];
    MapVector result;
    result.z = result.y = result.x = 0.0f;
    if (entry != NULL) {
        result = entry->origin;
    }
    return result;
}

} /* extern "C" */

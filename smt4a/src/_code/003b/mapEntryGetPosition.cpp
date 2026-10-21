#include "shard/W5_W5Match7_SceneState.h"

extern "C" {



MapVector mapEntryGetPosition(s32 index)
{
    MapEntry *entry = &g_mapEntries[index];
    MapVector position;
    position.z = position.y = position.x = 0.0f;
    if (entry != NULL) {
        position = entry->position;
    }
    return position;
}

} /* extern "C" */

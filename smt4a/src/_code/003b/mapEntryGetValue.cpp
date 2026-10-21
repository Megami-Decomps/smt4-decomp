#include "shard/W5_W5Match7_SceneState.h"

extern "C" {


f32 mapEntryGetValue(s32 index)
{
    MapEntry *entry = &g_mapEntries[index];
    f32 value = 0.0f;
    if (entry != NULL) {
        value = entry->value;
    }
    return value;
}

} /* extern "C" */

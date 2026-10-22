#include "map/MapSelection.h"
#include "shard/W5_W5Match7_SceneState.h"

extern "C" {

void mapEntrySelect(s32 index)
{
    MapEntry *entry = &g_mapEntries[index];
    if (entry != NULL) {
        g_mapSelection.id = entry->id;
        g_mapSelection.kind = entry->kind;
        g_mapSelection.counter = 0;
        g_mapSelection.flags = entry->flags;
    }
}

} /* extern "C" */

#include "shard/W5_W5Match7_SceneState.h"

extern "C" {



s32 mapEntryGetKind(s32 index)
{
    MapEntry *entry = &g_mapEntries[index];
    return entry != NULL ? entry->kind : 1;
}

} /* extern "C" */

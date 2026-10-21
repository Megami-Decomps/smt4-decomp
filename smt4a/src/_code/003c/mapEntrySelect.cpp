#include "shard/W5_W5Match7_SceneState.h"

extern "C" {

struct MapSelection {
    /* 0x00 */ u32 id;
    /* 0x04 */ u32 kind;
    /* 0x08 */ u32 counter;
    /* 0x0c */ u32 flags;
};
extern MapSelection g_mapSelection;

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

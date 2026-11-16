#include "map/mapEpl.h"

extern "C" {

void effectNodeUpdatePlacedChildren(void *object);

extern MapEpl *g_mapEpl;

/* Calls effectNodeUpdatePlacedChildren on every entry that holds an object. */
void mapEplUpdateEntriesIfAny(void)
{
    MapEplEntry *entry;
    s32 i;

    if (g_mapEpl != NULL) {
        for (i = 0; i < MAP_EPL_ENTRIES; i++) {
            entry = &g_mapEpl->entries[i];
            if (entry->object != NULL) {
                effectNodeUpdatePlacedChildren(entry->object);
            }
        }
    }
}

} /* extern "C" */

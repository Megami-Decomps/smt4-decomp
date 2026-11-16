#include "map/mapEpl.h"

extern "C" {

void effectNodeUpdateTransform(void *object);

extern MapEpl *g_mapEpl;

/* Calls effectNodeUpdateTransform on every entry that holds an object. */
void mapEplUpdateEntries(void)
{
    MapEplEntry *entry;
    s32 i;

    for (i = 0; i < MAP_EPL_ENTRIES; i++) {
        entry = &g_mapEpl->entries[i];
        if (entry->object != NULL) {
            effectNodeUpdateTransform(entry->object);
        }
    }
}

} /* extern "C" */

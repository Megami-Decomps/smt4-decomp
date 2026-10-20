#include "map/mapEpl.h"

extern "C" {

void FUN_0019c0e0(void *object);

extern MapEpl *g_mapEpl;

/* Calls FUN_0019c0e0 on every entry that holds an object. */
void mapEplUpdateEntries(void)
{
    MapEplEntry *entry;
    s32 i;

    for (i = 0; i < MAP_EPL_ENTRIES; i++) {
        entry = &g_mapEpl->entries[i];
        if (entry->object != NULL) {
            FUN_0019c0e0(entry->object);
        }
    }
}

} /* extern "C" */

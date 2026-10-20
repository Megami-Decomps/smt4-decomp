#include "map/mapEpl.h"

extern "C" {

void FUN_00182540(void *object);

extern MapEpl *g_mapEpl;

/* Calls FUN_00182540 on every entry that holds an object. */
void mapEplUpdateEntriesIfAny(void)
{
    MapEplEntry *entry;
    s32 i;

    if (g_mapEpl != NULL) {
        for (i = 0; i < MAP_EPL_ENTRIES; i++) {
            entry = &g_mapEpl->entries[i];
            if (entry->object != NULL) {
                FUN_00182540(entry->object);
            }
        }
    }
}

} /* extern "C" */

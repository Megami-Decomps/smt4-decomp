#include "map/mapEpl.h"

extern "C" {

void asdMemFree(void *block);
void FUN_002c2264(void *object);

extern MapEpl *g_mapEpl;

/* Frees every entry's object and data, then the table itself. */
void mapEplFree(void)
{
    MapEplEntry *entry;
    s32 i;

    for (i = 0; i < MAP_EPL_ENTRIES; i++) {
        entry = &g_mapEpl->entries[i];
        if (entry->object != NULL) {
            FUN_002c2264(entry->object);
            entry->object = NULL;
        }
        if (entry->data != NULL) {
            asdMemFree(entry->data);
            entry->data = NULL;
        }
    }
    if (g_mapEpl != NULL) {
        asdMemFree(g_mapEpl);
        g_mapEpl = NULL;
    }
}

} /* extern "C" */

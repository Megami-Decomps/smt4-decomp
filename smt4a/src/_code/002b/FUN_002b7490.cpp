#include "map/mapEplExt.h"

extern "C" {

void FUN_0019c0e0(void *object);

extern MapEplExt *g_eplSlots;

void FUN_002b7490(void)
{
    MapEplExtEntry *entry;
    s32 i;

    for (i = 0; i < MAP_EPL_EXT_ENTRIES; i++) {
        entry = &g_eplSlots->entries[i];
        if (entry->object != NULL) {
            FUN_0019c0e0(entry->object);
        }
    }
}

} /* extern "C" */

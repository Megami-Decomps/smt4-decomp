#include "map/mapGimic.h"

extern "C" {

s32 FUN_004ff9b4(u32 handle);

extern MapGimic *g_mapGimic;

/* True when an entry with the given id is active and FUN_004ff9b4 accepts its object. */
bool FUN_0033bed4(s32 id)
{
    MapGimicEntry *entry;
    s32 i;

    for (i = 0; i < MAP_GIMIC_ENTRIES; i++) {
        entry = &g_mapGimic->entries[i];
        if (entry->active != 0 && entry->id == id && FUN_004ff9b4(entry->obj->handle) != 0) {
            return true;
        }
    }
    return false;
}

} /* extern "C" */

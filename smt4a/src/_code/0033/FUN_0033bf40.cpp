#include "map/mapGimic.h"

extern "C" {

s32 FUN_004ffa14(u32 handle);

extern MapGimic *DAT_00580ca0;

/* True when an entry with the given id is active and FUN_004ffa14 accepts its object. */
bool FUN_0033bf40(s32 id)
{
    MapGimicEntry *entry;
    s32 i;

    for (i = 0; i < MAP_GIMIC_ENTRIES; i++) {
        entry = &DAT_00580ca0->entries[i];
        if (entry->active != 0 && entry->id == id && FUN_004ffa14(entry->obj->handle) != 0) {
            return true;
        }
    }
    return false;
}

} /* extern "C" */

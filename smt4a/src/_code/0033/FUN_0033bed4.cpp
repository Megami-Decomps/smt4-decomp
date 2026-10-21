#include "map/mapGimic.h"

extern "C" {

s32 animationIsClipComplete(u32 handle);

extern MapGimic *g_mapGimic;

/* True when an entry with the given id is active and animationIsClipComplete accepts its object. */
bool FUN_0033bed4(s32 id)
{
    MapGimicEntry *entry;
    s32 i;

    for (i = 0; i < MAP_GIMIC_ENTRIES; i++) {
        entry = &g_mapGimic->entries[i];
        if (entry->active != 0 && entry->id == id && animationIsClipComplete(entry->obj->handle) != 0) {
            return true;
        }
    }
    return false;
}

} /* extern "C" */

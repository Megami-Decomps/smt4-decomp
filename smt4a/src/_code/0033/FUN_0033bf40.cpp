#include "map/MapGimicGlobal.h"
#include "Model/MoriModelContent.h"

extern "C" {

s32 FUN_004ffa14(Obj557b18 *body);


/* True when an entry with the given id is active and FUN_004ffa14 accepts its object. */
bool FUN_0033bf40(s32 id)
{
    MapGimicEntryA *entry;
    s32 i;

    for (i = 0; i < MAP_GIMIC_ENTRIES; i++) {
        MapGimicA *gimic = g_mapGimic;
        entry = &gimic->entries[i];
        if (entry->active != 0 && entry->kind == id && FUN_004ffa14(entry->obj->body) != 0) {
            return true;
        }
    }
    return false;
}

} /* extern "C" */

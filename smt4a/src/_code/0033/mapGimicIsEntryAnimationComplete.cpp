#include "map/MapGimicGlobal.h"
#include "Model/MoriModelContent.h"

extern "C" {

s32 animationIsClipComplete(Obj557b18 *body);


/* True when an entry with the given id is active and animationIsClipComplete accepts its object. */
bool mapGimicIsEntryAnimationComplete(s32 id)
{
    for (s32 i = 0; i < MAP_GIMIC_ENTRIES; i++) {
        MapGimicA *gimic = g_mapGimic;
        MapGimicEntryA *entry = &gimic->entries[i];
        if (entry->active != 0 && entry->kind == id && animationIsClipComplete(entry->obj->body) != 0) {
            return true;
        }
    }
    return false;
}

} /* extern "C" */

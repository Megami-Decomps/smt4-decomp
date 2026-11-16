#include "map/mapGimic.h"

extern "C" {

s32 animationChannelsAllFinished(u32 handle);

extern MapGimic *g_mapGimic;

/* True when a slot with the given id is active and animationChannelsAllFinished accepts its object. */
bool mapGimicIsActiveHandleReady(s32 id)
{
    for (s32 i = 0; i < MAP_GIMIC_SLOTS; i++) {
        MapGimic *gimic = g_mapGimic;
        MapGimicSlot *slot = &gimic->slots[i];
        if (slot->active != 0 && slot->id == id && animationChannelsAllFinished(slot->obj->handle) != 0) {
            return true;
        }
    }
    return false;
}

} /* extern "C" */

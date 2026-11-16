#include "map/mapGimic.h"

extern "C" {

s32 FUN_004ffba8(u32 handle);

extern MapGimic *g_mapGimic;

/* True when a slot with the given id is active and FUN_004ffba8 accepts its object. */
bool mapGimicIsActiveHandleReady(s32 id)
{
    for (s32 i = 0; i < MAP_GIMIC_SLOTS; i++) {
        MapGimic *gimic = g_mapGimic;
        MapGimicSlot *slot = &gimic->slots[i];
        if (slot->active != 0 && slot->id == id && FUN_004ffba8(slot->obj->handle) != 0) {
            return true;
        }
    }
    return false;
}

} /* extern "C" */

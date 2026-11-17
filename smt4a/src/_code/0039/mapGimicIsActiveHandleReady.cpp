#include "map/MapGimicGlobal.h"
#include "Model/MoriModelContent.h"

extern "C" {

s32 animationChannelsAllFinished(Obj557b18 *body);


/* True when a slot with the given id is active and animationChannelsAllFinished accepts its object. */
bool mapGimicIsActiveHandleReady(s32 id)
{
    for (s32 i = 0; i < MAP_GIMIC_SLOTS; i++) {
        MapGimicA *gimic = g_mapGimic;
        MapGimicSlotA *slot = &gimic->slots[i];
        if (slot->active != 0 && slot->id == id && animationChannelsAllFinished(slot->obj->body) != 0) {
            return true;
        }
    }
    return false;
}

} /* extern "C" */

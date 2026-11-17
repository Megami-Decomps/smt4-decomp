#include "map/MapGimicGlobal.h"
#include "Model/MoriModelContent.h"
#include "gfx/ControllerModel.h"

extern "C" {

// Start motion on every active map gimmick with the requested id.
void mapGimicStartMotionById(s32 id, u32 motion)
{
    for (s32 index = 0; index < MAP_GIMIC_SLOTS; ++index) {
        MapGimicA *table = g_mapGimic;
        MapGimicSlotA *slot = &table->slots[index];
        if (slot->active != 0 && slot->id == id) {
            modelPlayClip(slot->obj->body, motion, 2, 0.0f, 0.0f);
        }
    }
}
}

#include "map/MapGimicGlobal.h"
#include "Model/MoriModelContent.h"
#include "gfx/ControllerModel.h"

extern "C" {

void FUN_003ae110(s32 id, u32 animation, u32 value, s32 delay)
{
    for (s32 index = 0; index < MAP_GIMIC_SLOTS; ++index) {
        MapGimicA *gimic = g_mapGimic;
        MapGimicSlotA *slot = &gimic->slots[index];
        if (slot->active && slot->id == id) {
            moriModelUnitStartMaterialAnimation(slot->obj->body, animation, 2, 0.0f);
            slot->animationValue = value;
            slot->animationId = (s16)animation;
            slot->requested = 1;
            slot->delay = (s16)delay;
        }
    }
}
}

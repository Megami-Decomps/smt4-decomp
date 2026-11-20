#include "map/MapGimicGlobal.h"
#include "Model/MoriModelContent.h"
#include "gfx/ControllerModel.h"

extern "C" {

/* Calls motionPlayerStartBlended (mode 2, both float arguments 0) on every active map gimic whose id is `id`. */
void FUN_003a288c(s32 id, u32 arg)
{
    s32 i;

    for (i = 0; i < MAP_GIMIC_SLOTS; i++) {
        MapGimicA *map = g_mapGimic;
        MapGimicSlotA *gimic = &map->slots[i];

        if (gimic->active != 0 && gimic->id == id) {
            motionPlayerStartBlended(gimic->obj->body, arg, 2, 0.0f, 0.0f);
        }
    }
}

} /* extern "C" */

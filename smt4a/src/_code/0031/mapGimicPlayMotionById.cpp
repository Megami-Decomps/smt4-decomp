#include "map/MapGimicGlobal.h"
#include "Model/MoriModelContent.h"
#include "gfx/ControllerModel.h"

extern "C" {

// Select motion on the first active map gimmick with the requested id.
void mapGimicPlayMotionById(s32 id, u32 motion)
{
    for (s32 index = 0; index < MAP_GIMIC_ENTRIES; ++index) {
        MapGimicEntryA *entry = &g_mapGimic->entries[index];
        if (entry->active != 0 && entry->kind == id) {
            moriModelUnitStartMaterialAnimation(entry->obj->body, motion, 2, 0.0f);
            return;
        }
    }
}
}

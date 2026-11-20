#include "map/MapGimicGlobal.h"
#include "Model/MoriModelContent.h"
#include "gfx/ControllerModel.h"

extern "C" {

void mapGimicPlayEntryAnimation(s32 id, u32 action)
{
    for (s32 index = 0; index < MAP_GIMIC_ENTRIES; ++index) {
        const MapGimicEntryA* entry = &g_mapGimic->entries[index];
        if (entry->active != 0 && entry->kind == id) {
            motionPlayerStartBlended(entry->obj->body, action, 2, 0.0f, 0.0f);
            return;
        }
    }
}
}

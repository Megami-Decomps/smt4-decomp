#include "map/mapGimic.h"

extern "C" {
extern MapGimic *g_mapGimic;
void FUN_003fd7c0(u32 controller, u32 motion, s32 mode, f32 blend);

// Select motion on the first active map gimmick with the requested id.
void mapGimicPlayMotionById(s32 id, u32 motion)
{
    for (s32 index = 0; index < MAP_GIMIC_ENTRIES; ++index) {
        MapGimicEntry *entry = &g_mapGimic->entries[index];
        if (entry->active != 0 && entry->id == id) {
            FUN_003fd7c0(entry->obj->handle, motion, 2, 0.0f);
            return;
        }
    }
}
}

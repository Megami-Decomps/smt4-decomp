#include "map/mapGimic.h"

extern "C" {
extern MapGimic* g_mapGimic;
void FUN_003fd924(u32 handle, u32 action, u8 mode, f32 frame, f32 blend);

void mapGimicPlayEntryAnimation(s32 id, u32 action)
{
    for (s32 index = 0; index < MAP_GIMIC_ENTRIES; ++index) {
        const MapGimicEntry* entry = &g_mapGimic->entries[index];
        if (entry->active != 0 && entry->id == id) {
            FUN_003fd924(entry->obj->handle, action, 2, 0.0f, 0.0f);
            return;
        }
    }
}
}

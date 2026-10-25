#include "map/mapGimic.h"

extern "C" {
extern MapGimic *g_mapGimic;
void FUN_003fd7c0(u32 handle, u32 animation, u32 mode, f32 time);

void FUN_003ae110(s32 id, u32 animation, u32 value, s32 delay)
{
    for (s32 index = 0; index < MAP_GIMIC_SLOTS; ++index) {
        MapGimic *gimic = g_mapGimic;
        MapGimicSlot *slot = &gimic->slots[index];
        if (slot->active && slot->id == id) {
            FUN_003fd7c0(slot->obj->handle, animation, 2, 0.0f);
            slot->unk0C = value;
            slot->animationId = (s16)animation;
            slot->requested = 1;
            slot->delay = (s16)delay;
        }
    }
}
}

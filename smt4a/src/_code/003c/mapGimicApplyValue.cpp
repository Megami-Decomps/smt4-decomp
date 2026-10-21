#include "shard/W5_W5Match7_SceneState.h"

extern "C" {

void FUN_003fe86c(void *object, s32 value, s32 mode, f32 x, f32 y);

void mapGimicApplyValue(s32 value)
{
    MapGimicEntry *entry = &g_mapGimic->entry;
    if (entry->active != 0) {
        FUN_003fe86c(entry->resource->object, value, 2, 0.0f, 0.0f);
    }
}

} /* extern "C" */

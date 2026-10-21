#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern GxPresetVectors g_asdGxPresets;

/* Stores a four-component graphics preset. */
void FUN_00105e10(u32 index, f32 x, f32 y, f32 z, f32 w)
{
    Vector4 value = {x, y, z, w};
    g_asdGxPresets.vectors[index] = value;
}

} /* extern "C" */

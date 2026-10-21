#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern GxPresetDepth g_asdGxPresets;

/* Returns the current graphics depth preset. */
f32 FUN_00105e00(void)
{
    return g_asdGxPresets.depth;
}

} /* extern "C" */

#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern GxPresetDepth g_asdGxPresets;

/* Returns the current graphics depth preset. */
f32 FUN_0013a5e0(void)
{
    return g_asdGxPresets.depth;
}

} /* extern "C" */

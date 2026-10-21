#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern PresetEnableWords g_asdGxPresets;

/* Returns the selected graphics preset word. */
u32 FUN_001869c4(u32 kind)
{
    if (kind == 0 || kind == 1) {
        return g_asdGxPresets.first;
    }
    if (kind == 2) {
        return g_asdGxPresets.second;
    }
    return 0;
}

} /* extern "C" */

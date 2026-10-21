#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern GxPresetState g_asdGxPresets;

/* Advances the graphics preset index. */
void asdGxAdvancePreset(void)
{
    ++g_asdGxPresets.nextPreset;
}

} /* extern "C" */

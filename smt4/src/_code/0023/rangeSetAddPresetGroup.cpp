/* NON_MATCHING: set pointer and preset-table base occupy r6/r7 instead of retail r7/r6, changing entry addressing and argument scheduling. Candidate O2. */
#include "shard/W6_W6Match2_RangePresets.h"

extern "C" {
u32 FUN_002387f8(RangeSet*, u16, u16);
extern RangePresetGroup g_rangePresetGroups[];
extern RangePreset g_rangePresets[];

// Add a preset group's inclusive ranges in reverse order, stopping on failure.
u32 rangeSetAddPresetGroup(RangeSet* set, s32 groupIndex)
{
    RangePresetGroup* group = &g_rangePresetGroups[groupIndex];
    for (s32 i = group->first + group->count - 1; i >= group->first; --i) {
        RangePreset* range = &g_rangePresets[i];
        if (FUN_002387f8(set, range->first, range->last) == 0) {
            return 0;
        }
    }
    return 1;
}
}

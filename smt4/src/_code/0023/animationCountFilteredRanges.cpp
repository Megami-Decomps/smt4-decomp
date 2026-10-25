/* NON_MATCHING: range pointer setup and weight-filter branches differ from retail's shared switch tail. */
#include "shard/W5_W5Match2_AnimationFilter.h"
extern "C" {
/* Count selected range entries according to the requested weight category. */
s32 animationCountFilteredRanges(const AnimationFilterTable *table, u32 range, s32 category)
{
    const AnimationFilterRange *selection = &table->ranges[range];
    u32 first, last;
    switch (category) {
    case 4: case 6:
        first = selection->first + selection->count;
        last = first - 1 + selection->extraCount;
        break;
    case 5:
        first = selection->first;
        last = first - 1 + selection->count;
        return last - first + 1;
    default:
        return 0;
    }
    s32 count = 0;
    for (s32 index = first; index <= last; ++index) {
        s32 weight = table->entries[index].weightBits;
        if ((category == 4 && weight != 0x3F800000) || (category == 6 && weight >= 0x3F800000)) ++count;
    }
    return count;
}
}

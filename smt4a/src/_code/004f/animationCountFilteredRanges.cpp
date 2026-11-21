/* NON_MATCHING: retail keeps the category tests inside the scan and indexes entries[index] on each pass (signed index <= last); armcc here strength-reduces the scan into a pointer walk with a count-down. */
#include "shard/W5_W5Match2_AnimationFilter.h"
extern "C" {
/* Count selected range entries according to the requested weight category. */
s32 animationCountFilteredRanges(const AnimationFilterTable *table, u32 range, s32 category)
{
    s32 first, last;
    switch (category) {
    case 4: case 6:
        first = table->ranges[range].first + table->ranges[range].count;
        last = first - 1 + table->ranges[range].extraCount;
        break;
    case 5:
        first = table->ranges[range].first;
        last = first - 1 + table->ranges[range].count;
        break;
    default:
        return 0;
    }
    if (category == 5)
        return last - first + 1;
    s32 count = 0;
    for (s32 index = first; index <= last; ++index) {
        const AnimationFilterEntry *entry = &table->entries[index];
        if ((entry->weight != 1.0f && category == 6) || (entry->weight >= 1.0f && category == 4))
            ++count;
    }
    return count;
}
}

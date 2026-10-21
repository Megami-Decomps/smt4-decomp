/* NON_MATCHING: compiler hoists the sentinel address and lays out the range loop before the common failure return; retail retains the owner and outlines the loop after both returns. */
#include "shard/W6_W6Match6_IntervalList.h"

struct ValueRangeSet {
    u8 unk00[4];
    u8 mode; // 0x04
    u8 unk05;
    u16 single; // 0x06
    RangeLink ranges; // 0x08
};

extern "C" u32 FUN_003fc7dc(const ValueRangeSet *set, u32 value)
{
    if (set->mode == 2) {
        if (set->single == value)
            return 1;
    } else if (set->mode == 3) {
        for (const RangeLink *link = set->ranges.next; link != &set->ranges; link = link->next) {
            const RangeNode *node = static_cast<const RangeNode *>(link);
            if (node->range.first <= value && value <= node->range.last)
                return 1;
        }
    }
    return 0;
}

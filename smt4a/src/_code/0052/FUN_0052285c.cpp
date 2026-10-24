/* NON_MATCHING: loop body matches; retail places the shared return-0 block before the range loop. */
#include "common.h"

struct IdRange {
    u16 low;  // 0x00
    u16 high; // 0x02

    bool contains(u32 value) const { return low <= value && value <= high; }
};

struct RangeNode {
    RangeNode *prev; // 0x00
    RangeNode *next; // 0x04
    IdRange range;   // 0x08
};

struct IdMatcher {
    u8 unk00[4];
    u8 mode;         // 0x04, 2 = single id, 3 = list of ranges
    u8 unk05;
    u16 id;          // 0x06
    RangeNode ranges; // 0x08, list sentinel
};

extern "C" {

// True when `value` is the matcher's single id, or lies inside one of its [low, high] ranges.
u32 FUN_0052285c(IdMatcher *matcher, u32 value)
{
    if (matcher->mode == 2) {
        if (matcher->id == value) {
            return 1;
        }
    } else if (matcher->mode == 3) {
        RangeNode *end = &matcher->ranges;
        for (RangeNode *node = end->next; node != end; node = node->next) {
            if (node->range.contains(value)) {
                return 1;
            }
        }
    }
    return 0;
}

} /* extern "C" */

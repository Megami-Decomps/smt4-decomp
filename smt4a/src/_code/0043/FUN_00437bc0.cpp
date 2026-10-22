/* NON_MATCHING: link/node register sharing, endpoint branch placement, and call padding differ. */
#include "shard/W6_W6Match6_IntervalList.h"
#include <new>

extern "C" {
void FUN_004387bc(void* allocator, RangeNode* node, u32 count);
RangeNode* FUN_004387f0(void* allocator, u32 count);

// Reserve one id by trimming, unlinking, or splitting an inclusive free interval.
u32 FUN_00437bc0(RangeSet* ranges, u32 value)
{
    for (RangeLink* link = ranges->next; link != ranges; link = link->next) {
        RangeNode* node = static_cast<RangeNode*>(link);
        u16 first = node->range.first;
        u16 last = node->range.last;
        if (first == value) {
            if (last == value) {
                node->unlink();
                FUN_004387bc(ranges->allocator, node, 1);
                return 1;
            }
            node->range.first = first + 1;
            return 1;
        }
        if (last == value) {
            node->range.last = last - 1;
            return 1;
        }
        if (first > value || value > last) {
            continue;
        }
        node->range.last = value - 1;
        RangeLink* following = node->next;
        RangeNode* inserted = FUN_004387f0(ranges->allocator, 1);
        if (inserted == NULL) {
            return 0;
        }
        new (inserted) RangeNode(following);
        inserted->range.first = value + 1;
        inserted->range.last = last;
        return 1;
    }
    return 1;
}
}

/* NON_MATCHING: iterator registers, loop test placement, split-allocation checks and branch layout differ. */
#include "shard/W6_W6Match6_IntervalList.h"
#include <new>

extern "C" {
void FUN_004387bc(void *, RangeNode *, u32);
RangeNode *FUN_004387f0(void *, u32);

/* Remove every excluded inclusive interval, splitting destination nodes as needed. */
u32 FUN_00437aa8(RangeSet *ranges, const RangeSet *excluded)
{
    RangeLink *link = ranges->next;
    const RangeLink *exclusion = excluded->next;
    while (link != ranges && exclusion != excluded) {
        RangeNode *node = static_cast<RangeNode *>(link);
        const RangeNode *remove = static_cast<const RangeNode *>(exclusion);
        u16 first = node->range.first;
        u16 start = remove->range.first;
        u16 last = node->range.last;
        u16 end = remove->range.last;
        if (first == start) {
            if (last <= end) {
                RangeLink *next = node->next;
                node->unlink();
                FUN_004387bc(ranges->allocator, node, 1);
                link = next;
            } else {
                node->range.first = end + 1;
                exclusion = exclusion->next;
            }
        } else if (first < start) {
            if (last < start) {
                link = link->next;
                continue;
            }
            node->range.last = start - 1;
            if (last <= end) {
                link = link->next;
                continue;
            }
            RangeLink *following = node->next;
            RangeNode *split = FUN_004387f0(ranges->allocator, 1);
            if (split == NULL)
                return 0;
            new (split) RangeNode(following);
            split->range.first = end + 1;
            split->range.last = last;
            link = split;
            exclusion = exclusion->next;
        } else {
            if (first <= end) {
                if (last <= end) {
                    RangeLink *next = node->next;
                    node->unlink();
                    FUN_004387bc(ranges->allocator, node, 1);
                    link = next;
                    continue;
                }
                node->range.first = end + 1;
                continue;
            }
            exclusion = exclusion->next;
        }
    }
    return 1;
}
}

/* NON_MATCHING: Endpoint narrowing hoists into saved registers; allocator insertion and unlink load grouping differ. */
#include "shard/W6_W6Match6_IntervalList.h"
#include <new>

extern "C" {
void *FUN_004387f0(void *allocator, u32 count);
void FUN_004387bc(void *allocator, RangeNode *node, u32 count);
}

static __inline bool insertInclusiveRangeBefore(RangeSet *set, RangeLink *following, u32 first, u32 last)
{
    void *memory = FUN_004387f0(set->allocator, 1);
    if (memory == NULL) {
        return false;
    }
    RangeNode *node = new (memory) RangeNode(following);
    node->range.first = first;
    node->range.last = last;
    return true;
}

/* Unions an inclusive interval into the ordered set, coalescing overlapping or adjacent ranges. */
extern "C" u32 FUN_00437cac(RangeSet *set, u32 first, u32 last)
{
    bool extended = false;
    RangeLink *link = set->next;
    while (link != set) {
        RangeNode *node = static_cast<RangeNode *>(link);
        u32 nodeFirst = node->range.first;
        u16 nodeLast = node->range.last;
        if (nodeFirst <= first && last <= nodeLast) {
            return 1;
        }
        if (first <= nodeFirst && nodeLast <= last) {
            RangeLink *next = node->next;
            node->unlink();
            FUN_004387bc(set->allocator, node, 1);
            link = next;
            continue;
        }
        if ((nodeFirst <= first && first <= nodeLast) ||
            (nodeLast != 0xFFFF && (u32)nodeLast + 1 == first)) {
            extended = true;
            node->range.last = last;
        } else if ((nodeFirst <= last && last <= nodeLast) ||
                   (last != 0xFFFF && last + 1 == nodeFirst)) {
            if (extended) {
                RangeLink *next = node->next;
                node->unlink();
                FUN_004387bc(set->allocator, node, 1);
                static_cast<RangeNode *>(next->previous)->range.last = nodeLast;
            } else {
                node->range.first = first;
            }
            return 1;
        } else if (last < nodeFirst) {
            if (extended) {
                return 1;
            }
            return insertInclusiveRangeBefore(set, node, first, last);
        }
        link = node->next;
    }
    if (extended) {
        return 1;
    }
    return insertInclusiveRangeBefore(set, set, first, last);
}

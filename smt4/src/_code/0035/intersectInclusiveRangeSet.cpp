/* NON_MATCHING: allocation/constructor checks fold and identical insert tails merge; iterator registers and exit layout differ; -O2 candidate. */
#include "shard/W6_W6Match6_IntervalList.h"
#include <new>

extern "C" {
void FUN_00238170(void *, RangeNode *, u32);
void *FUN_00238aac(void *, u32);
}

static __inline RangeLink *eraseRange(RangeSet *set, RangeNode *node)
{
    RangeLink *next = node->next;
    node->unlink();
    FUN_00238170(set->allocator, node, 1);
    return next;
}

static __inline RangeNode *insertRangeAfter(RangeSet *set, RangeLink *node)
{
    RangeLink *next = node->next;
    return new (FUN_00238aac(set->allocator, 1)) RangeNode(next);
}

extern "C" u32 intersectInclusiveRangeSet(RangeSet *set, const RangeSet *other)
{
    RangeLink *node = set->next;
    const RangeLink *limit = other->next;
    while (node != set) {
        if (limit == other) {
            do {
                node = eraseRange(set, (RangeNode *)node);
            } while (node != set);
            return 1;
        }
        RangeNode *current = (RangeNode *)node;
        const RangeNode *bound = (const RangeNode *)limit;
        u16 first = current->range.first, end = current->range.last;
        u16 otherFirst = bound->range.first, otherEnd = bound->range.last;
        if (first == otherFirst) {
            if (end == otherEnd) {
                node = node->next;
                limit = limit->next;
            } else if (end < otherEnd) {
                node = node->next;
            } else {
                current->range.last = otherEnd;
                RangeNode *remainder = insertRangeAfter(set, node);
                if (!remainder)
                    return 0;
                remainder->range.first = otherEnd + 1;
                remainder->range.last = end;
                node = remainder;
                limit = limit->next;
            }
        } else if (first < otherFirst) {
            if (end < otherFirst) {
                node = eraseRange(set, current);
            } else {
                current->range.first = otherFirst;
                if (end <= otherEnd) {
                    node = node->next;
                } else {
                    current->range.last = otherEnd;
                    RangeNode *remainder = insertRangeAfter(set, node);
                    if (!remainder)
                        return 0;
                    remainder->range.first = otherEnd + 1;
                    remainder->range.last = end;
                    node = remainder;
                    limit = limit->next;
                }
            }
        } else if (otherEnd < first) {
            limit = limit->next;
        } else if (end <= otherEnd) {
            node = node->next;
        } else {
            current->range.last = otherEnd;
            RangeNode *remainder = insertRangeAfter(set, node);
            if (!remainder)
                return 0;
            remainder->range.first = otherEnd + 1;
            remainder->range.last = end;
            node = remainder;
            limit = limit->next;
        }
    }
    return 1;
}

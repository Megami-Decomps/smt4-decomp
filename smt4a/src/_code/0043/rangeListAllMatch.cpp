#include "common.h"

struct RangeListNode {
    RangeListNode *previous; // 0x00
    RangeListNode *next; // 0x04
    u16 first; // 0x08
    u16 last; // 0x0a
};

extern "C" s32 rangeSetUnionInclusive(u32, u16, u16);

// Require every range in the circular list to pass the range predicate.
extern "C" u32 rangeListAllMatch(u32 context, RangeListNode *sentinel)
{
    for (RangeListNode *node = sentinel->next; node != sentinel; node = node->next) {
        if (rangeSetUnionInclusive(context, node->first, node->last) == 0)
            return 0;
    }
    return 1;
}

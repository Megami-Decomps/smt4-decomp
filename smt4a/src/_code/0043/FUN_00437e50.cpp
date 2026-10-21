#include "common.h"

struct RangeListNode {
    RangeListNode *previous; // 0x00
    RangeListNode *next; // 0x04
    u16 first; // 0x08
    u16 last; // 0x0a
};

extern "C" s32 FUN_00437cac(u32, u16, u16);

// Require every range in the circular list to pass the range predicate.
extern "C" u32 FUN_00437e50(u32 context, RangeListNode *sentinel)
{
    for (RangeListNode *node = sentinel->next; node != sentinel; node = node->next) {
        if (FUN_00437cac(context, node->first, node->last) == 0)
            return 0;
    }
    return 1;
}

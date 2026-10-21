#include "common.h"

extern "C" {

struct SortEntry {
    /* 0x00 */ u16 id;
    /* 0x02 */ s16 priority;
    /* 0x04 */ s8 kind;
};

s32 uiComparePriorityKindAndId(const SortEntry *left, const SortEntry *right)
{
    s32 order = right->priority - left->priority;
    if (order == 0) {
        order = right->kind - left->kind;
        if (order == 0) {
            order = left->id - right->id;
        }
    }
    return order;
}

} /* extern "C" */

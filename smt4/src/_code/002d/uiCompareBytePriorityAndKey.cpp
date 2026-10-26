#include "common.h"

extern "C" {

struct SortEntry {
    /* 0x00 */ u8 priority;
    /* 0x01 */ u8 key;
};

s32 uiCompareBytePriorityAndKey(const SortEntry *left, const SortEntry *right)
{
    s32 order = left->priority - right->priority;
    if (order == 0) {
        order = left->key - right->key;
    }
    return order;
}

} /* extern "C" */

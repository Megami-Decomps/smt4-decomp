/* NON_MATCHING: retail uses `ldrh r2, [r1, #2]` where armcc emits `mov r2, r0`. */
#include "common.h"

extern "C" {

struct SortEntry {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ u16 priority;
    /* 0x04 */ u8 key;
};

s32 uiComparePriorityAndKey(const SortEntry *left, const SortEntry *right)
{
    s32 order = right->priority - left->priority;
    return order != 0 ? order : left->key - right->key;
}

} /* extern "C" */

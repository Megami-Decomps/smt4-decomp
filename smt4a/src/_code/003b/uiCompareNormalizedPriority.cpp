#include "common.h"

extern "C" {

struct SortEntry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s8 priority;
    /* 0x05 */ u8 unk05;
    /* 0x06 */ u16 key;
};

s32 uiCompareNormalizedPriority(const SortEntry *left, const SortEntry *right)
{
    s32 leftPriority = left->priority;
    s32 leftKey = left->key;
    s32 rightPriority = right->priority;
    if (leftPriority == 0) {
        leftPriority = -99;
        leftKey = 99;
    }
    s32 rightKey = right->key;
    if (rightPriority == 0) {
        rightPriority = -99;
        rightKey = 99;
    }
    s32 order = rightPriority - leftPriority;
    return order != 0 ? order : leftKey - rightKey;
}

} /* extern "C" */

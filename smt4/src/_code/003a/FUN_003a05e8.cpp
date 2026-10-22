/* NON_MATCHING: Comparator locals use a different saved-register allocation and omit retail's extra right-entry pointer copy on a tie. */
#include "common.h"

extern "C" {
s32 contentGetKindValue(u16 id);
s32 FUN_00230f44(const u16 *entry);
s32 FUN_002ae3c0(u16 id);

/* Sorts selected content kinds by descending kind value, then by the entry's secondary key. */
s32 FUN_003a05e8(const u16 *left, const u16 *right)
{
    s32 leftValue = 0;
    u16 leftId = *left;
    u16 rightId = *right;
    s32 rightValue = 0;
    s32 kind = FUN_002ae3c0(leftId);
    if (kind == 2 || kind == 3 || kind == 8) {
        leftValue = contentGetKindValue(leftId);
    }
    kind = FUN_002ae3c0(rightId);
    if (kind == 2 || kind == 3 || kind == 8) {
        rightValue = contentGetKindValue(rightId);
    }
    s32 order = rightValue - leftValue;
    if (order == 0) {
        order = FUN_00230f44(left) - FUN_00230f44(right);
    }
    return order;
}
}

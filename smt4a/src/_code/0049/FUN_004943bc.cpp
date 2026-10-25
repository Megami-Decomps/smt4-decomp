/* NON_MATCHING: Comparator locals use a different saved-register allocation and omit retail's extra right-entry pointer copy on a tie. */
#include "common.h"

extern "C" {
s32 contentGetUpgradedKindValue(u16 id);
u16 FUN_0049c9a0(const u16 *entry);
s32 FUN_00192718(u16 id);

/* Sorts selected content kinds by descending kind value, then by the entry's secondary key. */
s32 FUN_004943bc(const u16 *left, const u16 *right)
{
    s32 leftValue = 0;
    u16 leftId = *left;
    u16 rightId = *right;
    s32 rightValue = 0;
    s32 kind = FUN_00192718(leftId);
    if (kind == 2 || kind == 3 || kind == 8) {
        leftValue = contentGetUpgradedKindValue(leftId);
    }
    kind = FUN_00192718(rightId);
    if (kind == 2 || kind == 3 || kind == 8) {
        rightValue = contentGetUpgradedKindValue(rightId);
    }
    s32 order = rightValue - leftValue;
    if (order == 0) {
        order = FUN_0049c9a0(left) - FUN_0049c9a0(right);
    }
    return order;
}
}

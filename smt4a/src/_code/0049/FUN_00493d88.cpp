/* NON_MATCHING: Comparator values use different saved registers and omit retail's extra pointer copy for the tie break. */
#include "common.h"
#include "addon/AocEntryKind.h"
#include "shop/shopMain.h"
#include "shard/W6_W6Match7_NumericStepper.h"

extern "C" {

/* Sorts selected content kinds by ascending kind value, then by the entry's secondary key. */
s32 FUN_00493d88(const u16 *left, const u16 *right)
{
    s32 leftValue = 0;
    u16 leftId = *left;
    u16 rightId = *right;
    s32 rightValue = 0;
    s32 kind = aocEntryGetKindForward(leftId);
    if (kind == 2 || kind == 3 || kind == 8) {
        leftValue = contentGetUpgradedKindValue(leftId);
    }
    kind = aocEntryGetKindForward(rightId);
    if (kind == 2 || kind == 3 || kind == 8) {
        rightValue = contentGetUpgradedKindValue(rightId);
    }
    s32 order = leftValue - rightValue;
    if (order == 0) {
        order = FUN_0049c9a0(left) - FUN_0049c9a0(right);
    }
    return order;
}
}

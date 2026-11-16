/* NON_MATCHING: the tie-break (with retail's copy of the right entry) matches; only the two ids swap callee-saved registers (retail keeps the left id in r9 and the right id in r8). */
#include "common.h"
#include "addon/AocEntryKind.h"
#include "shard/W6_W6Match7_NumericStepper.h"

extern "C" {
u16 FUN_0049c9a0(const u16 *entry);

/* Orders two entries by their secondary key. */
static s32 compareOrder(const u16 *left, const u16 *right)
{
    s32 leftOrder = FUN_0049c9a0(left);
    s32 rightOrder = FUN_0049c9a0(right);
    return leftOrder - rightOrder;
}

/* Sorts selected content kinds by descending kind value, then by the entry's secondary key. */
s32 FUN_004943bc(const u16 *left, const u16 *right)
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
    s32 order = rightValue - leftValue;
    if (order == 0) {
        order = compareOrder(left, right);
    }
    return order;
}
}

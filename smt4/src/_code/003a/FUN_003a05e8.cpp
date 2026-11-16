/* NON_MATCHING: only the two ids swap callee-saved registers (retail keeps the left id in r9 and the right id in r8). */
#include "common.h"

extern "C" {
s32 contentGetKindValue(u32 id);
u16 FUN_00230f44(const u16 *entry);
u32 contentGetEntryKind(u32 id);

/* Orders two entries by their secondary key. */
static s32 compareOrder(const u16 *left, const u16 *right)
{
    s32 leftOrder = FUN_00230f44(left);
    s32 rightOrder = FUN_00230f44(right);
    return leftOrder - rightOrder;
}

/* Sorts selected content kinds by descending kind value, then by the entry's secondary key. */
s32 FUN_003a05e8(const u16 *left, const u16 *right)
{
    s32 leftValue = 0;
    u16 leftId = *left;
    u16 rightId = *right;
    s32 rightValue = 0;
    s32 kind = contentGetEntryKind(leftId);
    if (kind == 2 || kind == 3 || kind == 8) {
        leftValue = contentGetKindValue(leftId);
    }
    kind = contentGetEntryKind(rightId);
    if (kind == 2 || kind == 3 || kind == 8) {
        rightValue = contentGetKindValue(rightId);
    }
    s32 order = rightValue - leftValue;
    if (order == 0) {
        order = compareOrder(left, right);
    }
    return order;
}
}

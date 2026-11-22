#include "common.h"
#include "addon/AocEntryKind.h"
#include "shop/shopMain.h"
#include "shard/W6_W6Match7_NumericStepper.h"

extern "C" {

/* Orders two entries by their secondary key. */
static s32 compareOrder(const u16 *left, const u16 *right)
{
    s32 leftOrder = recordGetCompareValue(left);
    s32 rightOrder = recordGetCompareValue(right);
    return leftOrder - rightOrder;
}

/* Sorts selected content kinds by ascending kind value, then by the entry's secondary key. */
s32 contentCompareKindValueAscending(const u16 *left, const u16 *right)
{
    s32 leftValue = 0;
    u16 leftId = *left;
    u16 rightId = *right;
    s32 rightValue = 0;
    switch (aocEntryGetKindForward(leftId)) {
    case 2: case 3: case 8:
        leftValue = contentGetUpgradedKindValue(leftId);
        break;
    }
    switch (aocEntryGetKindForward(rightId)) {
    case 2: case 3: case 8:
        rightValue = contentGetUpgradedKindValue(rightId);
        break;
    }
    s32 order = leftValue - rightValue;
    if (order == 0) {
        order = compareOrder(left, right);
    }
    return order;
}
}

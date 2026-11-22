#include "common.h"

extern "C" {
s32 contentGetKindValue(u32 id);
u16 aocEntryGetSortOrder(const u16 *entry);
u32 contentGetEntryKind(u32 id);

/* Orders two entries by their secondary key. */
static s32 compareOrder(const u16 *left, const u16 *right)
{
    s32 leftOrder = aocEntryGetSortOrder(left);
    s32 rightOrder = aocEntryGetSortOrder(right);
    return leftOrder - rightOrder;
}

/* Sorts selected content kinds by descending kind value, then by the entry's secondary key. */
s32 contentCompareKindValueDescending(const u16 *left, const u16 *right)
{
    s32 leftValue = 0;
    u16 leftId = *left;
    u16 rightId = *right;
    s32 rightValue = 0;
    switch (contentGetEntryKind(leftId)) {
    case 2: case 3: case 8:
        leftValue = contentGetKindValue(leftId);
        break;
    }
    switch (contentGetEntryKind(rightId)) {
    case 2: case 3: case 8:
        rightValue = contentGetKindValue(rightId);
        break;
    }
    s32 order = rightValue - leftValue;
    if (order == 0) {
        order = compareOrder(left, right);
    }
    return order;
}
}

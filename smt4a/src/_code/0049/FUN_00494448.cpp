#include "common.h"

extern "C" {
s32 shopGetEntryPrice(const u16* entry);
u16 recordGetCompareValue(const u16* entry);

/* Orders two entries by their secondary key. */
static s32 compareOrder(const u16 *left, const u16 *right)
{
    s32 leftOrder = recordGetCompareValue(left);
    s32 rightOrder = recordGetCompareValue(right);
    return leftOrder - rightOrder;
}

// Compare entries by the primary key, then by the secondary key.
s32 FUN_00494448(const u16* left, const u16* right)
{
    s32 leftPrice = shopGetEntryPrice(left);
    s32 rightPrice = shopGetEntryPrice(right);
    s32 result = leftPrice - rightPrice;
    if (result == 0)
        result = compareOrder(left, right);
    return result;
}
}

#include "common.h"
#include "shop/shopMain.h"

extern "C" {

extern int shopGetEntryPrice(u32 id);

/* Orders two ids by their recordGetCompareValue key. */
static s32 compareOrder(u32 a, u32 b)
{
    s32 orderA = recordGetCompareValue(reinterpret_cast<const u16 *>(a));
    s32 orderB = recordGetCompareValue(reinterpret_cast<const u16 *>(b));
    return orderA - orderB;
}

/* Compare function for sorting ids: by shopGetEntryPrice (descending), then by recordGetCompareValue (ascending). */
int FUN_004944d0(u32 a, u32 b)
{
    int keyA = shopGetEntryPrice(a);
    int keyB = shopGetEntryPrice(b);
    int diff = keyB - keyA;

    if (diff == 0) {
        diff = compareOrder(a, b);
    }
    return diff;
}

} /* extern "C" */

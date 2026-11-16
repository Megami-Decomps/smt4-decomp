/* Compare packed items by descending price, then by their item rank. */
#include "common.h"

struct AocPricedItem;

extern "C" {

s32 aocItemGetPrice(AocPricedItem *item);
u16 FUN_0049c9a0(const u16 *item);

/* Orders two items by their item rank. */
static s32 compareRank(const u16 *a, const u16 *b)
{
    s32 rankA = FUN_0049c9a0(a);
    s32 rankB = FUN_0049c9a0(b);
    return rankA - rankB;
}

s32 FUN_00494530(const void *first, const void *second)
{
    s32 priceA = aocItemGetPrice((AocPricedItem *)first);
    s32 priceB = aocItemGetPrice((AocPricedItem *)second);
    s32 diff = priceB - priceA;

    if (diff == 0) {
        diff = compareRank(static_cast<const u16 *>(first), static_cast<const u16 *>(second));
    }
    return diff;
}

}

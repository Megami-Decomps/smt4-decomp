#include "common.h"
#include "shop/shopMain.h"

extern "C" {

extern int aocItemGetPrice(u32 handle);

/* Orders two handles by their recordGetCompareValue key. */
static s32 compareOrder(u32 a, u32 b)
{
    s32 orderA = recordGetCompareValue(reinterpret_cast<const u16 *>(a));
    s32 orderB = recordGetCompareValue(reinterpret_cast<const u16 *>(b));
    return orderA - orderB;
}

/* Comparison of two handles: by aocItemGetPrice, then by recordGetCompareValue. */
int FUN_0049448c(u32 a, u32 b)
{
    int priceA = aocItemGetPrice(a);
    int priceB = aocItemGetPrice(b);
    int diff = priceA - priceB;

    if (diff == 0) {
        diff = compareOrder(a, b);
    }
    return diff;
}

}

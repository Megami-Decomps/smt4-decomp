/* NON_MATCHING: corrected packed-item pointer/rank types; retail retains the second item through an extra saved-register copy before rank calls. */
/* Compare packed items by descending price, then by their item rank. */
#include "common.h"

struct AocPricedItem;

extern "C" {

s32 aocItemGetPrice(AocPricedItem *item);
u16 FUN_0049c9a0(const u16 *item);

s32 FUN_00494530(const void *first, const void *second)
{
    const u16 *a = static_cast<const u16 *>(first);
    const u16 *b = static_cast<const u16 *>(second);
    s32 keyA = aocItemGetPrice(static_cast<AocPricedItem *>(const_cast<void *>(first)));
    s32 keyB = aocItemGetPrice(static_cast<AocPricedItem *>(const_cast<void *>(second)));
    s32 diff = keyB - keyA;

    if (diff == 0) {
        diff = FUN_0049c9a0(a) - FUN_0049c9a0(b);
    }
    return diff;
}

}

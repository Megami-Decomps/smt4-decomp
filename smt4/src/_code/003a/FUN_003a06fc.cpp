/* NON_MATCHING: slot-pointer and u16 rank contracts recovered; retail still copies the right slot before the tie-break calls. */
#include "common.h"

struct ItemSlot;

extern "C" {

s32 FUN_00230e04(ItemSlot *slot);
u16 FUN_00230f44(const u16 *slot);

/* Orders item slots by descending discounted price, then ascending record order. */
s32 FUN_003a06fc(const void *first, const void *second)
{
    ItemSlot *a = static_cast<ItemSlot *>(const_cast<void *>(first));
    ItemSlot *b = static_cast<ItemSlot *>(const_cast<void *>(second));
    s32 keyA = FUN_00230e04(a);
    s32 diff = FUN_00230e04(b) - keyA;

    if (diff == 0) {
        diff = FUN_00230f44(reinterpret_cast<const u16 *>(a)) -
               FUN_00230f44(reinterpret_cast<const u16 *>(b));
    }
    return diff;
}

} /* extern "C" */

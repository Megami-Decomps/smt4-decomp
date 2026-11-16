#include "common.h"

struct ItemSlot;

extern "C" {

s32 FUN_00230e04(ItemSlot *slot);
u16 aocEntryGetSortOrder(const u16 *slot);

/* Orders two slots by their record's order key. */
static s32 compareOrder(ItemSlot *a, ItemSlot *b)
{
    s32 rankA = aocEntryGetSortOrder(reinterpret_cast<const u16 *>(a));
    s32 rankB = aocEntryGetSortOrder(reinterpret_cast<const u16 *>(b));
    return rankA - rankB;
}

/* Orders item slots by descending discounted price, then ascending record order. */
s32 FUN_003a06fc(ItemSlot *a, ItemSlot *b)
{
    s32 keyA = FUN_00230e04(a);
    s32 keyB = FUN_00230e04(b);
    s32 diff = keyB - keyA;

    if (diff == 0) {
        diff = compareOrder(a, b);
    }
    return diff;
}

} /* extern "C" */

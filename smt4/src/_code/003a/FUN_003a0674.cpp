#include "common.h"

struct ItemSlot;

extern "C" {

extern s32 shopSlotGetPrice(ItemSlot *slot);
extern u16 aocEntryGetSortOrder(const u16 *id);

/* Orders two slots by their record's order key. */
static s32 compareOrder(ItemSlot *first, ItemSlot *second)
{
    s32 rankA = aocEntryGetSortOrder(reinterpret_cast<const u16 *>(first));
    s32 rankB = aocEntryGetSortOrder(reinterpret_cast<const u16 *>(second));
    return rankA - rankB;
}

/* qsort comparison of item slots: by price, then by the record's order key. */
s32 FUN_003a0674(ItemSlot *first, ItemSlot *second)
{
    s32 priceA = shopSlotGetPrice(first);
    s32 priceB = shopSlotGetPrice(second);
    s32 diff = priceA - priceB;

    if (diff == 0) {
        diff = compareOrder(first, second);
    }
    return diff;
}

} /* extern "C" */

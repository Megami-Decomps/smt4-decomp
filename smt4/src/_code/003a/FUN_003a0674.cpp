#include "common.h"

struct ItemSlot;

extern "C" {

extern s32 FUN_00230e04(ItemSlot *slot);
extern u16 FUN_00230f44(const u16 *id);

/* qsort comparison of item slots: by price, then by the record's order key. */
s32 FUN_003a0674(ItemSlot *first, ItemSlot *second)
{
    s32 diff = FUN_00230e04(first) - FUN_00230e04(second);

    if (diff != 0) {
        return diff;
    }
    const u16 *a = reinterpret_cast<const u16 *>(first);
    const u16 *b = reinterpret_cast<const u16 *>(second);
    u16 rankA = FUN_00230f44(a);
    u16 rankB = FUN_00230f44(b);
    return rankA - rankB;
}

} /* extern "C" */

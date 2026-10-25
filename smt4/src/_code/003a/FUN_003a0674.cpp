/* NON_MATCHING: canonical slot-pointer qsort/callee contracts restored; tie-break result/second-pointer lifetimes still differ. */
#include "common.h"

struct ItemSlot;

extern "C" {

extern u32 FUN_00230e04(ItemSlot *slot);
extern u16 FUN_00230f44(const u16 *id);

static __inline s32 compareByPrimary(const void *a, const void *b)
{
    return FUN_00230e04((ItemSlot *)a) - FUN_00230e04((ItemSlot *)b);
}

static __inline s32 compareBySecondary(const void *a, const void *b)
{
    return FUN_00230f44((const u16 *)a) - FUN_00230f44((const u16 *)b);
}

/* qsort comparison of item slots: by price, then by the record's order key. */
s32 FUN_003a0674(const void *a, const void *b)
{
    s32 diff = compareByPrimary(a, b);

    if (diff == 0) {
        diff = compareBySecondary(a, b);
    }
    return diff;
}

} /* extern "C" */

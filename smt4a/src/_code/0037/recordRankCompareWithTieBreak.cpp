#include "common.h"

extern "C" {

s32 idIsAbove400(u32 id);
s32 dataTable04GetCategoryOrder(u32 id);
s32 FUN_003811ec(u32 *a, u32 *b);

/* Comparator: orders two ids by rank (ids above 400 rank 99, others by dataTable04GetCategoryOrder); ties go to FUN_003811ec. */
s32 recordRankCompareWithTieBreak(u32 *a, u32 *b)
{
    s32 rankA;
    s32 rankB;

    if (idIsAbove400(*a) != 0) {
        rankA = 99;
    } else {
        rankA = dataTable04GetCategoryOrder(*a);
    }
    if (idIsAbove400(*b) != 0) {
        rankB = 99;
    } else {
        rankB = dataTable04GetCategoryOrder(*b);
    }
    s32 order = rankB - rankA;

    if (order != 0) {
        return order;
    }
    return FUN_003811ec(a, b);
}

} /* extern "C" */

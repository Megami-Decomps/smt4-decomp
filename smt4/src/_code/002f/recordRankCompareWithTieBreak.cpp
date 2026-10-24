#include "common.h"

extern "C" {

s32 idIsAbove400(u32 id);
s32 recordKindRank(u32 id);
s32 FUN_002497f8(u32 *a, u32 *b);

/* Comparator: orders two ids by rank (ids above 400 rank 99, others by recordKindRank); ties go to FUN_002497f8. */
s32 recordRankCompareWithTieBreak(u32 *a, u32 *b)
{
    s32 rankA;
    s32 rankB;

    if (idIsAbove400(*a) != 0) {
        rankA = 99;
    } else {
        rankA = recordKindRank(*a);
    }
    if (idIsAbove400(*b) != 0) {
        rankB = 99;
    } else {
        rankB = recordKindRank(*b);
    }
    s32 order = rankB - rankA;

    if (order != 0) {
        return order;
    }
    return FUN_002497f8(a, b);
}

} /* extern "C" */

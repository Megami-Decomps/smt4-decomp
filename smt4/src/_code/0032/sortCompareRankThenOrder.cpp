#include "common.h"

struct RankedEntry {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 rank;
    /* 0x02 */ u8 order;
};

/* Sorts by descending rank and then ascending order. */
extern "C" s32 sortCompareRankThenOrder(const RankedEntry *left, const RankedEntry *right)
{
    s32 rankDifference = right->rank - left->rank;
    if (rankDifference != 0)
        return rankDifference;
    return left->order - right->order;
}

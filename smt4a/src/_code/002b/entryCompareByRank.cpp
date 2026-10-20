#include "common.h"

extern "C" {

extern s32 flagsBGetBit0(u32 id);
extern s32 flagsBGetBit1(u32 id);

/* qsort comparison of two entries by rank, then by their first halfword (descending). */
s32 entryCompareByRank(const u16 *a, const u16 *b)
{
    s32 rankA = a[1] & 0xFF;
    s32 rankB = b[1] & 0xFF;
    s32 diff;

    if ((a[1] >> 8) == 10 && flagsBGetBit0(rankA) != 0) {
        if (flagsBGetBit1(rankA) != 0) {
            rankA = 99;
        } else {
            rankA = -99;
        }
    }
    if ((b[1] >> 8) == 10 && flagsBGetBit0(rankB) != 0) {
        if (flagsBGetBit1(rankB) != 0) {
            rankB = 99;
        } else {
            rankB = -99;
        }
    }
    diff = rankB - rankA;
    if (diff == 0) {
        diff = *b - *a;
    }
    return diff;
}

} /* extern "C" */

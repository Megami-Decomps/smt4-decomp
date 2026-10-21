#include "common.h"

struct DevilRecord { u8 unk00[3]; u8 rank; };
extern "C" DevilRecord *devilGetRecord(u16 id);
/* Compares devil records by rank, breaking ties by identifier. */
extern "C" s32 devilCompareRankDescending(const u16 *left, const u16 *right)
{
    DevilRecord *leftRecord = devilGetRecord(*left);
    DevilRecord *rightRecord = devilGetRecord(*right);
    s32 difference = rightRecord->rank - leftRecord->rank;
    if (difference == 0)
        difference = *left - *right;
    return difference;
}

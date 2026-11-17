#include "gamedata/DevilRecord.h"

/* Compares devil records by rank, breaking ties by identifier. */
extern "C" s32 devilCompareRankDescending(const u16 *left, const u16 *right)
{
    DevilRecord *leftRecord = devilGetRecord(*left);
    DevilRecord *rightRecord = devilGetRecord(*right);
    s32 difference = rightRecord->level - leftRecord->level;
    if (difference == 0)
        difference = *left - *right;
    return difference;
}

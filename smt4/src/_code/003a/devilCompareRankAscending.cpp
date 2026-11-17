#include "common.h"
#include "gamedata/DevilRecord.h"

/* Compares devil records by level, breaking ties by identifier. */
extern "C" s32 devilCompareRankAscending(const u16 *left, const u16 *right)
{
    DevilRecord *leftRecord = devilGetRecord(*left);
    DevilRecord *rightRecord = devilGetRecord(*right);
    s32 difference = leftRecord->level - rightRecord->level;
    if (difference == 0)
        difference = *right - *left;
    return difference;
}

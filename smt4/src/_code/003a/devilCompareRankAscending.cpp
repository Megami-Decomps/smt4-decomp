#include "common.h"
#include "gamedata/NkmBaseRecord.h"

/* Compares devil records by level, breaking ties by identifier. */
extern "C" s32 devilCompareRankAscending(const u16 *left, const u16 *right)
{
    NkmBaseRecord *leftRecord = nkmBaseGetRecord(*left);
    NkmBaseRecord *rightRecord = nkmBaseGetRecord(*right);
    s32 difference = leftRecord->level - rightRecord->level;
    if (difference == 0)
        difference = *right - *left;
    return difference;
}

#include "gamedata/DevilRecordA.h"

/* Sort demon ids by the second base stat, then by level (descending), then by id. */
extern "C" s32 FUN_004a71d4(const u16 *left, const u16 *right)
{
    const DevilRecordA *leftRecord = devilGetRecord(*left);
    const DevilRecordA *rightRecord = devilGetRecord(*right);
    s32 comparison = leftRecord->baseMp - rightRecord->baseMp;
    if (comparison == 0) {
        leftRecord = devilGetRecord(*left);
        rightRecord = devilGetRecord(*right);
        comparison = rightRecord->level - leftRecord->level;
        if (comparison == 0)
            comparison = *left - *right;
    }
    return comparison;
}

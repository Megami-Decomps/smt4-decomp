#include "gamedata/DevilRecordA.h"

extern "C" {

s32 dataTable00CompareOrderKeys(const u16 *left, const u16 *right)
{
    const DevilRecordA *leftRecord = devilGetRecord(*left);
    const DevilRecordA *rightRecord = devilGetRecord(*right);
    s32 comparison = leftRecord->baseHp - rightRecord->baseHp;
    if (comparison == 0) {
        leftRecord = devilGetRecord(*left);
        rightRecord = devilGetRecord(*right);
        comparison = rightRecord->level - leftRecord->level;
        if (comparison == 0) {
            comparison = *left - *right;
        }
    }
    return comparison;
}
}

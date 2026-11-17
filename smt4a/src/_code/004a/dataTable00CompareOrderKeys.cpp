#include "gamedata/NkmBaseRecordA.h"

extern "C" {

s32 dataTable00CompareOrderKeys(const u16 *left, const u16 *right)
{
    const NkmBaseRecordA *leftRecord = nkmBaseGetRecord(*left);
    const NkmBaseRecordA *rightRecord = nkmBaseGetRecord(*right);
    s32 comparison = leftRecord->baseHp - rightRecord->baseHp;
    if (comparison == 0) {
        leftRecord = nkmBaseGetRecord(*left);
        rightRecord = nkmBaseGetRecord(*right);
        comparison = rightRecord->level - leftRecord->level;
        if (comparison == 0) {
            comparison = *left - *right;
        }
    }
    return comparison;
}
}

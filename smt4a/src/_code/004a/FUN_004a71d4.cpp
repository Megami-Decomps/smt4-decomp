#include "gamedata/NkmBaseRecordA.h"

/* Sort demon ids by the second base stat, then by level (descending), then by id. */
extern "C" s32 FUN_004a71d4(const u16 *left, const u16 *right)
{
    const NkmBaseRecordA *leftRecord = nkmBaseGetRecord(*left);
    const NkmBaseRecordA *rightRecord = nkmBaseGetRecord(*right);
    s32 comparison = leftRecord->baseMp - rightRecord->baseMp;
    if (comparison == 0) {
        leftRecord = nkmBaseGetRecord(*left);
        rightRecord = nkmBaseGetRecord(*right);
        comparison = rightRecord->level - leftRecord->level;
        if (comparison == 0)
            comparison = *left - *right;
    }
    return comparison;
}

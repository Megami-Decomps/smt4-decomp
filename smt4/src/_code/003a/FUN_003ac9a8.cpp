#include "shard/W6_W6Match5_DevilSort.h"

extern "C" s32 FUN_003ac9a8(const u16 *left, const u16 *right)
{
    const DevilRecord *leftRecord = devilGetRecord(*left);
    const DevilRecord *rightRecord = devilGetRecord(*right);
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

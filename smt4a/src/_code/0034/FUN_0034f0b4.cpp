/* NON_MATCHING: retail forms both pair addresses as add #4096; ldr #952 (built puts the second through a 0x13b8 literal) and keeps the two reloads in index order. */
#include "common.h"
#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/W9_W9Match8_WorkRecords.h"


extern "C" {
extern UniteWork *g_unite;
UniteSortRecordPrefixA *FUN_00184310(u32 id);
}

static inline s32 compareFusionRecords(u32 leftId, u32 rightId)
{
    const UniteSortRecordPrefixA *left = FUN_00184310(leftId);
    const UniteSortRecordPrefixA *right = FUN_00184310(rightId);
    s32 result = s32(right->categoryKey) - s32(left->categoryKey);
    if (result == 0) {
        result = s32(left->ascendingKey) - s32(right->ascendingKey);
        if (result == 0)
            result = s32(right->descendingKey) - s32(left->descendingKey);
    }
    return result;
}

extern "C" s32 FUN_0034f0b4(const u16 *leftIndex, const u16 *rightIndex)
{
    UniteWork *work = g_unite;
    u32 right = work->pairList.pairs[*rightIndex].packedIds;
    u32 left = work->pairList.pairs[*leftIndex].packedIds;
    s32 result = compareFusionRecords(left & 0x7fffU, right & 0x7fffU);
    if (result == 0) {
        left = work->pairList.pairs[*leftIndex].packedIds;
        right = work->pairList.pairs[*rightIndex].packedIds;
        result = compareFusionRecords((left & 0x3fffffffU) >> 15, (right & 0x3fffffffU) >> 15);
    }
    return result;
}


/* NON_MATCHING: retail forms both pair addresses as add #4096; ldr #952 (built puts the second through a 0x13b8 literal) and keeps the two reloads in index order. */
#include "common.h"
#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "gamedata/NkmBaseRecordA.h"

extern "C" {
extern UniteWork *g_unite;
}

static inline s32 compareFusionRecords(u32 leftId, u32 rightId)
{
    const NkmBaseRecordA *left = nkmBaseGetRecord(leftId);
    const NkmBaseRecordA *right = nkmBaseGetRecord(rightId);
    s32 result = s32(right->race) - s32(left->race);
    if (result == 0) {
        result = s32(left->level) - s32(right->level);
        if (result == 0)
            result = s32(right->id) - s32(left->id);
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


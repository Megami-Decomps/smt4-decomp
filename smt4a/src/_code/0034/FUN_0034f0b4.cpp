/* NON_MATCHING: Fusion-pair base-address grouping and shared comparison-tail lowering differ. */
#include "common.h"
#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
extern UniteWork *g_unite;
UniteSortRecordPrefixA *FUN_00184310(u32 id);

s32 FUN_0034f0b4(const u16 *leftIndex, const u16 *rightIndex)
{
    UniteWork *const unite = g_unite;
    const UnitePairEntry *const entries = unite->pairList.pairs;

    u32 leftId = entries[*leftIndex].packedIds & 0x7fffU;
    u32 rightId = entries[*rightIndex].packedIds & 0x7fffU;
    const UniteSortRecordPrefixA *left = FUN_00184310(leftId);
    const UniteSortRecordPrefixA *right = FUN_00184310(rightId);

    s32 result = s32(right->categoryKey) - s32(left->categoryKey);
    if (result == 0) {
        result = s32(left->ascendingKey) - s32(right->ascendingKey);
        if (result == 0)
            result = s32(right->descendingKey) - s32(left->descendingKey);
    }
    if (result != 0)
        return result;

    // Reload both indices and packed words after the lookup calls, using
    // the original work block rather than reloading the global pointer.
    leftId = (entries[*leftIndex].packedIds >> 15) & 0x7fffU;
    rightId = (entries[*rightIndex].packedIds >> 15) & 0x7fffU;
    left = FUN_00184310(leftId);
    right = FUN_00184310(rightId);

    result = s32(right->categoryKey) - s32(left->categoryKey);
    if (result == 0) {
        result = s32(left->ascendingKey) - s32(right->ascendingKey);
        if (result == 0)
            result = s32(right->descendingKey) - s32(left->descendingKey);
    }
    return result;
}
}

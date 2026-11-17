/* NON_MATCHING: Retail ldrh r1, [r1, #44] differs from recovered ldrh r2, [r1, #44]. */
#include "common.h"
#include "gamedata/HowToTable.h"

extern "C" {

// qsort comparison of two how-to row indices by their list order, treating zero or out-of-range indices as 99.
s32 FUN_0049ebf0(const u16* leftIndex, const u16* rightIndex)
{
    void *table = dataTableGet(0x46, 0);
    const HowToRecord *entries = howToRecords(table);
    if (entries == 0) {
        return 0;
    }

    s32 count = dataTableGetCount(table);
    s32 left = *leftIndex;
    s32 leftValue = (count <= left || left == 0)
        ? 99 : entries[left].order;

    s32 right = *rightIndex;
    s32 rightValue = (right >= count || right == 0)
        ? 99 : entries[right].order;

    return leftValue - rightValue;
}
}

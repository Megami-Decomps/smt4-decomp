#include "common.h"
#include "gamedata/HowToTable.h"

extern "C" {

/* qsort comparison of two how-to row indices by their list order, treating zero or out-of-range indices as 99. */
s32 FUN_0049ebf0(const u16* leftIndex, const u16* rightIndex)
{
    void *table = dataTableGet(0x46, 0);
    const HowToRecord *entries = howToRecords(table);
    if (entries == 0) {
        return 0;
    }

    s32 count = dataTableGetCount(table);
    s32 leftValue;
    if (*leftIndex >= count || *leftIndex == 0) {
        leftValue = 99;
    } else {
        leftValue = entries[*leftIndex].order;
    }
    s32 rightValue;
    if (*rightIndex >= count || *rightIndex == 0) {
        rightValue = 99;
    } else {
        rightValue = entries[*rightIndex].order;
    }

    return leftValue - rightValue;
}
}

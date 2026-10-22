#include "gamedata/ItemSortRecord.h"

namespace {
inline s32 categoryPriority(u8 category)
{
    switch (category) {
    case 5: return 1;
    case 0: return 2;
    case 1: return 3;
    case 4: return 4;
    case 3: return 5;
    default: return 0;
    }
}
}

extern "C" {
const ItemSortRecord* dataFindKeyedRecordWithOverrides(u32 id);

// Compare gauntlet entries by descending remapped category, then descending value.
s32 gauntletAppCompareCategoryAndValueDescending(const u32* left, const u32* right)
{
    const ItemSortRecord* leftRecord = dataFindKeyedRecordWithOverrides(*left);
    const ItemSortRecord* rightRecord = dataFindKeyedRecordWithOverrides(*right);
    s32 difference = categoryPriority(rightRecord->sort.category) -
                     categoryPriority(leftRecord->sort.category);
    if (difference != 0) {
        return difference;
    }
    leftRecord = dataFindKeyedRecordWithOverrides(*left);
    rightRecord = dataFindKeyedRecordWithOverrides(*right);
    return rightRecord->sort.value - leftRecord->sort.value;
}
}

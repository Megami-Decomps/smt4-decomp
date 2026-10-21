#include "shard/W5_W5Match7_EntrySort.h"

extern "C" {



s32 uiCompareBonusAndEntryKey(const SortItem *left, const SortItem *right)
{
    EntrySortData *leftData = FUN_00192608(left->id);
    EntrySortData *rightData = FUN_00192608(right->id);
    EntrySortBonus leftBonus;
    EntrySortBonus rightBonus;
    FUN_0048026c(left->id, &leftBonus);
    FUN_0048026c(right->id, &rightBonus);
    s32 order = leftBonus.value + leftData->bonus - (rightBonus.value + rightData->bonus);
    return order != 0 ? order : rightData->key - leftData->key;
}

} /* extern "C" */

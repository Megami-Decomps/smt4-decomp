#include "util/DataTable08Sub2GetRecord.h"
#include "shard/W5_W5Match7_EntrySort.h"

extern "C" {



s32 uiCompareBonusAndEntryKey(const SortItem *left, const SortItem *right)
{
    EntrySortData *leftData = dataTable08Sub2GetRecord(left->id);
    EntrySortData *rightData = dataTable08Sub2GetRecord(right->id);
    s16 leftBonus[8];
    s16 rightBonus[8];
    equipmentGetCappedUpgradeBonuses(left->id, leftBonus);
    equipmentGetCappedUpgradeBonuses(right->id, rightBonus);
    s32 order = leftBonus[3] + leftData->bonus - (rightBonus[3] + rightData->bonus);
    return order != 0 ? order : rightData->key - leftData->key;
}

} /* extern "C" */

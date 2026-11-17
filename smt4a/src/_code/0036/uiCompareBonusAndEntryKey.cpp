#include "gamedata/DataTableAccess_VariantE_EntrySort.h"
#include "shard/W5_W5Match7_EntrySort.h"

extern "C" {



s32 uiCompareBonusAndEntryKey(const SortItem *left, const SortItem *right)
{
    EquipmentRecordA *leftData = dataTable08Sub2GetRecord(left->id);
    EquipmentRecordA *rightData = dataTable08Sub2GetRecord(right->id);
    s16 leftBonus[8];
    s16 rightBonus[8];
    equipmentGetCappedUpgradeBonuses(left->id, leftBonus);
    equipmentGetCappedUpgradeBonuses(right->id, rightBonus);
    s32 order = leftBonus[3] + leftData->statBonus[1] - (rightBonus[3] + rightData->statBonus[1]);
    return order != 0 ? order : rightData->id - leftData->id;
}

} /* extern "C" */

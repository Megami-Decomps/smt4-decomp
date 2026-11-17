#include "gamedata/DataTableAccess_VariantE_EntrySort.h"
#include "shard/W5_W5Match7_EntrySort.h"

extern "C" {

/* Orders two equipment entries by ascending (bonus + capped upgrade value) of upgrade kind 3, then by descending key. */
s32 FUN_0035ff04(const SortItem *left, const SortItem *right)
{
    EquipmentRecordA *leftData = dataTable08Sub2GetRecord(left->id);
    EquipmentRecordA *rightData = dataTable08Sub2GetRecord(right->id);
    s16 leftBonus[8];
    s16 rightBonus[8];
    equipmentGetCappedUpgradeBonuses(left->id, leftBonus);
    equipmentGetCappedUpgradeBonuses(right->id, rightBonus);
    s32 order = leftBonus[5] + leftData->statBonus[3] - (rightBonus[5] + rightData->statBonus[3]);
    if (order == 0) {
        order = rightData->id - leftData->id;
    }
    return order;
}

} /* extern "C" */

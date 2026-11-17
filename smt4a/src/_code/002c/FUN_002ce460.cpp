#include "gamedata/DataTableAccess_VariantE_EntrySort.h"
#include "shard/W5_W5Match7_EntrySort.h"

extern "C" {

/* Orders two equipment entries by descending (bonus + capped upgrade value) of one upgrade kind, then by ascending key. */
s32 FUN_002ce460(const SortItem *left, const SortItem *right)
{
    EquipmentRecordA *leftData = dataTable08Sub2GetRecord(left->id);
    EquipmentRecordA *rightData = dataTable08Sub2GetRecord(right->id);
    s16 leftBonus[7];
    s16 rightBonus[7];
    equipmentGetCappedUpgradeBonuses(left->id, leftBonus);
    equipmentGetCappedUpgradeBonuses(right->id, rightBonus);
    s32 order = rightBonus[2] + rightData->statBonus[0] - (leftBonus[2] + leftData->statBonus[0]);
    if (order == 0) {
        order = leftData->id - rightData->id;
    }
    return order;
}

} /* extern "C" */

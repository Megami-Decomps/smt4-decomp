#include "gamedata/DataTableAccess_VariantE_EntrySort.h"
#include "shard/W5_W5Match7_EntrySort.h"

extern "C" {

/* Orders two equipment entries by ascending (bonus + capped upgrade value) of one upgrade kind, then by descending key. */
s32 FUN_0036018c(const SortItem *left, const SortItem *right)
{
    EquipmentRecordA *leftData = itemTableGetEquipmentRecord(left->id);
    EquipmentRecordA *rightData = itemTableGetEquipmentRecord(right->id);
    s16 leftBonus[8];
    s16 rightBonus[8];
    equipmentGetCappedUpgradeBonuses(left->id, leftBonus);
    equipmentGetCappedUpgradeBonuses(right->id, rightBonus);
    s32 order = leftBonus[2] + leftData->statBonus[0] - (rightBonus[2] + rightData->statBonus[0]);
    if (order == 0) {
        order = rightData->id - leftData->id;
    }
    return order;
}

} /* extern "C" */

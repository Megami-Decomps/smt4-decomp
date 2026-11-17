#include "gamedata/DataTableAccess_VariantE_EntrySort.h"
#include "shard/W5_W5Match7_EntrySort.h"

extern "C" {

/* Orders two equipment entries: higher (bonus + capped upgrade value) first, then by ascending key. */
s32 FUN_002ce22c(const SortItem *itemA, const SortItem *itemB)
{
    EquipmentRecordA *dataA = itemTableGetEquipmentRecord(itemA->id);
    EquipmentRecordA *dataB = itemTableGetEquipmentRecord(itemB->id);
    s16 bonusesA[7];
    s16 bonusesB[7];

    equipmentGetCappedUpgradeBonuses(itemA->id, bonusesA);
    equipmentGetCappedUpgradeBonuses(itemB->id, bonusesB);
    s32 difference = (bonusesB[5] + dataB->statBonus[3]) - (bonusesA[5] + dataA->statBonus[3]);
    if (difference == 0) {
        difference = dataA->id - dataB->id;
    }
    return difference;
}

} /* extern "C" */

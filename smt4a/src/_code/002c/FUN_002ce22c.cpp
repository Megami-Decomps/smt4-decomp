#include "shard/W5_W5Match7_EntrySort.h"

extern "C" {

/* Orders two equipment entries: higher (bonus + capped upgrade value) first, then by ascending key. */
s32 FUN_002ce22c(const SortItem *itemA, const SortItem *itemB)
{
    EntrySortData *dataA = dataTable08Sub2GetRecord(itemA->id);
    EntrySortData *dataB = dataTable08Sub2GetRecord(itemB->id);
    s16 bonusesA[7];
    s16 bonusesB[7];

    equipmentGetCappedUpgradeBonuses(itemA->id, bonusesA);
    equipmentGetCappedUpgradeBonuses(itemB->id, bonusesB);
    s32 difference = (bonusesB[5] + dataB->bonusesFrom1[2]) - (bonusesA[5] + dataA->bonusesFrom1[2]);
    if (difference == 0) {
        difference = dataA->key - dataB->key;
    }
    return difference;
}

} /* extern "C" */

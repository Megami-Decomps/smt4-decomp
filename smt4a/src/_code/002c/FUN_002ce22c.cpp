/* NON_MATCHING: stack layout of the two bonus records (retail places them at sp+4 and sp+20 in a 36-byte frame; ours 8 and 24 in 44) - everything else matches. */
#include "shard/W5_W5Match7_EntrySort.h"

extern "C" {

/* Orders two equipment entries: higher (bonus + capped upgrade value) first, then by ascending key. */
s32 FUN_002ce22c(const SortItem *itemA, const SortItem *itemB)
{
    EntrySortData *dataA = dataTable08Sub2GetRecord(itemA->id);
    EntrySortData *dataB = dataTable08Sub2GetRecord(itemB->id);
    EntrySortBonus bonusesA;
    EntrySortBonus bonusesB;

    equipmentGetCappedUpgradeBonuses(itemA->id, &bonusesA);
    equipmentGetCappedUpgradeBonuses(itemB->id, &bonusesB);
    s32 difference = (bonusesB.valuesFrom1[2] + dataB->bonusesFrom1[2]) - (bonusesA.valuesFrom1[2] + dataA->bonusesFrom1[2]);
    if (difference == 0) {
        difference = dataA->key - dataB->key;
    }
    return difference;
}

} /* extern "C" */

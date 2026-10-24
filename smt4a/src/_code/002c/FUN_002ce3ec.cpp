/* NON_MATCHING: only the stack placement of the two bonus records differs (retail: sp+4 and sp+20; ours sp+8 and sp+24 in a 44-byte frame instead of 36). */
#include "shard/W5_W5Match7_EntrySort.h"

extern "C" {

/* Orders two equipment entries by descending (bonus + capped upgrade value) of one upgrade kind, then by ascending key. */
s32 FUN_002ce3ec(const SortItem *left, const SortItem *right)
{
    EntrySortData *leftData = dataTable08Sub2GetRecord(left->id);
    EntrySortData *rightData = dataTable08Sub2GetRecord(right->id);
    EntrySortBonus leftBonus;
    EntrySortBonus rightBonus;
    equipmentGetCappedUpgradeBonuses(left->id, &leftBonus);
    equipmentGetCappedUpgradeBonuses(right->id, &rightBonus);
    s32 order = rightBonus.valuesFrom1[1] + rightData->bonusesFrom1[1] - (leftBonus.valuesFrom1[1] + leftData->bonusesFrom1[1]);
    if (order == 0) {
        order = leftData->key - rightData->key;
    }
    return order;
}

} /* extern "C" */

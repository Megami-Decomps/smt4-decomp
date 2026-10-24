#include "shard/W5_W5Match7_EntrySort.h"

extern "C" {

/* Orders two equipment entries by ascending (bonus + capped upgrade value) of one upgrade kind, then by descending key. */
s32 FUN_0036018c(const SortItem *left, const SortItem *right)
{
    EntrySortData *leftData = dataTable08Sub2GetRecord(left->id);
    EntrySortData *rightData = dataTable08Sub2GetRecord(right->id);
    EntrySortBonus leftBonus;
    EntrySortBonus rightBonus;
    equipmentGetCappedUpgradeBonuses(left->id, &leftBonus);
    equipmentGetCappedUpgradeBonuses(right->id, &rightBonus);
    s32 order = leftBonus.firstValue + leftData->firstKind.bonus - (rightBonus.firstValue + rightData->firstKind.bonus);
    if (order == 0) {
        order = rightData->key - leftData->key;
    }
    return order;
}

} /* extern "C" */

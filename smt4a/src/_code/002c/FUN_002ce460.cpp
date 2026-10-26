#include "gamedata/DataTableAccess_VariantE_EntrySort.h"
#include "shard/W5_W5Match7_EntrySort.h"

extern "C" {

/* Orders two equipment entries by descending (bonus + capped upgrade value) of one upgrade kind, then by ascending key. */
s32 FUN_002ce460(const SortItem *left, const SortItem *right)
{
    EntrySortData *leftData = dataTable08Sub2GetRecord(left->id);
    EntrySortData *rightData = dataTable08Sub2GetRecord(right->id);
    s16 leftBonus[7];
    s16 rightBonus[7];
    equipmentGetCappedUpgradeBonuses(left->id, leftBonus);
    equipmentGetCappedUpgradeBonuses(right->id, rightBonus);
    s32 order = rightBonus[2] + rightData->firstKind.bonus - (leftBonus[2] + leftData->firstKind.bonus);
    if (order == 0) {
        order = leftData->key - rightData->key;
    }
    return order;
}

} /* extern "C" */

#include "gamedata/DataTableAccess_VariantE_EntrySort.h"
#include "shard/W5_W5Match7_EntrySort.h"

extern "C" {

/* Keeps the strongest affinity of a record and the element it is on. */
static void keepStrongest(const EquipmentRecordA *record, s32 element, s32 *affinity, s32 *strongest)
{
    if (FUN_00345098(*affinity, record->affinities[element].raw >> 10) > 0) {
        *affinity = record->affinities[element].raw >> 10;
        *strongest = element;
    }
}

/* Sorts entries by the element of their strongest affinity, then that affinity, then table order, descending. */
s32 uiCompareEntryRanksDescending(const SortItem *left, const SortItem *right)
{
    EquipmentRecordA *leftData = itemTableGetEquipmentRecord(left->id);
    EquipmentRecordA *rightData = itemTableGetEquipmentRecord(right->id);
    s32 leftScore = 0;
    s32 rightScore = 0;
    s32 leftRank = DAT_0052b8ac[1].left;
    s32 rightRank = DAT_0052b8ac[1].right;
    for (s32 i = 0; i <= 7; i++) {
        keepStrongest(leftData, i, &leftScore, &leftRank);
        keepStrongest(rightData, i, &rightScore, &rightRank);
    }
    s32 order = rightRank - leftRank;
    if (order == 0) {
        order = FUN_00345098(rightScore, leftScore);
        if (order == 0) {
            leftData = itemTableGetEquipmentRecord(left->id);
            rightData = itemTableGetEquipmentRecord(right->id);
            order = rightData->order - leftData->order;
        }
    }
    return order;
}

} /* extern "C" */

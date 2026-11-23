/* NON_MATCHING: written as uiCompareEntryRanksDescending (IDENTICAL); retail gives the two scores r5/r6 the other way round
 * (it zeroes r5 first) and loads the left order into r2 rather than r1, as in smt4's FUN_002dcdd0. */
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

/* Sorts entries by the element of their strongest affinity, then that affinity, then table order, ascending. */
s32 uiCompareEntryRanksAscending(const SortItem *left, const SortItem *right)
{
    EquipmentRecordA *leftData = itemTableGetEquipmentRecord(left->id);
    EquipmentRecordA *rightData = itemTableGetEquipmentRecord(right->id);
    s32 leftScore = 0;
    s32 rightScore = 0;
    s32 leftRank = DAT_0052b8ac[0].left;
    s32 rightRank = DAT_0052b8ac[0].right;
    for (s32 i = 0; i <= 7; i++) {
        keepStrongest(leftData, i, &leftScore, &leftRank);
        keepStrongest(rightData, i, &rightScore, &rightRank);
    }
    s32 order = leftRank - rightRank;
    if (order == 0) {
        order = FUN_00345098(leftScore, rightScore);
        if (order == 0) {
            leftData = itemTableGetEquipmentRecord(left->id);
            rightData = itemTableGetEquipmentRecord(right->id);
            order = leftData->order - rightData->order;
        }
    }
    return order;
}

} /* extern "C" */

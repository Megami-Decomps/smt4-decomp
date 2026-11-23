/* NON_MATCHING: written as dataTable08CompareStrongestAffinity (IDENTICAL); retail gives the two affinities r5/r6 the other way
 * round (it zeroes r5 first) and loads the left order into r2 rather than r1. */
#include "common.h"
#include "gamedata/EquipmentRecord.h"

extern "C" {
s32 FUN_0028886c(s32 left, s32 right);
extern s32 DAT_00402638[2];

/* Keeps the strongest affinity of a record and the element it is on. */
static void keepStrongest(const EquipmentRecord *record, s32 element, s32 *affinity, s32 *strongest)
{
    if (FUN_0028886c(*affinity, record->affinities[element] >> 10) > 0) {
        *affinity = record->affinities[element] >> 10;
        *strongest = element;
    }
}

/* Sorts records by the element of their strongest affinity, then that affinity, then their table order. */
s32 uiCompareEntryRanksAscending(const u16 *left, const u16 *right)
{
    EquipmentRecord *leftRecord = itemTableGetEquipmentRecord(*left);
    EquipmentRecord *rightRecord = itemTableGetEquipmentRecord(*right);
    s32 leftAffinity = 0;
    s32 rightAffinity = 0;
    s32 leftIndex = DAT_00402638[0];
    s32 rightIndex = DAT_00402638[1];
    for (s32 index = 0; index <= 7; index++) {
        keepStrongest(leftRecord, index, &leftAffinity, &leftIndex);
        keepStrongest(rightRecord, index, &rightAffinity, &rightIndex);
    }
    s32 difference = leftIndex - rightIndex;
    if (difference == 0) {
        difference = FUN_0028886c(leftAffinity, rightAffinity);
        if (difference == 0) {
            leftRecord = itemTableGetEquipmentRecord(*left);
            rightRecord = itemTableGetEquipmentRecord(*right);
            difference = leftRecord->order - rightRecord->order;
        }
    }
    return difference;
}
}

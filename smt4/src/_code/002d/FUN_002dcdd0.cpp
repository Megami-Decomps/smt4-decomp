/* NON_MATCHING: the loop bound now compares with 7 as retail; the affinity-selection loop's registers differ (retail keeps the
 * records in r8/r9 and sets the first comparator argument before loading the affinity). */
#include "common.h"
#include "gamedata/EquipmentRecord.h"

namespace {
}

extern "C" {
s32 FUN_0028886c(s32 left, s32 right);
extern s32 DAT_00402638[2];

/* Sorts records by their strongest affinity, then their table order. */
s32 FUN_002dcdd0(const u16 *left, const u16 *right)
{
    EquipmentRecord *leftRecord = itemTableGetEquipmentRecord(*left);
    EquipmentRecord *rightRecord = itemTableGetEquipmentRecord(*right);
    s32 leftAffinity = 0;
    s32 rightAffinity = 0;
    s32 leftIndex = DAT_00402638[0];
    s32 rightIndex = DAT_00402638[1];
    for (s32 index = 0; index <= 7; index++) {
        if (FUN_0028886c(leftAffinity, leftRecord->affinities[index] >> 10) > 0) {
            leftIndex = index;
            leftAffinity = leftRecord->affinities[index] >> 10;
        }
        if (FUN_0028886c(rightAffinity, rightRecord->affinities[index] >> 10) > 0) {
            rightIndex = index;
            rightAffinity = rightRecord->affinities[index] >> 10;
        }
    }
    s32 difference = leftIndex - rightIndex;
    if (difference != 0) {
        return difference;
    }
    difference = FUN_0028886c(leftAffinity, rightAffinity);
    if (difference != 0) {
        return difference;
    }
    leftRecord = itemTableGetEquipmentRecord(*left);
    rightRecord = itemTableGetEquipmentRecord(*right);
    return leftRecord->order - rightRecord->order;
}
}

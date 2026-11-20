/* NON_MATCHING: retail materialises the null-record `return 0` as moveq r0,#0 in the first block and keeps 0 in r7 for the later ones; ours branches to one shared `return 0`. */
#include "quest_center/QuestRecordA.h"

extern "C" {

s32 itemKindToSortGroup(u8 group);

/* Sort comparator over item ids: higher rank first, then higher group order, then higher sort key
 * (0 when either id has no record). */
s32 FUN_003759f0(const u16 *left, const u16 *right)
{
    QuestRecordA *leftRecord;
    QuestRecordA *rightRecord;
    s32 diff;

    leftRecord = questDataGetRecord(*left);
    rightRecord = questDataGetRecord(*right);
    if (leftRecord == NULL || rightRecord == NULL) {
        return 0;
    }
    diff = rightRecord->rank - leftRecord->rank;
    if (diff != 0) {
        return diff;
    }

    leftRecord = questDataGetRecord(*left);
    rightRecord = questDataGetRecord(*right);
    if (leftRecord == NULL || rightRecord == NULL) {
        return 0;
    }
    diff = itemKindToSortGroup(rightRecord->kind) - itemKindToSortGroup(leftRecord->kind);
    if (diff != 0) {
        return diff;
    }

    leftRecord = questDataGetRecord(*left);
    rightRecord = questDataGetRecord(*right);
    if (leftRecord == NULL || rightRecord == NULL) {
        return 0;
    }
    return rightRecord->order - leftRecord->order;
}

} /* extern "C" */

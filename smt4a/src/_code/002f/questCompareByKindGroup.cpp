/* NON_MATCHING: 47 vs 47 rows (2 diff lines): retail materialises `moveq r0, #0` before `cmpne r0, #0` on the first NULL check, built emits `cmpne r0, #0; moveq r0, #0`. */
#include "quest_center/QuestRecordA.h"

extern "C" {
s32 itemKindToSortGroup(u8 kind);

/* Orders two quest records by sort order; 0 when either record is missing (same logic as questCompareForDisplayOrder). */
static __inline s32 compareQuestOrder(const u16 *leftId, const u16 *rightId)
{
    QuestRecordA *left = questDataGetRecord(*leftId);
    QuestRecordA *right = questDataGetRecord(*rightId);
    if (left == NULL || right == NULL) {
        return 0;
    }
    return left->order - right->order;
}

/* Orders two quest records by mapped kind group, breaking ties by sort order (same logic as FUN_002b2b34). */
static __inline s32 compareQuestKindGroup(const u16 *leftId, const u16 *rightId)
{
    QuestRecordA *left = questDataGetRecord(*leftId);
    QuestRecordA *right = questDataGetRecord(*rightId);
    if (left == NULL || right == NULL) {
        return 0;
    }
    s32 result = itemKindToSortGroup(left->kind) - itemKindToSortGroup(right->kind);
    if (result != 0) {
        return result;
    }
    return compareQuestOrder(leftId, rightId);
}

/* Compares quest ids by rank, then mapped kind group, then sort order (0 when either record is missing). */
s32 questCompareByKindGroup(const u16 *leftId, const u16 *rightId)
{
    QuestRecordA *left = questDataGetRecord(*leftId);
    QuestRecordA *right = questDataGetRecord(*rightId);
    if (left == NULL || right == NULL) {
        return 0;
    }
    s32 result = left->rank - right->rank;
    if (result != 0) {
        return result;
    }
    return compareQuestKindGroup(leftId, rightId);
}
}

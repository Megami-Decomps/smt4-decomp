#include "quest_center/QuestRecordA.h"
extern "C" s32 FUN_002f744c(u8);

/* Orders two item records by their sort keys; 0 when either record is missing. */
static __inline s32 compareSortKeys(const QuestRecordA* left, const QuestRecordA* right)
{
    s32 result = 0;
    if (left != NULL && right != NULL) {
        result = left->order - right->order;
    }
    return result;
}

// Sorts items by mapped group, breaking ties by the record's sort key.
extern "C" s32 FUN_002b2b34(const u16* leftId, const u16* rightId)
{
    QuestRecordA* left = questDataGetRecord(*leftId);
    QuestRecordA* right = questDataGetRecord(*rightId);
    if (left == NULL || right == NULL) {
        return 0;
    }
    s32 result = FUN_002f744c(left->kind) - FUN_002f744c(right->kind);
    if (result != 0) {
        return result;
    }
    return compareSortKeys(questDataGetRecord(*leftId), questDataGetRecord(*rightId));
}

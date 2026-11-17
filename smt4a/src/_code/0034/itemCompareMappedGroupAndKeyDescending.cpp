#include "quest_center/QuestRecordA.h"
extern "C" s32 FUN_002f744c(u8);

// Sorts items by descending mapped group, breaking ties by descending record sort key.
extern "C" s32 itemCompareMappedGroupAndKeyDescending(const u16* leftId, const u16* rightId)
{
    QuestRecordA* left = dataTable1bOr1cGetRecord(*leftId);
    QuestRecordA* right = dataTable1bOr1cGetRecord(*rightId);
    if (left == NULL) {
        return 0;
    }
    if (right == NULL) {
        return 0;
    }
    s32 rightGroup = FUN_002f744c(right->kind);
    s32 leftGroup = FUN_002f744c(left->kind);
    s32 result = rightGroup - leftGroup;
    if (result != 0) {
        return result;
    }
    left = dataTable1bOr1cGetRecord(*leftId);
    right = dataTable1bOr1cGetRecord(*rightId);
    s32 keyDifference = 0;
    if (left != NULL && right != NULL) {
        keyDifference = right->order - left->order;
    }
    return keyDifference;
}

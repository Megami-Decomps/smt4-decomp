#include "quest_center/QuestRecordA.h"
extern "C" s32 itemKindToSortGroup(u8);

// Sorts items by descending mapped group, breaking ties by descending record sort key.
extern "C" s32 itemCompareMappedGroupAndKeyDescending(const u16* leftId, const u16* rightId)
{
    QuestRecordA* left = questDataGetRecord(*leftId);
    QuestRecordA* right = questDataGetRecord(*rightId);
    if (left == NULL) {
        return 0;
    }
    if (right == NULL) {
        return 0;
    }
    s32 rightGroup = itemKindToSortGroup(right->kind);
    s32 leftGroup = itemKindToSortGroup(left->kind);
    s32 result = rightGroup - leftGroup;
    if (result != 0) {
        return result;
    }
    left = questDataGetRecord(*leftId);
    right = questDataGetRecord(*rightId);
    s32 keyDifference = 0;
    if (left != NULL && right != NULL) {
        keyDifference = right->order - left->order;
    }
    return keyDifference;
}

/* NON_MATCHING: The first null-check compare and zero-result move are scheduled in the opposite order. */
#include "shard/W5_W5Match7_DataRecord.h"
extern "C" s32 FUN_002f744c(u8);

// Sorts items by descending mapped group, breaking ties by descending record sort key.
extern "C" s32 FUN_0034f46c(const u16* leftId, const u16* rightId)
{
    ItemDataRecord* left = FUN_001ad9b4(*leftId);
    ItemDataRecord* right = FUN_001ad9b4(*rightId);
    if (left == NULL || right == NULL) {
        return 0;
    }
    s32 rightGroup = FUN_002f744c(right->ordering.sortGroup);
    s32 leftGroup = FUN_002f744c(left->ordering.sortGroup);
    s32 result = rightGroup - leftGroup;
    if (result != 0) {
        return result;
    }
    left = FUN_001ad9b4(*leftId);
    right = FUN_001ad9b4(*rightId);
    s32 keyDifference = 0;
    if (left != NULL && right != NULL) {
        keyDifference = right->ordering.sortKey - left->ordering.sortKey;
    }
    return keyDifference;
}

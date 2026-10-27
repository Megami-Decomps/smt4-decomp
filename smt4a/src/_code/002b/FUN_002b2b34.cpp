/* NON_MATCHING: Comparator tie returns and epilogue branching differ. */
#include "shard/W5_W5Match7_DataRecord.h"
extern "C" s32 FUN_002f744c(u8);

// Sorts items by mapped group, breaking ties by the record's sort key.
extern "C" s32 FUN_002b2b34(const u16* leftId, const u16* rightId)
{
    ItemDataRecord* left = FUN_001ad9b4(*leftId);
    ItemDataRecord* right = FUN_001ad9b4(*rightId);
    if (left == NULL || right == NULL) {
        return 0;
    }
    s32 leftGroup = FUN_002f744c(left->ordering.sortGroup);
    s32 rightGroup = FUN_002f744c(right->ordering.sortGroup);
    s32 groupDifference = leftGroup - rightGroup;
    if (groupDifference != 0) {
        return groupDifference;
    }
    left = FUN_001ad9b4(*leftId);
    right = FUN_001ad9b4(*rightId);
    s32 result = 0;
    if (left != NULL && right != NULL) {
        result = left->ordering.sortKey;
        result -= right->ordering.sortKey;
    }
    return result;
}

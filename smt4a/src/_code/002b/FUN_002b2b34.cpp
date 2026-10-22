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
    s32 result = leftGroup - rightGroup;
    if (result != 0) {
        return result;
    }
    left = FUN_001ad9b4(*leftId);
    right = FUN_001ad9b4(*rightId);
    if (left != NULL && right != NULL) {
        return left->ordering.sortKey - right->ordering.sortKey;
    }
    return 0;
}

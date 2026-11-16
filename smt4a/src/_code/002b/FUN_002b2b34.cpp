#include "shard/W5_W5Match7_DataRecord.h"
extern "C" s32 FUN_002f744c(u8);

/* Orders two item records by their sort keys; 0 when either record is missing. */
static __inline s32 compareSortKeys(const ItemDataRecord* left, const ItemDataRecord* right)
{
    s32 result = 0;
    if (left != NULL && right != NULL) {
        result = left->ordering.sortKey - right->ordering.sortKey;
    }
    return result;
}

// Sorts items by mapped group, breaking ties by the record's sort key.
extern "C" s32 FUN_002b2b34(const u16* leftId, const u16* rightId)
{
    ItemDataRecord* left = FUN_001ad9b4(*leftId);
    ItemDataRecord* right = FUN_001ad9b4(*rightId);
    if (left == NULL || right == NULL) {
        return 0;
    }
    s32 result = FUN_002f744c(left->ordering.sortGroup) - FUN_002f744c(right->ordering.sortGroup);
    if (result != 0) {
        return result;
    }
    return compareSortKeys(FUN_001ad9b4(*leftId), FUN_001ad9b4(*rightId));
}

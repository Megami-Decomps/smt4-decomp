/* NON_MATCHING: retail materialises the null-record `return 0` as moveq r0,#0 in the first block and keeps 0 in r7 for the later ones; ours branches to one shared `return 0`. */
#include "shard/W5_W5Match7_DataRecord.h"

extern "C" {

s32 FUN_002f744c(u8 group);

/* Sort comparator over item ids: higher rank first, then higher group order, then higher sort key
 * (0 when either id has no record). */
s32 FUN_003759f0(const u16 *left, const u16 *right)
{
    ItemDataRecord *leftRecord;
    ItemDataRecord *rightRecord;
    s32 diff;

    leftRecord = FUN_001ad9b4(*left);
    rightRecord = FUN_001ad9b4(*right);
    if (leftRecord == NULL || rightRecord == NULL) {
        return 0;
    }
    diff = rightRecord->ranking.rank - leftRecord->ranking.rank;
    if (diff != 0) {
        return diff;
    }

    leftRecord = FUN_001ad9b4(*left);
    rightRecord = FUN_001ad9b4(*right);
    if (leftRecord == NULL || rightRecord == NULL) {
        return 0;
    }
    diff = FUN_002f744c(rightRecord->ordering.sortGroup) - FUN_002f744c(leftRecord->ordering.sortGroup);
    if (diff != 0) {
        return diff;
    }

    leftRecord = FUN_001ad9b4(*left);
    rightRecord = FUN_001ad9b4(*right);
    if (leftRecord == NULL || rightRecord == NULL) {
        return 0;
    }
    return rightRecord->ordering.sortKey - leftRecord->ordering.sortKey;
}

} /* extern "C" */

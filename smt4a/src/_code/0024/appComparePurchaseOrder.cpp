#include "gamedata/AppPurchaseRecord.h"

extern "C" {
AppPurchaseSortRecord *dataFindKeyedRecordWithOverrides(u32 id);
s32 shopGetEntryAvailability(u32 id);

/* Sorts applications by purchase status, then by the two record ordering keys. */
s32 appComparePurchaseOrder(const u32 *left, const u32 *right)
{
    AppPurchaseSortRecord *leftRecord = dataFindKeyedRecordWithOverrides(*left);
    AppPurchaseSortRecord *rightRecord = dataFindKeyedRecordWithOverrides(*right);
    s32 leftState = shopGetEntryAvailability(*left);
    s32 rightState = shopGetEntryAvailability(*right);
    if (leftState != 2) {
        if (rightState == 2) {
            return -1;
        }
    } else if (rightState != 2) {
        return 1;
    }
    s32 order = leftRecord->primaryKey - rightRecord->primaryKey;
    if (order == 0) {
        leftRecord = dataFindKeyedRecordWithOverrides(*left);
        rightRecord = dataFindKeyedRecordWithOverrides(*right);
        order = leftRecord->tieBreakKey - rightRecord->tieBreakKey;
    }
    return order;
}
}

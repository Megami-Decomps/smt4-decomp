#include "gamedata/AppPurchaseRecord.h"

extern "C" {
AppPurchaseSortRecord *FUN_002ae584(u32 id);
s32 appCheckPurchaseRequirements(u32 id);

/* Sorts applications by purchase status, then by the two record ordering keys. */
s32 appComparePurchaseOrder(const u32 *left, const u32 *right)
{
    AppPurchaseSortRecord *leftRecord = FUN_002ae584(*left);
    AppPurchaseSortRecord *rightRecord = FUN_002ae584(*right);
    s32 leftState = appCheckPurchaseRequirements(*left);
    s32 rightState = appCheckPurchaseRequirements(*right);
    if (leftState != 2) {
        if (rightState == 2) {
            return -1;
        }
    } else if (rightState != 2) {
        return 1;
    }
    s32 order = leftRecord->primaryKey - rightRecord->primaryKey;
    if (order == 0) {
        leftRecord = FUN_002ae584(*left);
        rightRecord = FUN_002ae584(*right);
        order = leftRecord->tieBreakKey - rightRecord->tieBreakKey;
    }
    return order;
}
}

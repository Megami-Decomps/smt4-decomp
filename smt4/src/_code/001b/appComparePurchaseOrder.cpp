#include "gamedata/AppPurchaseRecord.h"

extern "C" {
AppPurchaseSortRecord *appCostRecordFindById(u32 id);
s32 appCheckPurchaseRequirements(u32 id);

/* Sorts applications by purchase status, then by the two record ordering keys. */
s32 appComparePurchaseOrder(const u32 *left, const u32 *right)
{
    AppPurchaseSortRecord *leftRecord = appCostRecordFindById(*left);
    AppPurchaseSortRecord *rightRecord = appCostRecordFindById(*right);
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
        leftRecord = appCostRecordFindById(*left);
        rightRecord = appCostRecordFindById(*right);
        order = leftRecord->tieBreakKey - rightRecord->tieBreakKey;
    }
    return order;
}
}

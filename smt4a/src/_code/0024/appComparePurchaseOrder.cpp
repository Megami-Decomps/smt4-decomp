#include "gamedata/DataTableAccess.h"
#include "gamedata/GauntletAppTable.h"

extern "C" {
s32 shopGetEntryAvailability(u32 id);

/* Sorts applications by purchase status, then by the two record ordering keys. */
s32 appComparePurchaseOrder(const u32 *left, const u32 *right)
{
    const GauntletAppRecordA *leftRecord = (const GauntletAppRecordA *)dataFindKeyedRecordWithOverrides(*left);
    const GauntletAppRecordA *rightRecord = (const GauntletAppRecordA *)dataFindKeyedRecordWithOverrides(*right);
    s32 leftState = shopGetEntryAvailability(*left);
    s32 rightState = shopGetEntryAvailability(*right);
    if (leftState != 2) {
        if (rightState == 2) {
            return -1;
        }
    } else if (rightState != 2) {
        return 1;
    }
    s32 order = leftRecord->cost - rightRecord->cost;
    if (order == 0) {
        leftRecord = (const GauntletAppRecordA *)dataFindKeyedRecordWithOverrides(*left);
        rightRecord = (const GauntletAppRecordA *)dataFindKeyedRecordWithOverrides(*right);
        order = leftRecord->order - rightRecord->order;
    }
    return order;
}

} /* extern "C" */

#include "common.h"
#include "gamedata/ConsumableRecord.h"

extern "C" {

s32 itemApplyToMember(s32 owner, ConsumableRecord *record, s32 flag, s32 arg3, s32 arg4);
void FUN_00250d84(s32 id, s32 flag);

/* Applies the table-08 record `id` to `owner`; returns 1 when the record is missing, otherwise the apply result (and queues FUN_00250d84 for a plain no-op apply). */
s32 FUN_0026c710(s32 owner, s32 id, s32 flag)
{
    ConsumableRecord *record = itemTableGetItemRecord(id);
    s32 result;

    if (record == NULL) {
        return 1;
    }
    result = itemApplyToMember(owner, record, flag, 0, 0);
    if (result == 0) {
        if (flag == 0 && (record->useFlags & 1) == 0) {
            FUN_00250d84(id, 1);
        }
    }
    return result;
}

} /* extern "C" */

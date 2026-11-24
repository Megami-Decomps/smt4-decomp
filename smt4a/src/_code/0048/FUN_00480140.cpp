#include "common.h"
#include "gamedata/ConsumableRecordA.h"

extern "C" {

s32 itemApplyToMember(s32 a, ConsumableRecordA *record, s32 c, s32 d, s32 e);
void flagValueSub(s32 id, s32 amount);

/* Apply the item to one target and consume one use on success, unless previewing or the item is permanent. */
s32 FUN_00480140(s32 target, s32 id, s32 preview)
{
    ConsumableRecordA *record = itemTableGetItemRecord(id);
    if (record == NULL) {
        return 1;
    }
    s32 result = itemApplyToMember(target, record, preview, 0, 0);
    if (result == 0) {
        if (preview == 0 && (record->useFlags & 1) == 0) {
            flagValueSub(id, 1);
        }
    }
    return result;
}

} /* extern "C" */

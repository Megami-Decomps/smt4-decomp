#include "common.h"
#include "gamedata/ConsumableRecordA.h"

extern "C" {

s32 itemApplyToMember(s32 a, ConsumableRecordA *record, s32 c, s32 d, s32 e);
void flagValueSub(s32 id, s32 amount);

// Apply the record to the value (the target on entry, the result on exit); when it succeeded for a plain request and is not permanent, consume one use.
s32 FUN_00480140(s32 value, s32 id, s32 plain)
{
    ConsumableRecordA *record = dataTable8FindRecord(id);
    if (record == NULL) {
        return 1;
    }
    value = itemApplyToMember(value, record, plain, 0, 0);
    if (value == 0) {
        if (plain == 0 && (record->useFlags & 1) == 0) {
            flagValueSub(id, 1);
        }
    }
    return value;
}

} /* extern "C" */

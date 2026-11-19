#include "shard/X14_EngineUnits.h"
#include "gamedata/SaveSlotRecord.h"
#include "script/ScriptArgs.h"

extern "C" {

u8 flagAt4IsClearOrMissing(void);
u32 uiSelectedRecordGetSecond(void);
u32 uiSelectedRecordGetThird(void);

/* Script command: report the pending value or a skill of the selected result unit.
 * Without the result screen, query the selected record instead. */
u32 scrCommResultGetPendingValueOrSkill(void)
{
    s32 useValue = scrGetArg(0);
    ResultWorkA *screen = g_engineCleanupOwner.instance;

    if (screen != NULL && useValue != 0) {
        scrSetResult(screen->pendingValue);
    } else {
        u32 result;
        if (screen != NULL) {
            SlotRecordA *record = gameGetSlotRecord(screen->selectedUnit()->rank);
            result = record->skills[g_engineCleanupOwner.instance->valueIndex];
        } else if (flagAt4IsClearOrMissing() != 0) {
            result = 0;
        } else {
            if (useValue != 0) {
                scrSetResult(uiSelectedRecordGetThird());
            } else {
                scrSetResult(uiSelectedRecordGetSecond());
            }
            return 1;
        }
        scrSetResult(result);
    }
    return 1;
}

} /* extern "C" */

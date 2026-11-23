/* Built with the unit's cflags (-O2 -Otime). */
#include "common.h"
#include "result/Result.h"
#include "script/ScriptArgs.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {


/* Script command: returns the pending result value (arg != 0) or the selected unit's value at the current index; 0 without a result screen. */
s32 FUN_003245b8(void)
{
    s32 which = scrGetArg(0);

    if (g_result != NULL) {
        u32 value;
        if (which == 0) {
            ResultEntry *entry = &g_result->entries[g_result->current];
            value = gameGetUnitRecord(entry->unitIndex)->skills.ids[g_result->valueIndex];
        } else {
            value = g_result->pendingValue;
        }

        scrSetResult(value);
    } else {
        scrSetResult(0);
    }
    return 1;
}

} /* extern "C" */

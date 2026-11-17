#include "common.h"
#include "result/Result.h"
#include "script/ScriptArgs.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {


/* Script command: the demon id of the current result entry, from its override id when the argument is non-zero, else from its unit's record. */
u32 scrCommResultGetDemonId(void)
{
    s32 useOverride = scrGetArg(0);

    if (g_result != NULL) {
        ResultEntry *entry = &g_result->entries[g_result->current];

        if (useOverride == 0) {
            scrSetResult(gameGetUnitRecord(entry->unitIndex)->id);
        } else {
            scrSetResult(entry->overrideId);
        }
    } else {
        scrSetResult(0);
    }
    return 1;
}

} /* extern "C" */

#include "common.h"
#include "result/Result.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {

int scrSetResult(int value);

/* Script command: looks up a value for the current result entry (from gameGetUnitRecord's table at FUN_00295408()) and passes it to scrSetResult. */
u32 scrCommResultSetCurrentUnitTableValue(void)
{
    ResultWork *result = g_result;

    if (result != NULL) {
        ResultEntry *entry = &result->entries[result->current];
        StatBlock *unit = gameGetUnitRecord(entry->unitIndex);
        int index = FUN_00295408();

        scrSetResult(unit->skills.ids[index]);
    }
    return 1;
}

} /* extern "C" */

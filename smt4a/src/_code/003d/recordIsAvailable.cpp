#include "common.h"
#include "quest_center/QuestRecordA.h"
#include "quest_center/QuestUnlock.h"

extern "C" {

extern s32 gameFlagIsSet(u32 flag);

/* 1 when the id has a record that is available; 0 if there is none, or flag A is set while flag B is not. */
u32 recordIsAvailable(s32 id)
{
    QuestRecordA *record = questDataGetRecord(id);

    if (record == NULL) {
        return 0;
    }
    if (gameUnlockRecordRequirementsMet(id) == 0) {
        return 0;
    }
    if (record->lockFlag != 0 && gameFlagIsSet(record->lockFlag) != 0 && (record->unlockFlag == 0 || gameFlagIsSet(record->unlockFlag) == 0)) {
        return 0;
    }
    return 1;
}

} /* extern "C" */

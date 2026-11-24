#include "common.h"
#include "quest_center/QuestRecordA.h"
#include "quest_center/QuestUnlock.h"

extern "C" {

s32 gameFlagIsSet(u32 flag);
u32 questIsCompleted(s32 member);

/* Returns bit 1 of the quest record's flags (same body as smt4 FUN_00298e00). */
static __inline u32 questRecordHasFlag2(u32 id)
{
    QuestRecordA *record = questDataGetRecord(id);
    return record != NULL ? (record->flags & 2) >> 1 : 0;
}

/* Return 1 when the record's required game flag and party members are all satisfied. */
s32 gameUnlockRecordRequirementsMet(u32 id)
{
    QuestRecordA *record = questDataGetRecord(id);

    if (record == NULL) {
        return 0;
    }
    if (record->requiredFlag != 0 && !gameFlagIsSet(record->requiredFlag)) {
        return 0;
    }
    if (record->requiredMembers[0] != 0 && !questIsCompleted(record->requiredMembers[0])) {
        return 0;
    }
    if (record->requiredMembers[1] != 0 && !questIsCompleted(record->requiredMembers[1])) {
        return 0;
    }
    if (record->requiredMembers[2] != 0 && !questIsCompleted(record->requiredMembers[2])) {
        return 0;
    }
    if (questRecordHasFlag2(id)) {
        return 1;
    }
    return 1;
}

} /* extern "C" */

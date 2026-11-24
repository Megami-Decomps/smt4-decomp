#include "shard/W5_W5Match7_DataRecord.h"
#include "quest_center/QuestRecordA.h"
#include "quest_center/QuestUnlock.h"
extern "C" {
ItemEligibilityStateA* gameGetPlayerData(void);
s32 goalConditionsSatisfied(s32);
s32 questIsCompleted(s32);
s32 questHasNewMark(s32);

// Tests the entry's flags, availability, and nonzero player-state threshold.
u32 FUN_003ded68(s32 id)
{
    if (questIsCompleted(id) != 0) {
        return 0;
    }
    if (questHasNewMark(id) != 0 && goalConditionsSatisfied(id) != 0) {
        return 0;
    }
    if (gameUnlockRecordRequirementsMet(id) != 0) {
        QuestRecordA* record = questDataGetRecord(id);
        if (record != NULL) {
            u32 value = gameGetPlayerData()->value;
            if (record->requiredLevel != 0 && record->requiredLevel <= (s32)value) {
                return 1;
            }
        }
    }
    return 0;
}
}

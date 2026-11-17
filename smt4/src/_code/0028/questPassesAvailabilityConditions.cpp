#include "quest_center/QuestRecord.h"

extern "C" {
u32 questRequirementsMet(u16);
u32 questIsCompleted(s32);
s32 gameFlagIsSet(u32);

u32 questPassesAvailabilityConditions(u16 questId)
{
    const QuestRecord *record = dataTable1bOr1cGetRecord(questId);
    if (!record)
        return 0;
    if (!questRequirementsMet(questId))
        return 0;
    if (record->excludedQuests[0] && questIsCompleted(record->excludedQuests[0]))
        return 0;
    if (record->excludedQuests[1] && questIsCompleted(record->excludedQuests[1]))
        return 0;
    if (questId < 350) {
        switch (record->route) {
        case 0:
            if (gameFlagIsSet(0x223) || gameFlagIsSet(0x224) || gameFlagIsSet(0x295))
                return 0;
            break;
        case 1:
            if (!gameFlagIsSet(0x223))
                return 0;
            break;
        case 2:
            if (!gameFlagIsSet(0x224))
                return 0;
            break;
        }
    }
    if (record->hideStartFlag && gameFlagIsSet(record->hideStartFlag) &&
        (!record->hideEndFlag || !gameFlagIsSet(record->hideEndFlag)))
        return 0;
    return 1;
}
}

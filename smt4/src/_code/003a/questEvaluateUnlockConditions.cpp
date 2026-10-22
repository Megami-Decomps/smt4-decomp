#include "quest_center/QuestUnlockConditions.h"

extern "C" {
s32 gameFlagIsSet(u32 flag);
s32 questIsCompleted(u16 quest);

// Classify a record as unavailable, unconditional or unlocked by its prerequisites.
u32 questEvaluateUnlockConditions(const QuestUnlockConditions *conditions)
{
    if (conditions->requiredFlag != 0) {
        if (!gameFlagIsSet(conditions->requiredFlag))
            return 0;
    } else if (conditions->blockedFlag == 0 && conditions->requiredQuest == 0) {
        return 1;
    }
    if (conditions->blockedFlag != 0 && gameFlagIsSet(conditions->blockedFlag))
        return 0;
    if (conditions->requiredQuest == 0 || questIsCompleted(conditions->requiredQuest))
        return 2;
    return 0;
}
}

#include "common.h"
#include "quest_center/QuestRecord.h"

extern "C" {
extern s32 gameFlagIsSet(u32);
extern s32 questIsCompleted(u32);
extern s32 padGetStickHorizontalDirection(void);
extern s32 padStickDirectionIsDown(u32);

/* Whether a quest's required flags, finished quests and stick input all hold. */
u32 questRequirementsMet(u16 questId)
{
    QuestRecord *quest = dataTable1bOr1cGetRecord(questId);
    if (quest == NULL) {
        return 0;
    }
    if (quest->requiredFlag != 0 && gameFlagIsSet(quest->requiredFlag) == 0) {
        return 0;
    }
    if (quest->forbiddenFlag != 0 && gameFlagIsSet(quest->forbiddenFlag) != 0) {
        return 0;
    }
    if (quest->requiredQuests[0] != 0 && questIsCompleted(quest->requiredQuests[0]) == 0) {
        return 0;
    }
    if (quest->requiredQuests[1] != 0 && questIsCompleted(quest->requiredQuests[1]) == 0) {
        return 0;
    }
    if (quest->requiredQuests[2] != 0 && questIsCompleted(quest->requiredQuests[2]) == 0) {
        return 0;
    }
    switch (quest->requiredInput) {
    case 1:
        if (padGetStickHorizontalDirection() != 5) {
            return 0;
        }
        break;
    case 2:
        if (padGetStickHorizontalDirection() != 4) {
            return 0;
        }
        break;
    case 3:
        if (padGetStickHorizontalDirection() != 1) {
            return 0;
        }
        break;
    case 4:
        if (padStickDirectionIsDown(5) == 0) {
            return 0;
        }
        break;
    case 5:
        if (padStickDirectionIsDown(4) == 0) {
            return 0;
        }
        break;
    }
    if (quest->excludedQuests[0] != 0 && questIsCompleted(quest->excludedQuests[0]) != 0) {
        return 0;
    }
    if (quest->excludedQuests[1] != 0 && questIsCompleted(quest->excludedQuests[1]) != 0) {
        return 0;
    }
    quest = dataTable1bOr1cGetRecord(questId);
    if (quest == NULL) {
        return 1;
    }
    u32 gated = (quest->flags & 4) >> 2;
    if (gated == 0 || gameFlagIsSet(0x675) != 0 || gameFlagIsSet(0x676) != 0 ||
        gameFlagIsSet(0x677) != 0 || gameFlagIsSet(0x678) != 0 || gameFlagIsSet(0x679) != 0 ||
        gameFlagIsSet(0x67a) != 0 || gameFlagIsSet(0x67b) != 0 || gameFlagIsSet(0x674) != 0) {
        return 1;
    }
    return 0;
}
}

#include "common.h"

/* Quest table record: the flags, quests and stick input a quest requires. */
struct QuestRecord {
    u8 unk00[7];
    u8 flags;              // 0x007 (bit 2: also gated on the 0x674-0x67b flags)
    u8 unk08[0x196];
    u16 requiredFlag;      // 0x19E
    u16 requiredQuest1;    // 0x1A0
    u16 requiredQuest2;    // 0x1A2
    u16 requiredQuest3;    // 0x1A4
    u16 requiredInput;     // 0x1A6 (stick direction condition)
    u16 forbiddenFlag;     // 0x1A8
    u16 excludedQuest1;    // 0x1AA
    u16 excludedQuest2;    // 0x1AC
};

extern "C" {
extern QuestRecord *dataTable1bOr1cGetRecord(u16);
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
    if (quest->requiredQuest1 != 0 && questIsCompleted(quest->requiredQuest1) == 0) {
        return 0;
    }
    if (quest->requiredQuest2 != 0 && questIsCompleted(quest->requiredQuest2) == 0) {
        return 0;
    }
    if (quest->requiredQuest3 != 0 && questIsCompleted(quest->requiredQuest3) == 0) {
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
    if (quest->excludedQuest1 != 0 && questIsCompleted(quest->excludedQuest1) != 0) {
        return 0;
    }
    if (quest->excludedQuest2 != 0 && questIsCompleted(quest->excludedQuest2) != 0) {
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

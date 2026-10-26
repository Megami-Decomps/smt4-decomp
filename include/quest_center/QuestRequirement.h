#ifndef QUEST_CENTER_QUESTREQUIREMENT_H
#define QUEST_CENTER_QUESTREQUIREMENT_H
#include "common.h"
#include <stddef.h>
struct QuestRequirement { u16 kind; u16 id; s32 count; };
struct QuestRequirementDefinition {
    u8 prefix[6];
    u8 kind;
    u8 unk07[0x165];
    QuestRequirement requirements[1];
};
struct QuestRequirementProgress {
    s32 remaining;
    u16 id;
    u8 isItem;
    u8 unk07;
    s32 current;
};
struct QuestRequirementSavedProgress { u16 flags; u16 counts[1]; };
typedef char QuestRequirementOffsets[offsetof(QuestRequirementDefinition, requirements) == 0x16C && sizeof(QuestRequirement) == 8 && sizeof(QuestRequirementProgress) == 0xC && offsetof(QuestRequirementProgress, current) == 8 ? 1 : -1];
#endif

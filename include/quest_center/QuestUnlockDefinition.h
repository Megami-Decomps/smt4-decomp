#ifndef QUEST_CENTER_QUESTUNLOCKDEFINITION_H
#define QUEST_CENTER_QUESTUNLOCKDEFINITION_H
#include "common.h"
#include <stddef.h>
struct QuestUnlockDefinition {
    u8 prefix[0x20];
    u16 id;
    u8 unk22[4];
    u16 category;
    u8 unk28[3];
    u8 minimumLevel;
    u16 requiredFlags[3];
    u16 requiredQuests[3];
    u8 unk38[8];
};
typedef char QuestUnlockDefinitionLayout[sizeof(QuestUnlockDefinition) == 0x40 &&
    offsetof(QuestUnlockDefinition, id) == 0x20 &&
    offsetof(QuestUnlockDefinition, category) == 0x26 &&
    offsetof(QuestUnlockDefinition, minimumLevel) == 0x2B &&
    offsetof(QuestUnlockDefinition, requiredFlags) == 0x2C &&
    offsetof(QuestUnlockDefinition, requiredQuests) == 0x32 ? 1 : -1];
#endif

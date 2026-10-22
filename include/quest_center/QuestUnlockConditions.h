#ifndef QUEST_CENTER_QUESTUNLOCKCONDITIONS_H
#define QUEST_CENTER_QUESTUNLOCKCONDITIONS_H

#include "common.h"

struct QuestUnlockConditions {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ u16 requiredFlag;
    /* 0x04 */ u16 blockedFlag;
    /* 0x06 */ u16 requiredQuest;
};

#endif

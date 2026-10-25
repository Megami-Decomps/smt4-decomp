#ifndef QUEST_CENTER_QUESTREGISTRATION_H
#define QUEST_CENTER_QUESTREGISTRATION_H

#include "common.h"

// Request packet the quest-center script commands hand to the quest-center registrar.
struct QuestRegistration {
    u32 quest; // 0x00
    u32 parameter; // 0x04
    u32 kind; // 0x08

    QuestRegistration(u32 questId, u32 questParameter, u32 requestKind)
    {
        quest = questId;
        parameter = questParameter;
        kind = requestKind;
    }
};

#endif

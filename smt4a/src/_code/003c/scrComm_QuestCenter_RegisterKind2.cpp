#include "quest_center/QuestRegistration.h"

extern "C" {
u32 scrGetArg(u32 index);
void *jyoucyuGetTableEntry(u32 index);
void questCenterInitialize(const QuestRegistration *request, u32 size);

// Register a kind-two quest-center request from the two script arguments.
u32 scrComm_QuestCenter_RegisterKind2(void)
{
    u32 quest = scrGetArg(0);
    u32 parameter = scrGetArg(1);
    jyoucyuGetTableEntry(0);
    QuestRegistration request(quest, parameter, 2);
    questCenterInitialize(&request, sizeof(request));
    return 1;
}
}

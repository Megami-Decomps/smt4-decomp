#include "quest_center/QuestRegistration.h"

extern "C" {
u32 scrGetArg(u32 index);
void *jyoucyuGetTableEntry(u32 index);
void QcMain_Register(const QuestRegistration *request, u32 size);

// Register the script's two arguments as a kind-1 quest-center request.
u32 scrComm_QuestCenter_RegisterKind1(void)
{
    u32 quest = scrGetArg(0);
    u32 parameter = scrGetArg(1);
    jyoucyuGetTableEntry(0);
    QuestRegistration request(quest, parameter, 1);
    QcMain_Register(&request, sizeof(request));
    return 1;
}
}

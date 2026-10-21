/* NON_MATCHING: packet kind constant is materialized/stored through r0 rather than retail r1. */
#include "common.h"

struct QuestRegistration {
    u32 quest; // 0x00
    u32 parameter; // 0x04
    u32 kind; // 0x08
};

extern "C" {
u32 scrGetArg(u32 index);
void *jyoucyuGetTableEntry(u32 index);
void QcMain_Register(const QuestRegistration *request, u32 size);

// Register a kind-two quest-center request from the two script arguments.
u32 scrComm_QuestCenter_RegisterKind2(void)
{
    u32 quest = scrGetArg(0);
    u32 parameter = scrGetArg(1);
    jyoucyuGetTableEntry(0);
    QuestRegistration request;
    request.kind = 2;
    request.quest = quest;
    request.parameter = parameter;
    QcMain_Register(&request, sizeof(request));
    return 1;
}
}

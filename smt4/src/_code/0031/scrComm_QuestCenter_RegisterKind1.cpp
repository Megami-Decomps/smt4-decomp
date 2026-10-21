/* NON_MATCHING: kind 1 is materialized/stored through r0 instead of retail r1. */
#include "common.h"

struct QuestRegistration {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
    /* 0x08 */ u32 kind;
};

extern "C" {
u32 scrGetArg(u32 index);
void* jyoucyuGetTableEntry(u32 index);
void QcMain_Register(const QuestRegistration* registration, u32 size);

// Register the script's two arguments as a kind-1 quest-center request.
u32 scrComm_QuestCenter_RegisterKind1(void)
{
    u32 first = scrGetArg(0);
    u32 second = scrGetArg(1);
    jyoucyuGetTableEntry(0);
    QuestRegistration registration;
    registration.first = first;
    registration.second = second;
    registration.kind = 1;
    QcMain_Register(&registration, sizeof(registration));
    return 1;
}
}

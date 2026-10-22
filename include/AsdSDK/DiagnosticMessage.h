#ifndef ASD_DIAGNOSTIC_MESSAGE_H
#define ASD_DIAGNOSTIC_MESSAGE_H
#include "common.h"

struct DiagnosticMessage;
struct DiagnosticVtable {
    void (*destroy)(DiagnosticMessage* message); // 0x00
    void* unk04; // 0x04
    const char* (*getText)(DiagnosticMessage* message); // 0x08
};
struct DiagnosticMessage {
    DiagnosticVtable* vtable; // 0x00
    char* text; // 0x04
};
#endif

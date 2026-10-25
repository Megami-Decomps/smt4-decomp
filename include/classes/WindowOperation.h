#ifndef CLASSES_WINDOWOPERATION_H
#define CLASSES_WINDOWOPERATION_H

#include "classes/WindowStatus.h"

struct WindowOperationResult {
    WindowOperationResult() : status(0), first(0), second(0) {}
    explicit WindowOperationResult(u8 status);
    /* 0x00 */ u8 status;
    /* 0x04 */ WindowStatusResult result;
    /* 0x0c */ u32 first;
    /* 0x10 */ u32 second;
};
typedef char WindowOperationResultLayoutCheck[
    sizeof(WindowOperationResult) == 0x14 &&
    offsetof(WindowOperationResult, result) == 4 &&
    offsetof(WindowOperationResult, first) == 0xc &&
    offsetof(WindowOperationResult, second) == 0x10 ? 1 : -1];
struct WindowOperationRequest {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 unk02;
    /* 0x04 */ u32 words[5];
};
struct WindowOperationState {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ WindowOperationRequest request;
};

#endif

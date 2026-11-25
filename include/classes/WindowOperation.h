#ifndef CLASSES_WINDOWOPERATION_H
#define CLASSES_WINDOWOPERATION_H

#include "shard/W6_W6Match5_QueuedRequest.h"

/* The mount window's request value. Callers outside the file-content routines also use
 * its out-of-line constructor; the request's data and by-value ABI are shared. */
struct WindowOperationResult : RequestParameters {
    explicit WindowOperationResult(u8 status);
    using RequestParameters::operator=;
};
typedef char WindowOperationResultLayoutCheck[
    sizeof(WindowOperationResult) == 0x14 &&
    offsetof(WindowOperationResult, result) == 4 &&
    offsetof(WindowOperationResult, word3) == 0xc &&
    offsetof(WindowOperationResult, word4) == 0x10 ? 1 : -1];
struct WindowOperationRequest {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 unk02;
    /* 0x04 */ u32 words[5];
};
struct WindowOperationState {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ WindowOperationRequest request;
    /* 0x20 */ void *mountBuffer;
    /* 0x24 */ char mountName[0x10];
    /* 0x34 */ s32 mountBufferSize;
};
typedef char WindowOperationMountOffsets[
    offsetof(WindowOperationState, mountBuffer) == 0x20 &&
    offsetof(WindowOperationState, mountName) == 0x24 &&
    offsetof(WindowOperationState, mountBufferSize) == 0x34 ? 1 : -1];

extern "C" RequestParameters aocFileContentPrepareMountBuffer(WindowOperationState *state, u32 id);

#endif

#ifndef GAMEDATA_SAVELOADTHREADREQUEST_H
#define GAMEDATA_SAVELOADTHREADREQUEST_H

#include "common.h"
#include "nn/os/ThreadLaunch.h"
#include <stddef.h>

struct SaveLoadThreadRequest {
    u8 kind; // 0x00
    u8 mode; // 0x01
    u8 unk02[2];
    u32 file; // 0x04
    u32 slot; // 0x08
    u32 unk0c;
    u8 unk10[4];
    void *payload; // 0x14
    u32 payloadSize; // 0x18
    u8 unk1c[4];
    s32 firstResult; // 0x20
    s32 secondResult; // 0x24
    void *stackAllocation; // 0x28
    ThreadStackStorage stack; // 0x2c
    ThreadHandleState thread; // 0x44
    u32 semaphore; // 0x4c
    void *messageFile; // 0x50
    void *modelFile; // 0x54
    u32 unk58;
};

typedef char SaveLoadThreadRequestLayoutCheck[sizeof(SaveLoadThreadRequest) == 0x5c && offsetof(SaveLoadThreadRequest, file) == 4 && offsetof(SaveLoadThreadRequest, payload) == 0x14 && offsetof(SaveLoadThreadRequest, payloadSize) == 0x18 && offsetof(SaveLoadThreadRequest, messageFile) == 0x50 && offsetof(SaveLoadThreadRequest, modelFile) == 0x54 ? 1 : -1];
typedef char SaveLoadThreadRequestWorkerOffsets[
    offsetof(SaveLoadThreadRequest, stackAllocation) == 0x28 &&
    offsetof(SaveLoadThreadRequest, stack) == 0x2c &&
    offsetof(SaveLoadThreadRequest, thread) == 0x44 &&
    offsetof(SaveLoadThreadRequest, semaphore) == 0x4c &&
    sizeof(SaveLoadThreadRequest) == 0x5c ? 1 : -1];

#endif

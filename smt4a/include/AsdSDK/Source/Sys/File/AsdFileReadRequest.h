#ifndef ASD_FILE_READ_REQUEST_A_H
#define ASD_FILE_READ_REQUEST_A_H

#include "AsdSDK/Source/Sys/File/AsdFile.h"
#include "nn/Result.h"

/* Apocalypse's read request: a context and SDK result replace IV's tail list links. */
struct AsdFileReadRequestA {
    /* 0x000 */ s32 state;
    /* 0x004 */ s32 lifetime;
    /* 0x008 */ s32 lifetimeStep;
    /* 0x00C */ void *buffer;
    /* 0x010 */ s32 userBuffer;
    /* 0x014 */ u32 unk014;
    /* 0x018 */ u32 size;
    /* 0x01C */ u32 unk01C;
    /* 0x020 */ u8 flag;
    /* 0x021 */ u8 unk021[3];
    /* 0x024 */ s32 heapKind;
    /* 0x028 */ u32 alignment;
    /* 0x02C */ char path[ASD_FILE_PATH_LEN];
    /* 0x12C */ void *stream;
    /* 0x130 */ void (*onDone)(void *);
    /* 0x134 */ void *onDoneArg;
    /* 0x138 */ void (*onOpen)(void *);
    /* 0x13C */ void *context;
    /* 0x140 */ nn::Result result;
    /* 0x144 */ u32 unk144;
    /* 0x148 */ u32 unk148;
};
typedef char AsdFileReadRequestALayoutCheck[sizeof(AsdFileReadRequestA) == 0x14C &&
    offsetof(AsdFileReadRequestA, path) == 0x2C &&
    offsetof(AsdFileReadRequestA, onDone) == 0x130 &&
    offsetof(AsdFileReadRequestA, context) == 0x13C &&
    offsetof(AsdFileReadRequestA, result) == 0x140 ? 1 : -1];

extern "C" {
void sysMemClear(void *data, u32 size);
void fileReadRequestReset(AsdFileReadRequestA *record);
}

/* Resets a request to the defaults used by the asynchronous and synchronous loaders. */
static __inline void asdFileResetReadRequest(AsdFileReadRequestA *record)
{
    record->state = ASD_FILE_QUEUED;
    record->lifetime = 1;
    record->lifetimeStep = 0;
    record->buffer = NULL;
    record->userBuffer = 0;
    record->unk014 = 0;
    record->size = 0;
    record->unk01C = 0;
    record->flag = 0;
    record->alignment = 0x80;
    record->heapKind = 0;
    sysMemClear(record->path, sizeof(record->path));
    record->stream = NULL;
    record->onDone = NULL;
    record->onDoneArg = NULL;
    record->onOpen = NULL;
    record->context = NULL;
    record->result = 0;
    record->unk144 = 0;
    record->unk148 = 0;
}

#endif

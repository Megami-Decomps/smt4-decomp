#ifndef NN_OS_THREADLAUNCH_H
#define NN_OS_THREADLAUNCH_H

#include "common.h"
#include <stddef.h>
#include "shard/W6_W6Match3_ThreadHandleState.h"

extern "C" {
typedef void (*ThreadEntryPoint)(void *argument);
}

struct ThreadArgumentDescriptor {
    /* 0x00 */ u32 argumentSize;
    union {
        /* 0x04 */ void (*callbacks[3])(void);
        struct {
            /* 0x04 */ void (*copy)(const void *source, void *destination);
            /* 0x08 */ void (*destroy)(void *argument);
            /* 0x0C */ void (*invoke)(ThreadEntryPoint entry, void *argument);
        } operations;
    };
};
struct ThreadStartupCore {
    void (*destroy)(void *argument);
    void (*invoke)(ThreadEntryPoint entry, void *argument);
    ThreadEntryPoint userEntry;
    void *argument;
    void *stackTop;
};
struct ThreadStartupRecord : ThreadStartupCore {
    u8 owned;
    u8 unk15[3];
};
typedef char ThreadStartupRecordLayoutCheck[sizeof(ThreadArgumentDescriptor) == 0x10 &&
    offsetof(ThreadArgumentDescriptor, operations.copy) == 4 &&
    offsetof(ThreadArgumentDescriptor, operations.destroy) == 8 &&
    offsetof(ThreadArgumentDescriptor, operations.invoke) == 0xc &&
    offsetof(ThreadStartupRecord, destroy) == 0 && offsetof(ThreadStartupRecord, invoke) == 4 &&
    sizeof(ThreadStartupRecord) == 0x18 && offsetof(ThreadStartupRecord, argument) == 0xc &&
    offsetof(ThreadStartupRecord, stackTop) == 0x10 && offsetof(ThreadStartupRecord, owned) == 0x14 ? 1 : -1];
typedef char ThreadStartupCoreLayoutCheck[
    sizeof(ThreadStartupCore) == 0x14 &&
    offsetof(ThreadStartupCore, userEntry) == 8 &&
    offsetof(ThreadStartupCore, argument) == 0xc &&
    offsetof(ThreadStartupCore, stackTop) == 0x10 ? 1 : -1];

struct ThreadStackInfo {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 address;
    /* 0x0C */ u32 size;
};
struct ThreadStackStorage {
    ThreadStackInfo info;
    /* 0x10 */ u8 owned;
    /* 0x11 */ u8 unk11[3];
    /* 0x14 */ u32 handle;
};
typedef char ThreadStackStorageOffsets[
    offsetof(ThreadStackStorage, info.address) == 8 &&
    offsetof(ThreadStackStorage, info.size) == 0xC &&
    offsetof(ThreadStackStorage, owned) == 0x10 &&
    offsetof(ThreadStackStorage, handle) == 0x14 &&
    sizeof(ThreadStackStorage) == 0x18 ? 1 : -1];
struct ThreadLaunchWork {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ u8 thread[0xC];
    /* 0x94 */ ThreadStackInfo *stack;
};

#endif

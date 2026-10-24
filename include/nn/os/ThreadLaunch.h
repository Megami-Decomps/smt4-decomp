#ifndef NN_OS_THREADLAUNCH_H
#define NN_OS_THREADLAUNCH_H

#include "common.h"
#include <stddef.h>

struct ThreadArgumentDescriptor {
    /* 0x00 */ u32 argumentSize;
    /* 0x04 */ void (*callbacks[3])(void);
};
struct ThreadStackInfo {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 address;
    /* 0x0C */ u32 size;
};
struct ThreadStackStorage {
    ThreadStackInfo info;
    /* 0x10 */ u8 owned;
    u8 unk11[7];
};
typedef char ThreadStackStorageOffsets[
    offsetof(ThreadStackStorage, info.address) == 8 &&
    offsetof(ThreadStackStorage, info.size) == 0xC &&
    offsetof(ThreadStackStorage, owned) == 0x10 &&
    sizeof(ThreadStackStorage) == 0x18 ? 1 : -1];
struct ThreadLaunchWork {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ u8 thread[0xC];
    /* 0x94 */ ThreadStackInfo *stack;
};

#endif

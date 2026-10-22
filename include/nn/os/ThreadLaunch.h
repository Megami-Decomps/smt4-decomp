#ifndef NN_OS_THREADLAUNCH_H
#define NN_OS_THREADLAUNCH_H

#include "common.h"

struct ThreadArgumentDescriptor {
    /* 0x00 */ u32 argumentSize;
    /* 0x04 */ void (*callbacks[3])(void);
};
struct ThreadStackInfo {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 address;
    /* 0x0C */ u32 size;
};
struct ThreadLaunchWork {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ u8 thread[0xC];
    /* 0x94 */ ThreadStackInfo *stack;
};

#endif

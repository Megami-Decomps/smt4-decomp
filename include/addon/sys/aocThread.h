#ifndef ADDON_SYS_AOCTHREAD_H
#define ADDON_SYS_AOCTHREAD_H

#include "common.h"

struct AocThreadHandle {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u8 unk10;
    /* 0x11 */ u8 unk11[7];
};

struct AocThread {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *stack;
    /* 0x0C */ AocThreadHandle *handle;
};

#endif

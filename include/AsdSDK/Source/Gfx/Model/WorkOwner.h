#ifndef ASD_WORKOWNER_H
#define ASD_WORKOWNER_H

#include "common.h"
#include <stddef.h>

struct Work20Ref;

/* Owns a work reference and up to three buffers. */
struct WorkOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Work20Ref *work;
    /* 0x0C */ u32 block0C[1];
    /* 0x10 */ void *buffers[3];
};

typedef char WorkOwnerLayoutCheck[offsetof(WorkOwner, work) == 8 &&
    offsetof(WorkOwner, buffers) == 0x10 && sizeof(WorkOwner) == 0x1C ? 1 : -1];

extern "C" void workOwnerRelease(WorkOwner *owner);

#endif

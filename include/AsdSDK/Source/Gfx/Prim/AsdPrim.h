/* AsdSDK/Source/Gfx/Prim/AsdPrim.c: double-buffered scratch memory for primitives. */
#ifndef ASDSDK_SOURCE_GFX_PRIM_ASDPRIM_H
#define ASDSDK_SOURCE_GFX_PRIM_ASDPRIM_H

#include "common.h"

/* Two scratch buffers used on alternate frames: bump allocation inside the current one. */
typedef struct AsdPrimBuffers {
    /* 0x00 */ u8 *buf[2];
    /* 0x08 */ s32 used[2];     /* bytes handed out of each buffer */
    /* 0x10 */ s32 current;     /* index of the buffer in use */
    /* 0x14 */ u32 size;        /* size of each buffer */
} AsdPrimBuffers;

#endif

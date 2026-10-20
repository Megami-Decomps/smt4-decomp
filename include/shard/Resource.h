/* A resource slot: a typed payload released through g_handlerTable (entries of 0x44 bytes, the
 * release callback at 0x10) plus two growable buffers. */
#ifndef SHARD_RESOURCE_H
#define SHARD_RESOURCE_H

#include "common.h"

typedef struct Handler {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ void (*release)(void *data);
    /* 0x14 */ u8 unk14[8];
    /* 0x1C */ void (*callback)(void *data);
    /* 0x20 */ void (*callback20)(void *data, s32 arg);
    /* 0x24 */ void (*callback24)(void *data, s32 arg);
    /* 0x28 */ void (*callback28)(void *data);
    /* 0x2C */ void (*callback2C)(void *data, u32 arg);
    /* 0x30 */ void (*callback30)(void *data, s32 arg);
    /* 0x34 */ u8 unk34[0x10];
} Handler;                      /* 0x44 */

typedef struct Resource {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 type;          /* index into g_handlerTable */
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ void *data;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ u32 sizeA;
    /* 0x14 */ u32 countA;
    /* 0x18 */ void *bufferA;
    /* 0x1C */ u8 unk1C[4];
    /* 0x20 */ u32 sizeB;
    /* 0x24 */ u32 countB;
    /* 0x28 */ void *bufferB;
} Resource;

extern Handler g_handlerTable[];

#endif

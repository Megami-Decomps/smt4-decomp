/* The part of g_nngxState (Apocalypse) that holds seven registered values behind a lock. */
#ifndef SHARD_S3GXSTATE_H
#define SHARD_S3GXSTATE_H

#include "common.h"

#define GX_SLOT_COUNT 7

typedef struct GxSlotBlock {
    /* 0x00 */ u8 lock[0x10];            /* CriticalSection */
    /* 0x10 */ u32 slot[GX_SLOT_COUNT];
} GxSlotBlock;

typedef struct GxSlotState {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ GxSlotBlock *slots;
} GxSlotState;

#endif

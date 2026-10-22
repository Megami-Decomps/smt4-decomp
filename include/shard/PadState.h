/* The input state block returned by gameGetPlayerData(). */
#ifndef SHARD_PADSTATE_H
#define SHARD_PADSTATE_H

#include "common.h"
#include <stddef.h>

typedef struct PadState {
    /* 0x00 */ u8 unk00[0x2];
    /* 0x02 */ s16 unk02;
    /* 0x04 */ u16 unk04;
    /* 0x06 */ u8 unk06[0x6];
    /* 0x0C */ u16 unk0C;
    /* 0x0E */ u8 unk0E[0xE];
    /* 0x1C */ s16 unk1C;
    /* 0x1E */ s16 unk1E;
    /* 0x20 */ u8 unk20[0xA];
    /* 0x2A */ s16 unk2A;
    /* 0x2C */ s16 unk2C;
    /* 0x2E */ u8 unk2E[0x6];
    /* 0x34 */ u32 unk34;
    /* 0x38 */ u32 unk38;
    /* 0x3C */ u32 unk3C;
    /* 0x40 */ u32 unk40;
    union {
        /* 0x44 */ u8 unk44[0x2E];
        /* 0x44 */ u8 inventoryCounts[8];
    };
    /* 0x72 */ u16 unk72;
    /* 0x74 */ s16 x;
    /* 0x76 */ u8 unk76;
} PadState;
typedef char PadStateInventoryOffsetCheck[
    offsetof(PadState, unk34) == 0x34 &&
    offsetof(PadState, inventoryCounts) == 0x44 && sizeof(PadState) == 0x78 ? 1 : -1];

/* These four words are also the eight halfword inventory identifiers. */
static __inline u16 *padStateInventoryIds(PadState *state)
{
    return reinterpret_cast<u16 *>(&state->unk34);
}

#endif

/* Structs shared by the helper functions in code shard 0046. */
#ifndef SHARD_SHARD0046_H
#define SHARD_SHARD0046_H

#include "common.h"

#include "shard/Shard0045.h"

typedef struct VoiceB {
    /* 0x000 */ u8 unk000[0x98];
    /* 0x098 */ u8 unk098[4];
    /* 0x09C */ u8 unk09C[0x9C];
    /* 0x138 */ u8 paused;
    /* 0x139 */ u8 active;
    /* 0x13A */ u8 unk13A[0x6E];
    /* 0x1A8 */ u32 handle;
    /* 0x1AC */ struct VoiceB *next;
} VoiceB;

typedef struct VoiceOwner {
    /* 0x000 */ u8 unk000[0x7A];
    /* 0x07A */ u8 unk07A;
    /* 0x07B */ u8 unk07B[0xB1];
    /* 0x12C */ u8 unk12C[4];
    /* 0x130 */ VoiceB *voices;
} VoiceOwner;

typedef struct CallerA {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u8 unk28[0x14];
    /* 0x3C */ s32 unk3C;
    /* 0x40 */ u8 unk40[0x38];
    /* 0x78 */ s32 unk78;
} CallerA;

typedef struct Entry40 {
    /* 0x00 */ u8 data[0x40];
} Entry40;

typedef struct Entry88 {
    /* 0x00 */ u8 data[0x88];
} Entry88;

typedef struct Obj118 {
    /* 0x000 */ u8 unk000[0x118];
    /* 0x118 */ u32 unk118;
    /* 0x11C */ u8 unk11C[4];
    /* 0x120 */ u8 unk120;
    /* 0x121 */ u8 unk121;
} Obj118;

typedef struct JobStateObj {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u32 state;
    /* 0x008 */ u32 unk08;
    /* 0x00C */ u8 unk00C[0x2A8];
    /* 0x2B4 */ u32 *job;
} JobStateObj;

typedef struct VoiceCtl {
    /* 0x00 */ u8 unk00[0x15];
    /* 0x15 */ u8 started;
    /* 0x16 */ u8 unk16;
    /* 0x17 */ u8 unk17;
    /* 0x18 */ u8 unk18[8];
    /* 0x20 */ u16 flags;
    /* 0x22 */ u8 unk22[10];
    /* 0x2C */ u8 panMode;
    /* 0x2D */ u8 panCurve;
} VoiceCtl;

#endif

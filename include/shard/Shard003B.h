/* Structs shared by the helper functions in code shard 003B. */
#ifndef SHARD_SHARD003B_H
#define SHARD_SHARD003B_H

#include "common.h"

#include "shard/Shard003A.h"

typedef struct Quad {
    /* 0x00 */ u32 a;
    /* 0x04 */ u32 b;
    /* 0x08 */ u32 c;
    /* 0x0C */ u32 d;
} Quad;

typedef struct ResSet {
    /* 0x00 */ u32 h0;
    /* 0x04 */ u32 h1;
    /* 0x08 */ u32 a[7];
    /* 0x24 */ union {
        u8 unk24[0x10];
        u32 params24[4];
    };
    /* 0x34 */ u32 h34;
    /* 0x38 */ u32 h38;
    /* 0x3C */ u8 unk3C[4];
    /* 0x40 */ u32 h40;
    /* 0x44 */ u8 unk44[4];
    /* 0x48 */ u32 h48;
    /* 0x4C */ u8 unk4C[4];
    /* 0x50 */ u32 b[8];
    /* 0x70 */ u8 unk70[0x20];
    /* 0x90 */ s16 unk90;
    /* 0x92 */ u8 unk92[2];
    /* 0x94 */ s32 states[9];
} ResSet;

typedef struct Rec12C {
    /* 0x000 */ u8 unk000[0x12C];
    /* 0x12C */ u16 unk12C;
} Rec12C;

/* The two-byte input consumed by this pool implementation. */
typedef struct PoolBytePair {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 first;
    /* 0x18 */ u32 second;
} PoolBytePair;

typedef struct StateFlag46 {
    /* 0x00 */ u8 unk00[0x46];
    /* 0x46 */ u16 state;
} StateFlag46;

#endif

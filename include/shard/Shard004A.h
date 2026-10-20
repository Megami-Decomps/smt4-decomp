/* Structs shared by the helper functions in code shard 004A. */
#ifndef SHARD_SHARD004A_H
#define SHARD_SHARD004A_H

#include "common.h"

#include "shard/Shard0049.h"

typedef struct Screen4A {
    /* 0x0000 */ u8 unk0000[0x14];
    /* 0x0014 */ s32 state;
    /* 0x0018 */ u32 unk18;
    /* 0x001C */ u8 unk001C[0xC0];
    /* 0x00DC */ u8 block0DC[4];
    /* 0x00E0 */ u8 unk00E0[0x77C];
    /* 0x085C */ u32 job;
    /* 0x0860 */ u8 unk0860;
    /* 0x0861 */ u8 unk0861[0xA00F];
    /* 0xA870 */ u8 unkA870;
    /* 0xA871 */ u8 unkA871;
    /* 0xA872 */ s16 unkA872;
    /* 0xA874 */ u16 unkA874;
} Screen4A;

#endif

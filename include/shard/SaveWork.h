/* The work block returned by gameGetMapBlock(). */
#ifndef SHARD_SAVEWORK_H
#define SHARD_SAVEWORK_H

#include "common.h"

typedef struct SaveWork {
    /* 0x0000 */ u8 unk0000[0x3];
    /* 0x0003 */ u8 unk03;
    /* 0x0004 */ u8 unk0004[0x14];
    /* 0x0018 */ u32 unk18;
    /* 0x001C */ u8 unk1C;
    /* 0x001D */ u8 unk001D[0x3];
    /* 0x0020 */ s16 unk20;
    /* 0x0022 */ u8 unk0022[0xBB6];
    /* 0x0BD8 */ u8 unkBD8[1];
} SaveWork;

#endif

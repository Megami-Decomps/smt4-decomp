/* Table of game-data block pointers and small flags at g_gameDataBlocks (0x43e2a8). */
#ifndef SHARD_GAMEDATABLOCKS_H
#define SHARD_GAMEDATABLOCKS_H

#include "common.h"

typedef struct GameDataBlocks {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ s8 unk02;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ u8 *unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u16 *unk0C;
    /* 0x10 */ u32 unk10;
} GameDataBlocks;

extern GameDataBlocks g_gameDataBlocks;

#endif

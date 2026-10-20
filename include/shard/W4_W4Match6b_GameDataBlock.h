/* smt4a: the game data block g_gameDataBlocks points at (0x57f698). Its save-data part starts at +0x88. */
#ifndef SHARD_W4_W4MATCH6B_GAMEDATABLOCK_H
#define SHARD_W4_W4MATCH6B_GAMEDATABLOCK_H

#include "common.h"

typedef struct GameDataSub {
    /* 0x00000 */ u8 unk00000[0x2158C];
    /* 0x2158C */ u32 table[0x1A20];
    /* 0x27E0C */ u8 unk27e0c[2];
    /* 0x27E0E */ u8 flag0e;
    /* 0x27E0F */ u8 flags;
} GameDataSub;

typedef struct GameDataBlock {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ GameDataSub sub;
} GameDataBlock;

typedef struct GameDataBlocks {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ GameDataBlock *block;
} GameDataBlocks;

extern GameDataBlocks g_gameDataBlocks;

#endif

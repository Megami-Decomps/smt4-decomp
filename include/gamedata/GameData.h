/* gamedata/GameData.c: the game data module's globals. */
#ifndef GAMEDATA_GAMEDATA_H
#define GAMEDATA_GAMEDATA_H

#include "common.h"

/* IV: the work blocks the game data module allocates on first use. */
typedef struct GameDataBlocks {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *saveBlock;     /* 0x24DB0 bytes */
    /* 0x08 */ void *workBlock;     /* 0x24D28 bytes */
    /* 0x0C */ void *smallBlock;    /* 0xC bytes */
} GameDataBlocks;

/* Apocalypse: one more block. */
typedef struct GameDataBlocksA {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *saveBlock;     /* 0x2A7A4 bytes */
    /* 0x08 */ void *workBlock;     /* 0x2A71C bytes */
    /* 0x0C */ void *smallBlock;    /* 0xC bytes */
    /* 0x10 */ void *extraBlock;    /* 0x20 bytes */
} GameDataBlocksA;

#endif

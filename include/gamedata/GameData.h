/* gamedata/GameData.c: canonical game-data module globals for both games. */
#ifndef GAMEDATA_GAMEDATA_H
#define GAMEDATA_GAMEDATA_H

#include "common.h"
#include <stddef.h>

struct GameSaveData;
struct GameDataAux;
union GameDataBlock;

/* IV's allocated save/work/counter blocks and module control flags. */
typedef struct GameDataBlocks {
    /* 0x00 */ u8 homeButtonIdle;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ s8 noFlags;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ GameSaveData *saveBlock; /* allocation: 0x24DB0 bytes */
    /* 0x08 */ GameDataAux *workBlock; /* allocation: 0x24D28 bytes */
    /* 0x0C */ u16 *smallBlock; /* allocation: 0xC bytes */
    /* 0x10 */ u32 homeButtonHolds;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 flags;
} GameDataBlocks;

/* Apocalypse allocates one additional work block. */
typedef struct GameDataBlocksA {
    /* 0x00 */ u8 homeButtonIdle;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u8 unk02;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ GameDataBlock *saveBlock; /* allocation: 0x2A7A4 bytes */
    /* 0x08 */ void *workBlock; /* allocation: 0x2A71C bytes */
    /* 0x0C */ void *smallBlock; /* allocation: 0xC bytes */
    /* 0x10 */ void *extraBlock; /* allocation: 0x20 bytes */
    /* 0x14 */ u32 homeButtonHolds;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 flags;
} GameDataBlocksA;

typedef char GameDataBlocksRootLayoutCheck[sizeof(GameDataBlocks) == 0x1C && sizeof(GameDataBlocksA) == 0x20 && offsetof(GameDataBlocks, saveBlock) == 4 && offsetof(GameDataBlocksA, saveBlock) == 4 && offsetof(GameDataBlocks, flags) == 0x18 && offsetof(GameDataBlocksA, flags) == 0x1C ? 1 : -1];

#endif

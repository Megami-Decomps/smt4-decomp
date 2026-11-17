/* gamedata/GameData.c: canonical game-data module globals for both games. */
#ifndef GAMEDATA_GAMEDATA_H
#define GAMEDATA_GAMEDATA_H

#include "common.h"
#include <stddef.h>

struct GameSaveData;
struct GameDataAux;
struct GameSaveDataA;
struct GameSaveBodyA;

/* IV's allocated save/work/counter blocks and module control flags. Each hold word has a byte that is 1
 * while the word is empty: homeButtonIdle/homeButtonHolds, noSleepHolds/sleepHolds, noFlags/flags. */
typedef struct GameDataBlocks {
    /* 0x00 */ u8 homeButtonIdle;
    /* 0x01 */ u8 noSleepHolds;
    /* 0x02 */ s8 noFlags;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ GameSaveData *saveBlock; /* allocation: 0x24DB0 bytes */
    /* 0x08 */ GameDataAux *workBlock; /* allocation: 0x24D28 bytes */
    /* 0x0C */ u16 *smallBlock; /* allocation: 0xC bytes */
    /* 0x10 */ u32 homeButtonHolds;
    /* 0x14 */ u32 sleepHolds;       /* while nonzero, sleep mode is disabled */
    /* 0x18 */ u32 flags;
    /* 0x1C */ s32 cheatSequenceStep; /* steps of FUN_0031e384's hidden input sequence entered so far */
} GameDataBlocks;

/* Apocalypse allocates one additional work block. */
typedef struct GameDataBlocksA {
    /* 0x00 */ u8 homeButtonIdle;
    /* 0x01 */ u8 noSleepHolds;
    /* 0x02 */ s8 noFlags;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ GameSaveDataA *saveBlock; /* allocation: 0x2A7A4 bytes */
    /* 0x08 */ GameSaveBodyA *workBlock; /* allocation: 0x2A71C bytes: a copy of the save body */
    /* 0x0C */ u16 *smallBlock; /* allocation: 0xC bytes */
    /* 0x10 */ u32 *countdowns; /* allocation: 0x20 bytes; the countdown timers FUN_00138aa4 runs down */
    /* 0x14 */ u32 homeButtonHolds;
    /* 0x18 */ u32 sleepHolds;
    /* 0x1C */ u32 flags;
} GameDataBlocksA;

typedef char GameDataBlocksRootLayoutCheck[sizeof(GameDataBlocks) == 0x20 && sizeof(GameDataBlocksA) == 0x20 && offsetof(GameDataBlocks, saveBlock) == 4 && offsetof(GameDataBlocksA, saveBlock) == 4 && offsetof(GameDataBlocks, flags) == 0x18 && offsetof(GameDataBlocksA, flags) == 0x1C ? 1 : -1];

#endif

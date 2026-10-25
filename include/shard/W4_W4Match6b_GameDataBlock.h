/* smt4a: the game data block g_gameDataBlocks points at (0x57f698). Its save-data part starts at +0x88. */
#ifndef SHARD_W4_W4MATCH6B_GAMEDATABLOCK_H
#define SHARD_W4_W4MATCH6B_GAMEDATABLOCK_H

#include "gamedata/GameData.h"
#include "gamedata/SaveFlagViews.h"
#include <stddef.h>

typedef struct GameSavedPairA {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
} GameSavedPairA;

typedef struct GameSavedItemA {
    /* 0x00000 */ u8 unk00000[0x16];
    /* 0x00016 */ s8 flags;
    /* 0x00017 */ u8 unk00017[0x1F];
    /* 0x00036 */ u16 bits;
    /* 0x00038 */ u8 unk00038[0x16];
    /* 0x0004E */ s16 counter;
} GameSavedItemA;

typedef struct GameSavedItemTableA {
    /* 0x00000 */ u8 unk00000[0x5F0C];
    /* 0x05F0C */ GameSavedItemA items[0x501];
} GameSavedItemTableA;
typedef char GameSavedItemAOffsetsCheck[
    sizeof(GameSavedItemA) == 0x50 && offsetof(GameSavedItemA, flags) == 0x16 &&
    offsetof(GameSavedItemA, counter) == 0x4E &&
    offsetof(GameSavedItemTableA, items) == 0x5F0C ? 1 : -1];

typedef struct GameSavedRecordA {
    /* 0x00000 */ u8 unk00000[0xC];
    /* 0x0000C */ u16 unk0C;
} GameSavedRecordA;

typedef struct GameSavedRecordViewA {
    /* 0x00000 */ u8 unk00000[0x27E88];
    /* 0x27E88 */ GameSavedRecordA record;
} GameSavedRecordViewA;

typedef struct GameSavedPairTableA {
    /* 0x00000 */ u8 unk00000[0x2714C];
    /* 0x2714C */ GameSavedPairA entries[1];
} GameSavedPairTableA;

typedef struct GameDataSub {
    /* 0x00000 */ u8 unk00000[0x2D30];
    /* 0x02D30 */ u32 unk02D30;
    /* 0x02D34 */ u8 unk02D34[0x1C1A0];
    /* 0x1EED4 */ u8 block1EED4[1];
    /* 0x1EED5 */ u8 unk1EED5[0x2553];
    /* 0x21428 */ u8 block21428[1];
    /* 0x21429 */ u8 unk21429[0x9F];
    /* 0x214C8 */ u8 block214C8[1];
    /* 0x214C9 */ u8 unk214C9[0xBF];
    /* 0x21588 */ u8 unk21588;
    /* 0x21589 */ u8 unk21589[0x3];
    union {
        /* 0x2158C */ u32 table[0x1A20];
        struct {
            /* 0x2158C */ u8 unk2158C[0x800];
            /* 0x21D8C */ u32 unk21D8C;
            /* 0x21D90 */ u32 unk21D90;
        } runtime;
    };
    /* 0x27E0C */ u8 unk27E0C[2];
    /* 0x27E0E */ u8 flag0e;
    /* 0x27E0F */ u8 flags;
    /* 0x27E10 */ u8 unk27E10[0x10];
    /* 0x27E20 */ u8 block27E20[1];
    /* 0x27E21 */ u8 unk27E21[0x11];
    /* 0x27E32 */ u8 unk27E32;
    /* 0x27E33 */ u8 unk27E33[0x1D];
    /* 0x27E50 */ u8 entryFlags[0x3F];
    /* 0x27E8F */ u8 unk27E8F[0x501];
    /* 0x28390 */ u8 block28390[1];
} GameDataSub;

typedef struct GameDataSaveA {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ GameDataSub sub;
} GameDataSaveA;

typedef union GameDataBlock {
    /* 0x00000 */ GameDataSaveA save;
    /* 0x00000 */ GameSavedItemTableA inventory;
    /* 0x00000 */ GameSavedRecordViewA records;
    /* 0x00000 */ GameSavedPairTableA pairs;
} GameDataBlock;


extern GameDataBlocksA g_gameDataBlocks;

typedef char GameSavedItemALayoutCheck[sizeof(GameSavedItemA) == 0x50 && sizeof(GameDataBlock) == 0x2841C ? 1 : -1];

typedef char GameSavedDataAOffsets[offsetof(GameDataBlock, inventory.items) == 0x5F0C && offsetof(GameDataBlock, pairs.entries) == 0x2714C && offsetof(GameDataBlock, records.record.unk0C) == 0x27E94 && offsetof(GameDataBlock, save.sub.runtime.unk21D8C) == 0x21E14 && offsetof(GameDataBlock, save.sub.block28390) == 0x28418 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
u8 *gameDataBlocksGetStats(void);
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u8 *FUN_00239200(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void FUN_00333574(u32 bits);

#ifdef __cplusplus
}
#endif

#endif

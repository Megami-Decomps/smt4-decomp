#include "common.h"

extern "C" {

typedef struct MarkEntry {
    /* 0x00 */ u8 data[100];
} MarkEntry;

typedef struct GameDataSub {
    /* 0x00000 */ u8 unk00000[0x27184];
    /* 0x27184 */ MarkEntry marks[32];
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

/* Returns mark entry `index` of the game data (NULL when out of range). */
MarkEntry *gameDataGetMarkEntry(u32 index)
{
    MarkEntry *entry = NULL;

    if (index < 32) {
        u8 *sub = (u8 *)&g_gameDataBlocks.block->sub;
        u8 *row = sub + index * sizeof(MarkEntry);

        entry = (MarkEntry *)(row + 0x27184);
    }
    return entry;
}

} /* extern "C" */

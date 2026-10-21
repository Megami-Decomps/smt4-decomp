#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x00000 */ u8 unk[0x5448];
    /* 0x05448 */ u32 value;
} Table;

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Table *table;
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

/* Returns the word at 0x5448 of the game-data table. */
u32 gameDataGetTableValue(void)
{
    return g_gameDataBlocks.table->value;
}

} /* extern "C" */

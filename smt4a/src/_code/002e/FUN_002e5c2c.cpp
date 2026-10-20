#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x0000 */ u8 unk0000[0x2DB8];
    /* 0x2DB8 */ u32 value;
} Table;

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Table *table;
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

/* Returns the word at 0x2DB8 of the game-data table. */
u32 FUN_002e5c2c(void)
{
    return g_gameDataBlocks.table->value;
}

} /* extern "C" */

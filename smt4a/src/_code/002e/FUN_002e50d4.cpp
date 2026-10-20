#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x00000 */ u8 unk00000[0x21E18];
    /* 0x21E18 */ u32 value;
} Table;

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Table *table;
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

/* Returns the word at 0x21E18 of the game-data table. */
u32 FUN_002e50d4(void)
{
    return g_gameDataBlocks.table->value;
}

} /* extern "C" */

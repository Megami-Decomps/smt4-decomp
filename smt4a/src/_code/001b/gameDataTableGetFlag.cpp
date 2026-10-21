#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x00000 */ u8 unk00000[0x21610];
    /* 0x21610 */ u8 flag;
} Table;

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Table *table;
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

/* Returns the byte at 0x21610 of the game-data table. */
u8 gameDataTableGetFlag(void)
{
    return g_gameDataBlocks.table->flag;
}

} /* extern "C" */

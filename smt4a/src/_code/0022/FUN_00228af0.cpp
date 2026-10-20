#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ u8 member80[1];
} Table;

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Table *table;
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

/* Returns the address of the member at 0x80 of the game-data table. */
u8 *FUN_00228af0(void)
{
    return g_gameDataBlocks.table->member80;
}

} /* extern "C" */

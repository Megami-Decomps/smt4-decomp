#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x00000 */ u8 unk00000[0x28418];
    /* 0x28418 */ u8 member28418[1];
} Table;

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Table *table;
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

/* Returns the address of the member at 0x28418 of the game-data table. */
u8 *FUN_00239200(void)
{
    return g_gameDataBlocks.table->member28418;
}

} /* extern "C" */

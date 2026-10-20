#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x00 */ u8 unk00[0x90];
    /* 0x90 */ u8 member90[1];
} Table;

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Table *table;
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

/* Returns the address of the member at 0x90 of the game-data table. */
u8 *gameGetPlayerData(void)
{
    return g_gameDataBlocks.table->member90;
}

} /* extern "C" */

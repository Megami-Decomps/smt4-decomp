#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x0000 */ u8 unk0000[0x8C];
    /* 0x008C */ u8 member8C[1];
} Table;

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Table *table;
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

/* Returns the address of the member at 0x8C of the game-data table. */
u8 *gameGetSlotTable(void)
{
    return g_gameDataBlocks.table->member8C;
}

} /* extern "C" */

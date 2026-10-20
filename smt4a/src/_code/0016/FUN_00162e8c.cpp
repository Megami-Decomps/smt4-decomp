#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x0000 */ u8 unk0000[0x3E74];
    /* 0x3E74 */ u8 member3E74[1];
} Table;

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Table *table;
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

/* Returns the address of the member at 0x3E74 of the game-data table. */
u8 *FUN_00162e8c(void)
{
    return g_gameDataBlocks.table->member3E74;
}

} /* extern "C" */

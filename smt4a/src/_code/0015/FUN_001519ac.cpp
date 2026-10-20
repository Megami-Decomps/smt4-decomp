#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x00000 */ u8 unk00000[0x212DC];
    /* 0x212DC */ u8 member212DC[1];
} Table;

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Table *table;
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

/* Returns the address of the member at 0x212DC of the game-data table. */
u8 *FUN_001519ac(void)
{
    return g_gameDataBlocks.table->member212DC;
}

} /* extern "C" */

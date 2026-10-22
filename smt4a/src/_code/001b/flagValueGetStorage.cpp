#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x00000 */ u8 unk00000[0x2DBC];
    /* 0x02DBC */ u8 member2DBC[1];
} Table;

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Table *table;
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

/* Returns the address of the member at 0x2DBC of the game-data table. */
u8 *flagValueGetStorage(void)
{
    return g_gameDataBlocks.table->member2DBC;
}

} /* extern "C" */

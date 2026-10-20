#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x00000 */ u8 unk[0x1EF5C];
    /* 0x1EF5C */ u8 member[1];
} Table;

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Table *table;
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

/* Returns the address of the member at 0x1EF5C of the game-data table. */
u8 *FUN_002c2710(void)
{
    return g_gameDataBlocks.table->member;
}

} /* extern "C" */

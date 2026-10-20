#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x00000 */ u8 unk[0x27EA8];
    /* 0x27EA8 */ u8 member[1];
} Table;

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Table *table;
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

/* Returns the address of the member at 0x27EA8 of the game-data table. */
u8 *FUN_002840ac(void)
{
    return g_gameDataBlocks.table->member;
}

} /* extern "C" */

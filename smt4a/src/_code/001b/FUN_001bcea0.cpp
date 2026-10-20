#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x00000 */ u8 unk00000[0x21E1C];
    /* 0x21E1C */ u8 member21E1C[1];
} Table;

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Table *table;
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

/* Returns the address of the member at 0x21E1C of the game-data table. */
u8 *FUN_001bcea0(void)
{
    return g_gameDataBlocks.table->member21E1C;
}

} /* extern "C" */

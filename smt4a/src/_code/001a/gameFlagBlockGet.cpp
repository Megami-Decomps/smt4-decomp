#include "common.h"
#include "util/CalleeContracts.h"
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"

extern "C" {

typedef struct Table {
    /* 0x0000 */ u8 unk0000[0x5558];
    /* 0x5558 */ u8 member5558[1];
} Table;

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Table *table;
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

/* Returns the address of the member at 0x5558 of the game-data table. */
u8 *gameFlagBlockGet(void)
{
    return g_gameDataBlocks.table->member5558;
}

} /* extern "C" */

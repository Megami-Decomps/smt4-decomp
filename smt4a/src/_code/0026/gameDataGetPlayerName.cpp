#include "common.h"
#include "util/GameDataGetPlayerName.h"

extern "C" {

typedef struct Table {
    /* 0x00000 */ u8 unk[0x22220];
    /* 0x22220 */ u8 member[1];
} Table;

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Table *table;
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

/* Returns the address of the member at 0x22220 of the game-data table. */
u8 *gameDataGetPlayerName(void)
{
    return g_gameDataBlocks.table->member;
}

} /* extern "C" */

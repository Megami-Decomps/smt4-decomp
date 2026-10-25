#include "common.h"
#include "Model/MoriModelManager.h"

extern "C" {

typedef struct Table {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ u8 member88[1];
} Table;

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Table *table;
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

/* Returns the address of the member at 0x88 of the game-data table. */
u8 *gameDataBlocksGetSaveData(void)
{
    return g_gameDataBlocks.table->member88;
}

} /* extern "C" */

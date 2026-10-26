#include "common.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {

typedef struct Table {
    /* 0x0000 */ u8 unk0000[0x8C];
    /* 0x008C */ SaveSlotTable slotTable;
} Table;

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Table *table;
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

/* Returns the slot table inside the game-data table (the table plus 0x8C). */
SaveSlotTable *gameGetSlotTable(void)
{
    return &g_gameDataBlocks.table->slotTable;
}

} /* extern "C" */

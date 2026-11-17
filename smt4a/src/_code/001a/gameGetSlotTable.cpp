#include "gamedata/GameSaveBlocks.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {

/* Returns the slot table inside the game-data table (the table plus 0x8C). */
SaveSlotTableA *gameGetSlotTable(void)
{
    return &g_gameDataBlocks.saveBlock->body.slots;
}

} /* extern "C" */

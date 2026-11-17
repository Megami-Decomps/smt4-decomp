#include "gamedata/GameSaveBlocks.h"
#include "gamedata/SaveSlotTableIV.h"

extern "C" {

SaveSlotTableIV *gameGetSlotTable(void)
{
    return &g_gameDataBlocks.saveBlock->body.slots;
}

} /* extern "C" */

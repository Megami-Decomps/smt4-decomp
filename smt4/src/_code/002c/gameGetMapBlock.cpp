#include "gamedata/GameSaveBlocks.h"

extern "C" {

/* Returns the map block of the save body. */
MapSaveBlock *gameGetMapBlock(void)
{
    return &g_gameDataBlocks.saveBlock->body.mapBlock;
}

} /* extern "C" */

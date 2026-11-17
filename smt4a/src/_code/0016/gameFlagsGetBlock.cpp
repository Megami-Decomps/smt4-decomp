#include "gamedata/MapSaveBlockA.h"
#include "gamedata/GameSaveBlocks.h"

extern "C" {

/* Returns the map block of the save body (IV's gameGetMapBlock). */
MapSaveBlockA *gameFlagsGetBlock(void)
{
    return &g_gameDataBlocks.saveBlock->body.mapBlock;
}

} /* extern "C" */

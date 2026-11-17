#include "gamedata/GameSaveBlocks.h"

extern "C" {

/* Stores the value at 0x5448 of the game data table, capped at 99. */
void sectionValueSetClamped(s32 value)
{
    MapSaveBlockA *section = &g_gameDataBlocks.saveBlock->body.mapBlock;

    if (value > 99) {
        value = 99;
    }
    section->tableValue = value;
}

} /* extern "C" */

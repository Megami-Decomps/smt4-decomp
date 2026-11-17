#include "gamedata/GameSaveBlocks.h"

extern "C" {
u32 gameDataFindEntryIndex(void);

/* Returns the address of the current entry's saved value. */
u32 *gameDataGetTableEntry(void)
{
    u32 index = gameDataFindEntryIndex();
    GameSaveBody *body = &g_gameDataBlocks.saveBlock->body;
    return &body->entryValues[index];
}
}

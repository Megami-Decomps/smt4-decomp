#include "gamedata/GameSaveBlocks.h"

// Mark a saved flag for IDs 1 through 500.
extern "C" void gameSavedFlagSet(u32 id)
{
    if (id != 0 && id <= 500) {
        GameSaveBody *body = &g_gameDataBlocks.saveBlock->body;
        body->savedFlags[(s32)id / 8] |= 1u << ((s32)id % 8);
    }
}

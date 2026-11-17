#include "gamedata/GameSaveBlocks.h"

extern "C" {

/* Returns 1 if any bit of `mask` is set in the save block's mode flags. */
s32 gameDataBlockTestFlag(u32 mask)
{
    GameSaveBody *body = &g_gameDataBlocks.saveBlock->body;

    return (mask & body->config.selection.modeFlags) != 0;
}

}

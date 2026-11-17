#include "gamedata/GameSaveBlocks.h"
extern "C" {
/* Set or clear the requested bits in the saved map flag byte. */
void saveGetMapFlag(u32 mask, s32 enabled)
{
    GameSaveBody *body = &g_gameDataBlocks.saveBlock->body;
    if (enabled)
        body->config.selection.modeFlags |= mask;
    else
        body->config.selection.modeFlags &= ~mask;
}
}

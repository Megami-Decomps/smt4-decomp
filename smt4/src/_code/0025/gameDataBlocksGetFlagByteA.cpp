#include "gamedata/GameSaveBlocks.h"

extern "C" {

/* Reads the selection mode byte of the save data. */
u8 gameDataBlocksGetFlagByteA(void)
{
    GameSaveBody *body = &g_gameDataBlocks.saveBlock->body;

    return body->config.selection.state.mode;
}

} /* extern "C" */

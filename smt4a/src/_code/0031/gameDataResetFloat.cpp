/* Built with -Ospace (see flags_W4Match4b.txt). */
#include "gamedata/GameSaveBlocks.h"

extern "C" {

/* Resets the float at 0x5464 of the game data table to 0. */
void gameDataResetFloat(void)
{
    MapSaveBlockA *inner = &g_gameDataBlocks.saveBlock->body.mapBlock;
    f32 zero = 0.0f;

    inner->unk15F0 = zero;
}

} /* extern "C" */

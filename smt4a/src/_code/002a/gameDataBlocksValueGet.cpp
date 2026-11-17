#include "gamedata/GameSaveBlocks.h"

extern "C" {

/* Returns the work block (the save body's copy). */
u32 gameDataBlocksValueGet(void)
{
    return (u32)g_gameDataBlocks.workBlock; /* callers take the work block as a word */
}

} /* extern "C" */

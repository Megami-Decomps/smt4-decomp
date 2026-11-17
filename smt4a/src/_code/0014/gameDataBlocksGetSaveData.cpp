#include "gamedata/GameSaveBlocks.h"
#include "Model/MoriModelManager.h"

extern "C" {

/* Returns the save body (the save block + 0x88). */
u8 *gameDataBlocksGetSaveData(void)
{
    return reinterpret_cast<u8 *>(&g_gameDataBlocks.saveBlock->body); /* declared as bytes for both games */
}

} /* extern "C" */

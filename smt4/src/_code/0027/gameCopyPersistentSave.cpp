#include "gamedata/GameSaveBlocks.h"
extern "C" {
void __aeabi_memcpy4(void *destination,const void *source,u32 size);
/* Copies the save body to the work block. */
void gameCopyPersistentSave(void)
{
    __aeabi_memcpy4(g_gameDataBlocks.workBlock, &g_gameDataBlocks.saveBlock->body, sizeof(GameSaveBody));
}
}

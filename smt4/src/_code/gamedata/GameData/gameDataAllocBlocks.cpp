/* NON_MATCHING: retail evaluates a (file, line) pair for each allocation (debug-allocation macro arguments) before the call; nothing uses it */
/* Allocates the game data's work blocks, the first time it is called. */
#include "common.h"
#include "gamedata/GameData.h"

extern "C" {

void *asdMemoryAlloc(int heap, int align, int arg2, int size, int arg4);

extern GameDataBlocks g_gameDataBlocks;

void gameDataAllocBlocks(void)
{
    if (g_gameDataBlocks.saveBlock == NULL) {
        g_gameDataBlocks.saveBlock = (GameSaveData *)asdMemoryAlloc(0x100, 0x100, 0, 0x24db0, 1);
        g_gameDataBlocks.workBlock = (GameDataAux *)asdMemoryAlloc(0x100, 0x100, 0, 0x24d28, 1);
        g_gameDataBlocks.smallBlock = (u16 *)asdMemoryAlloc(0x100, 0x100, 0, 0xc, 1);
    }
}

} /* extern "C" */

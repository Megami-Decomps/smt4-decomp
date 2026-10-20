/* NON_MATCHING: retail evaluates a (file, line) pair for each allocation (debug-allocation macro arguments) before the call; nothing uses it */
/* Allocates the game data's work blocks, the first time it is called. */
#include "common.h"
#include "gamedata/GameData.h"

extern "C" {

void *asdMemoryAlloc(int heap, int align, int arg2, int size, int arg4);

extern GameDataBlocksA g_gameDataBlocks;

void gameDataAllocBlocks(void)
{
    if (g_gameDataBlocks.saveBlock == NULL) {
        g_gameDataBlocks.saveBlock = asdMemoryAlloc(0x10000, 0x100, 0, 0x2a7a4, 1);
        g_gameDataBlocks.workBlock = asdMemoryAlloc(0x10000, 0x100, 0, 0x2a71c, 1);
        g_gameDataBlocks.smallBlock = asdMemoryAlloc(0x100, 0x100, 0, 0xc, 1);
        g_gameDataBlocks.extraBlock = asdMemoryAlloc(0x100, 0x100, 0, 0x20, 1);
    }
}

} /* extern "C" */

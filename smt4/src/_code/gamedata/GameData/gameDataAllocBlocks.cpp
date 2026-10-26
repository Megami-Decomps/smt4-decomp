/* Allocates the game data's work blocks, the first time it is called. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "gamedata/GameData.h"

extern "C" {

void *asdMemoryAlloc(int heap, int align, int arg2, int size, int arg4);

extern GameDataBlocks g_gameDataBlocks;

void gameDataAllocBlocks(void)
{
    if (g_gameDataBlocks.saveBlock == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\gamedata\\GameData.cpp", 61);
        g_gameDataBlocks.saveBlock = (GameSaveData *)asdMemoryAlloc(0x100, 0x100, 0, 0x24db0, 1);
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\gamedata\\GameData.cpp", 62);
        g_gameDataBlocks.workBlock = (GameDataAux *)asdMemoryAlloc(0x100, 0x100, 0, 0x24d28, 1);
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\gamedata\\GameData.cpp", 63);
        g_gameDataBlocks.smallBlock = (u16 *)asdMemoryAlloc(0x100, 0x100, 0, 0xc, 1);
    }
}

} /* extern "C" */

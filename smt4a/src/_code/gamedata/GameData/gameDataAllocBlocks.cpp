/* Allocates the game data's work blocks, the first time it is called. */
#include "gamedata/GameSaveBlocks.h"
#include "AsdSDK/AsdDebug.h"
#include "gamedata/GameData.h"

extern "C" {

void *asdMemoryAlloc(int heap, int align, int arg2, int size, int arg4);

void gameDataAllocBlocks(void)
{
    if (g_gameDataBlocks.saveBlock == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\gamedata\\GameData.cpp", 77);
        g_gameDataBlocks.saveBlock = (GameSaveDataA *)asdMemoryAlloc(0x10000, 0x100, 0, 0x2a7a4, 1);
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\gamedata\\GameData.cpp", 78);
        g_gameDataBlocks.workBlock = (GameSaveBodyA *)asdMemoryAlloc(0x10000, 0x100, 0, 0x2a71c, 1);
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\gamedata\\GameData.cpp", 79);
        g_gameDataBlocks.smallBlock = (u16 *)asdMemoryAlloc(0x100, 0x100, 0, 0xc, 1);
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\gamedata\\GameData.cpp", 81);
        g_gameDataBlocks.countdowns = static_cast<u32 *>(asdMemoryAlloc(0x100, 0x100, 0, 0x20, 1));
    }
}

} /* extern "C" */

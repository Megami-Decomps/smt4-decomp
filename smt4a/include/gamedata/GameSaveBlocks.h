/* Apocalypse: the game-data block table g_gameDataBlocks (0x57f698) and the save block (getters: gamedata/SaveSlotTable.h). The
 * layouts are in gamedata/GameData.h and gamedata/GameSaveDataA.h. */
#ifndef SMT4A_GAMEDATA_GAMESAVEBLOCKS_H
#define SMT4A_GAMEDATA_GAMESAVEBLOCKS_H

#include "gamedata/GameSaveDataA.h"

extern "C" {

extern GameDataBlocksA g_gameDataBlocks;
u32 gameDataBlocksGetTable(void);

} /* extern "C" */

#endif

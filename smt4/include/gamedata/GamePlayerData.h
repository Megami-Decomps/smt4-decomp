/* IV: gameGetPlayerData(), the player's record in the save block (PlayerDataIV in gamedata/GameSaveData.h). */
#ifndef SMT4_GAMEDATA_GAMEPLAYERDATA_H
#define SMT4_GAMEDATA_GAMEPLAYERDATA_H

#include "gamedata/GameSaveBlocks.h"

extern "C" {
/* The player's record inside the save block (save block + 0x90). */
PlayerDataIV *gameGetPlayerData(void);
}

#endif

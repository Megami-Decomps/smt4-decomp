/* Apocalypse: gameGetPlayerData(), the player's record in the save block (PlayerDataA in gamedata/GameSaveDataA.h). */
#ifndef SMT4A_GAMEDATA_GAMEPLAYERDATA_H
#define SMT4A_GAMEDATA_GAMEPLAYERDATA_H

#include "gamedata/GameSaveDataA.h"

extern "C" {
/* The player's record inside the save block (save block + 0x90). */
PlayerDataA *gameGetPlayerData(void);
}

#endif

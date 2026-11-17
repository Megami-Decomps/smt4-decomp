#include "common.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

/* The player's name. */
u8 *gameGetPlayerName(void)
{
    return reinterpret_cast<u8 *>(gameGetPlayerData()->name);
}

} /* extern "C" */

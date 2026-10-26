#include "common.h"
#include "gamedata/GameDataAccess.h"

extern "C" {

extern u8 *gameGetPlayerData(void);

u8 *gameGetPlayerName(void)
{
    u8 *pad = gameGetPlayerData();

    return pad + 0x4c;
}

} /* extern "C" */

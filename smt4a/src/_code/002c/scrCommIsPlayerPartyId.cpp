#include "common.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

u32 scrGetArg(u32 index);
void scrSetResult(u32 value);

/* Script command: 1 when the argument is one of the player's seven stored ids, else 0. */
u32 scrCommIsPlayerPartyId(void)
{
    u32 id = scrGetArg(0);
    PlayerDataA *player = gameGetPlayerData();
    u32 result = 0;

    if (player->equipment[0] == id || player->equipment[1] == id || player->equipment[3] == id || player->equipment[4] == id ||
        player->equipment[5] == id || player->equipment[6] == id || player->equipment[2] == id) {
        result = 1;
    }
    scrSetResult(result);
    return 1;
}

} /* extern "C" */

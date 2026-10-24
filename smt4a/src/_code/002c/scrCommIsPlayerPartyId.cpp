#include "common.h"

extern "C" {

struct PlayerPartyIds {
    /* 0x00 */ u16 ids[7];
};

u32 scrGetArg(void);
PlayerPartyIds *gameGetPlayerData(void);
void scrSetResult(u32 value);

/* Script command: 1 when the argument is one of the player's seven stored ids, else 0. */
u32 scrCommIsPlayerPartyId(void)
{
    u32 id = scrGetArg();
    PlayerPartyIds *player = gameGetPlayerData();
    u32 result = 0;

    if (player->ids[0] == id || player->ids[1] == id || player->ids[3] == id || player->ids[4] == id ||
        player->ids[5] == id || player->ids[6] == id || player->ids[2] == id) {
        result = 1;
    }
    scrSetResult(result);
    return 1;
}

} /* extern "C" */

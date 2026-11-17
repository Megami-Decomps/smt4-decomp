

// Removes skill `id` (and its rank) from the player.
#include "gamedata/GamePlayerData.h"
extern "C" void gamePlayerClearPairedId(u32 id)
{
    PlayerDataIV *player = gameGetPlayerData();
    for (s32 i = 0; i < 8; ++i) {
        if (player->skills[i] == id) {
            player->skills[i] = 0;
            player->skillRanks[i] = 0;
            return;
        }
    }
}

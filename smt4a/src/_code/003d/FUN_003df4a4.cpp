

// Whether the player has skill `id`.
#include "gamedata/GamePlayerData.h"
extern "C" u32 FUN_003df4a4(u32 id)
{
    PlayerDataA *player = gameGetPlayerData();
    for (s32 i = 0; i < 8; ++i) {
        if (player->skills[i] == id)
            return 1;
    }
    return 0;
}

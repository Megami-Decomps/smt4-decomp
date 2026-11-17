#include "shard/Shard003D.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

/* True when the player's +0x60 value reaches 800 (id 4) or -800 (id 5). */
u32 playerAlignmentExtreme(s32 id)
{
    PlayerDataA *player = gameGetPlayerData();

    if (id != 4) {
        if (id == 5 && player->alignment <= -800) {
            return 1;
        }
    } else if (player->alignment >= 800) {
        return 1;
    }
    return 0;
}

} /* extern "C" */

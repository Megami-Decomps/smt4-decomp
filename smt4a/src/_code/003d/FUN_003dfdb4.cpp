#include "shard/Shard003D.h"

extern "C" {

extern PlayerData *gameGetPlayerData(void);

/* Adds `delta` to the player's halfword at +0x60, clamped to -999..999. */
void FUN_003dfdb4(s32 delta)
{
    PlayerData *player = gameGetPlayerData();

    delta = player->unk60 + delta;
    if (delta < -999) {
        delta = -999;
    } else if (delta >= 1000) {
        delta = 999;
    }
    player->unk60 = delta;
}

} /* extern "C" */

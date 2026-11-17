#include "shard/Shard003E.h"
#include "mapnavi/naviMain.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

/* True when bit `bit` of the player's flag halfword at +0x5E is set. */
u8 playerHasFlagBit(u32 bit)
{
    PlayerDataA *player = gameGetPlayerData();

    return (player->ailments & (1 << (bit & 0xFF))) != 0;
}

} /* extern "C" */

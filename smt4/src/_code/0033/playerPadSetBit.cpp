#include "gamedata/GamePlayerData.h"

extern "C" {

/* Sets ailment bit `bit` of the player. */
void playerPadSetBit(u32 bit)
{
    PlayerDataIV *player = gameGetPlayerData();
    u16 value = player->ailments;

    player->ailments = value | (u16)(1 << (bit & 0xff));
}

} /* extern "C" */

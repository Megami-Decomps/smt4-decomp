#include "code/Code0029_Smt4.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

/* Whether bit `bit` of the player's ailments is set. */
u8 playerPadTestBit(u32 bit)
{
    PlayerDataIV *player = gameGetPlayerData();

    return ((u32)player->ailments & (1 << (bit & 0xff))) != 0;
}

} /* extern "C" */

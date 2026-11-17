/* Sets the given bit in the object's 16-bit mask. */
#include "common.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

void playerMaskSetBit(u32 bit)
{
    PlayerDataA *owner = gameGetPlayerData();

    owner->ailments |= 1 << bit;
}

} /* extern "C" */

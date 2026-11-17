#include "gamedata/MapSaveBlockA.h"
#include "shard/W6_W6Match3_UnitStatusRequest.h"

extern "C" {

/* Whether bit `bit` of the game flag block's array is set. */
u8 FUN_00384d34(int bit)
{
    MapSaveBlockA *area = gameFlagsGetBlock();

    s32 word = bit / 32;
    s32 shift = bit % 32;
    u32 bits = area->eventBits[word];

    return (bits & (1 << shift)) != 0;
}

} /* extern "C" */

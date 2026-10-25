#include "shard/Shard0036.h"
#include "gamedata/GameFlags.h"

extern "C" {



void clearFlags310To31F(void)
{
    s32 i;

    for (i = 0; i < 0x10; i++) {
        gameFlagSetValue(i + 0x310, 0, 1);
    }
}

} /* extern "C" */

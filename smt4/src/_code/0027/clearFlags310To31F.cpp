#include "common.h"
#include "gamedata/GameFlags.h"

extern "C" {



void clearFlags310To31F(void)
{
    int i = 0;

    do {
        gameFlagSetValue(i + 0x310, 0, 1);
        i++;
    } while (i < 0x10);
}

} /* extern "C" */

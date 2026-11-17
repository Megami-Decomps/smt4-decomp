#include "gamedata/GameSaveBlocks.h"

extern "C" {

/* Increments the saved counter, clamping it to 9998. */
void gameCountersIncrement(void)
{
    GameSaveData *counters = g_gameDataBlocks.saveBlock;
    if (counters->count < 9998) {
        counters->count++;
    }
    if (counters->count >= 9998) {
        counters->count = 9998;
    }
}
}

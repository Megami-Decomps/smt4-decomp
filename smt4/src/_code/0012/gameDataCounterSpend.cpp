#include "shard/GameDataBlocks.h"

extern "C" {

int FUN_001397bc(u16 *counter, u32 amount);

/* Takes `amount` off the counter (if it holds at least that much) and passes it on. */
void gameDataCounterSpend(u32 amount)
{
    u16 *counter = g_gameDataBlocks.smallBlock;

    if (amount <= *g_gameDataBlocks.smallBlock) {
        *g_gameDataBlocks.smallBlock = *g_gameDataBlocks.smallBlock - (s16)amount;
        FUN_001397bc(counter, amount);
    }
}

} /* extern "C" */

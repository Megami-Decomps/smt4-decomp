#include "shard/GameDataBlocks.h"

extern "C" {

int FUN_001397bc(u16 *counter, u32 amount);

/* Takes `amount` off the counter (if it holds at least that much) and passes it on. */
void gameDataCounterSpend(u32 amount)
{
    u16 *counter = g_gameDataBlocks.unk0C;

    if (amount <= *g_gameDataBlocks.unk0C) {
        *g_gameDataBlocks.unk0C = *g_gameDataBlocks.unk0C - (s16)amount;
        FUN_001397bc(counter, amount);
    }
}

} /* extern "C" */

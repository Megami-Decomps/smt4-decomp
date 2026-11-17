#include "gamedata/GameSaveBlocks.h"

extern "C" {

void FUN_00188d08(u16 *counter, u32 amount);

/* Spends `amount` from the game-data counter (and notifies FUN_00188d08) if it holds at least that much. */
void gameDataCounterSpend(u32 amount)
{
    u16 *counter;

    counter = g_gameDataBlocks.smallBlock;
    if (amount <= *g_gameDataBlocks.smallBlock) {
        *g_gameDataBlocks.smallBlock = *g_gameDataBlocks.smallBlock - (s16)amount;
        FUN_00188d08(counter, amount);
        return;
    }
}

} /* extern "C" */

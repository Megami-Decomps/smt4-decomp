#include "common.h"

extern "C" {

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u16 *counter;
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

void FUN_00188d08(u16 *counter, u32 amount);

/* Spends `amount` from the game-data counter (and notifies FUN_00188d08) if it holds at least that much. */
void gameDataCounterSpend(u32 amount)
{
    u16 *counter;

    counter = g_gameDataBlocks.counter;
    if (amount <= *g_gameDataBlocks.counter) {
        *g_gameDataBlocks.counter = *g_gameDataBlocks.counter - (s16)amount;
        FUN_00188d08(counter, amount);
        return;
    }
}

} /* extern "C" */

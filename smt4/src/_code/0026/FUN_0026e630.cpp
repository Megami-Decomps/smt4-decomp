#include "gamedata/GameSaveBlocks.h"
/* NON_MATCHING: typed save stores let the compiler retain the block pointer; retail reloads the global block pointer before its final clamp store, with different register allocation. */

// Accumulates the total and caps the spendable counter at 9999.
extern "C" void FUN_0026e630(s32 amount)
{
    GameSaveData *save = g_gameDataBlocks.saveBlock;
    save->body.pointsTotal += amount;
    u32 value = save->body.points + amount;
    save->body.points = value;
    if (value > 9999) {
        value = 9999;
    }
    g_gameDataBlocks.saveBlock->body.points = value;
}

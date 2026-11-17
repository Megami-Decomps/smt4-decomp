/* NON_MATCHING: only the play-time store differs: retail reloads g_gameDataBlocks.table for the clamped store through a second base (`add r1, r2, #0`, likely a section-anchor/multifile effect), the build reuses the first table pointer. */
#include "gamedata/GameSaveBlocks.h"

extern "C" {

/* Stores the play time, capped just below 10 hours. */
static __inline void setPlayTime(GameDataBlocksA *blocks, u32 total)
{
    if (total > 35999999) {
        blocks->saveBlock->body.runtime.playSeconds = 35999999;
    } else {
        blocks->saveBlock->body.runtime.playSeconds = total;
    }
}

/* Adds `delta` to the play time (capped just below 10 hours) and takes it off the active countdown timer. */
void FUN_00138aa4(u32 delta)
{
    GameSaveDataA *table = g_gameDataBlocks.saveBlock;
    GameSaveBodyA *body = &table->body;
    setPlayTime(&g_gameDataBlocks, body->runtime.playSeconds + delta);
    u32 index = body->option;
    u32 *timers = g_gameDataBlocks.countdowns;
    if (index < 5) {
        u32 remaining = timers[index];

        timers[index] = remaining <= delta ? 0 : remaining - delta;
    }
}

} /* extern "C" */

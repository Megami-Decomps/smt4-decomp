/* NON_MATCHING: instruction selection/order differs: retail ldr r1, [r1, #4]; compiler ldr r2, [r1, #4]. */
#include "gamedata/GameSaveBlocks.h"

extern "C" {

/* Adds to the play time and caps it at 9999:59:59. */
void FUN_0010402c(u32 amount)
{
    u32 total = g_gameDataBlocks.saveBlock->body.playSeconds + amount;
    g_gameDataBlocks.saveBlock->body.playSeconds = total > 0x22550FF ? 0x22550FF : total;
}

} /* extern "C" */

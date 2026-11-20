/* NON_MATCHING: retail reloads g_gameDataBlocks.saveBlock for the final store and keeps the cap in r3 (`movls r3, r1`);
 * the build reuses the points address and value. The rest matches. */
#include "shard/W4_W4Match6b_GameDataBlock.h"

/* Adds `amount` to the lifetime total and to the spendable points, capping them at 9999. */
extern "C" void gameDataAddCappedPoints(s32 amount)
{
    g_gameDataBlocks.saveBlock->body.pointsTotal += amount;
    g_gameDataBlocks.saveBlock->body.points += amount;
    g_gameDataBlocks.saveBlock->body.points =
        g_gameDataBlocks.saveBlock->body.points > 9999 ? 9999 : g_gameDataBlocks.saveBlock->body.points;
}

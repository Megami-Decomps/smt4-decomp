/* NON_MATCHING: register allocation only: retail holds the 0x2DB4 offset in r3 and 0x2DB8 in r2; built swaps r2/r3. */
#include "shard/W4_W4Match6b_GameDataBlock.h"
#include "runtime/String.h"

extern "C" {


/* Clears the save's point counters and the 0x4C-byte area before them. */
void gameDataBlocksClearSlots(void)
{
    g_gameDataBlocks.saveBlock->body.pointsTotal = 0;
    g_gameDataBlocks.saveBlock->body.points = 0;
    rt_memclr(g_gameDataBlocks.saveBlock->body.area2CE0, sizeof(g_gameDataBlocks.saveBlock->body.area2CE0));
}

} /* extern "C" */

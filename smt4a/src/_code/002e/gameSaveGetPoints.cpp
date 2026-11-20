#include "shard/W4_W4Match6b_GameDataBlock.h"
#include "code/Code002e.h"

extern "C" {


/* Returns the spendable points. */
u32 gameSaveGetPoints(void)
{
    return g_gameDataBlocks.saveBlock->body.points;
}

} /* extern "C" */

/* NON_MATCHING: control flow and the sub-block address chain (+0x88, index, +0x27E50) now match; only the load/shift register scheduling at the end differs. */
#include "shard/W4_W4Match6b_GameDataBlock.h"

// Test the saved entry bit for a valid, nonzero entry ID.
extern "C" u32 FUN_00229210(s32 id)
{
    if (id != 0) {
        if ((u32)id > 500) {
            return 0;
        }
        GameDataSub *sub = &g_gameDataBlocks.saveBlock->save.sub;
        return (sub->entryFlags[id / 8] & (1 << (id % 8))) != 0;
    }
    return 0;
}

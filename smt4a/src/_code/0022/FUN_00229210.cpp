/* NON_MATCHING: compiler merges invalid-ID returns and folds the save-data address into a pool constant. */
#include "shard/W4_W4Match6b_GameDataBlock.h"

// Test the saved entry bit for a valid, nonzero entry ID.
extern "C" u32 FUN_00229210(s32 id)
{
    if (id == 0 || (u32)id > 500)
        return 0;
    return (g_gameDataBlocks.saveBlock->save.sub.entryFlags[id / 8] & (1 << (id % 8))) != 0;
}

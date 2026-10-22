/* NON_MATCHING: compiler changes guard-return layout and schedules the byte load before calculating the bit index. */
#include "shard/W6_W6Match2_SaveFlags.h"

// Test a saved flag for IDs 1 through 500.
extern "C" u32 FUN_001a15f4(u32 id)
{
    if (id == 0 || id > 500) {
        return 0;
    }
    const SaveFlagWork* work = &((SaveFlagImage*)g_gameDataBlocks.saveBlock)->work;
    return (work->flags[(s32)id / 8] & (1u << ((s32)id % 8))) != 0;
}

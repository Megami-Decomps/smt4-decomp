#include "shard/W6_W6Match2_SaveFlags.h"

// Mark a saved flag for IDs 1 through 500.
extern "C" void gameSavedFlagSet(u32 id)
{
    if (id != 0 && id <= 500) {
        SaveFlagWork* work = &((SaveFlagImage*)g_gameDataBlocks.saveBlock)->work;
        work->flags[(s32)id / 8] |= 1u << ((s32)id % 8);
    }
}

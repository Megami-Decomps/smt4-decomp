#include "shard/W4_W4Match6b_GameDataBlock.h"

// Set the persistent entry bit for a valid identifier in the range 1..500.
extern "C" void gameSavedFlagSet(u32 id)
{
    if (id != 0 && id <= 500) {
        GameDataSub* sub = &g_gameDataBlocks.saveBlock->save.sub;
        sub->entryFlags[(s32)id / 8] |= 1u << ((s32)id % 8);
    }
}

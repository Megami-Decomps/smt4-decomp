#include "gamedata/GameDataEntries.h"
#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {

/* Address of the state entry of the key pair (`groupId`, `itemId`). */
ItemFlagCacheState *gameDataGetTableEntry(u32 groupId, u32 itemId)
{
    s32 index = gameDataFindEntryIndex(groupId, itemId);
    GameSaveBodyA *sub = &g_gameDataBlocks.saveBlock->body;

    return reinterpret_cast<ItemFlagCacheState *>(&sub->table[index]);
}

}

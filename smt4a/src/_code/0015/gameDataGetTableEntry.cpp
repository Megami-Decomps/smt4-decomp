#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {

extern s32 gameDataFindEntryIndex(void);

/* Address of the entry of the game data table selected by gameDataFindEntryIndex. */
u32 *gameDataGetTableEntry(void)
{
    s32 index = gameDataFindEntryIndex();
    GameDataSub *sub = &g_gameDataBlocks.saveBlock->save.sub;

    return &sub->table[index];
}

}

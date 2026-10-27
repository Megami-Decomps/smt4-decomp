#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {

void gameSavedItemClearCounter(u32 index)
{
    if (index > 1280) {
        return;
    }
    u8 *row = (u8 *)g_gameDataBlocks.saveBlock + index * sizeof(GameSavedItemA);
    GameSavedItemA *item = (GameSavedItemA *)(row + offsetof(GameSavedItemTableA, items));
    item->counter = 0;
}

} /* extern "C" */

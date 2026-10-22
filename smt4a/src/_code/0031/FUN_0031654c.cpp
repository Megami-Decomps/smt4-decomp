/* Adds `delta` to the s16 counter of item `index` (0-0x500) in the global item table; out-of-range indices are ignored. */
#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {


void FUN_0031654c(u32 index, s16 delta)
{
    if (index <= 0x500) {
        GameSavedItemTableA *table = &g_gameDataBlocks.saveBlock->inventory;
        GameSavedItemA *item = &table->items[index];

        item->counter = item->counter + delta;
    }
}

}

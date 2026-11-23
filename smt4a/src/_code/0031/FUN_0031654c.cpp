/* Adds `delta` to the counter of item `index` (0-0x500) in the global item table; out-of-range indices are ignored. */
#include "gamedata/GameSaveBlocks.h"
#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {

void FUN_0031654c(u32 index, u16 delta)
{
    if (index <= 0x500) {
        GameSaveDataA *save = g_gameDataBlocks.saveBlock;
        GameSavedItemA *item = &save->body.items[index];

        item->counter = item->counter + delta;
    }
}

}

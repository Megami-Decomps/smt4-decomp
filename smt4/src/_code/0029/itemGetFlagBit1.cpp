#include "gamedata/GameSaveBlocks.h"
#include "shard/W6_W6Match3_WaveArchiveReader.h"

extern "C" {

 /* 0x34 bytes */

/* Returns item `index`'s flag bit 1 (0 for indices above 0x500). */
u32 itemGetFlagBit1(u32 index)
{
    u32 result;

    if (index > 0x500) {
        result = 0;
    } else {
        GameSaveData *save = g_gameDataBlocks.saveBlock;
        GameSavedItem *item = &save->body.items[index];
        result = (item->flags & 2) >> 1;
    }
    return result;
}

} /* extern "C" */

#include "shard/GameDataBlocks.h"

extern "C" {


/* Stores the two words in slot `index` (0 or 1) of the block's link table; other indices are ignored. */
void gameDataSetLinkSlot(u32 index, u32 firstWord, u32 secondWord)
{
    u8 *table;
    u8 *slotBytes;


    if (index == 0 || index == 1) {
        table = g_gameDataBlocks.saveBlock->body.linkTable;
        slotBytes = table + index * sizeof(GameSaveLinkSlot);
        *(u32 *)(slotBytes + offsetof(GameSaveBody, linkSlots[0].unk00) - offsetof(GameSaveBody, linkTable)) = firstWord;
        *(u32 *)(slotBytes + offsetof(GameSaveBody, linkSlots[0].unk04) - offsetof(GameSaveBody, linkTable)) = secondWord;
    }
}

} /* extern "C" */

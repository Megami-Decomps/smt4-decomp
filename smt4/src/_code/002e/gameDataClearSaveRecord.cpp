#include "common.h"
#include "shard/GameDataBlocks.h"

/* The save data from its link table (+0x88) on: twelve 76-byte records follow at +0x2478C. */
struct SaveRecordBlock {
    u8 unk000[0x2478C];
    u8 records[12][76];
};

extern "C" {
void rt_aeabi_memclr(void *buffer, u32 size);

/* Clears save record `index` (0..11). */
void gameDataClearSaveRecord(u32 index)
{
    if (index < 12) {
        SaveRecordBlock *block = (SaveRecordBlock *)g_gameDataBlocks.saveBlock->linkTable;
        u8 *record = block->records[index];
        rt_aeabi_memclr(record, 76);
    }
}
}

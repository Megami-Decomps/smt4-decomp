#include "gamedata/GameSaveBlocks.h"

extern "C" {
void rt_aeabi_memclr(void *buffer, u32 size);

/* Clears save record `index` (0..11). */
void gameDataClearSaveRecord(u32 index)
{
    if (index < 12) {
        GameSaveBody *body = &g_gameDataBlocks.saveBlock->body;
        u8 *record = body->summary.records[index];
        rt_aeabi_memclr(record, 76);
    }
}
}

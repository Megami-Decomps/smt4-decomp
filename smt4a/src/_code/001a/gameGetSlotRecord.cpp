#include "gamedata/SaveSlotTable.h"
#include "gamedata/SaveSlotRecord.h"
#include "shard/W5_W5Match5_GameSaveViews.h"

extern "C" {

SlotRecordA *gameGetSlotRecord(s32 slotIndex)
{
    SaveSlotTable *table = &g_gameDataBlocks.saveBlock->body.slots;
    return &table->entries[slotIndex];
}

} /* extern "C" */

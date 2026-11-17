#include "gamedata/SaveSlotRecord.h"
#include "shard/W5_W5Match5_GameSaveViews.h"

extern "C" {

/* The unit record of reserve position `slot`, or NULL when the position is empty. */
SlotRecordA *gameGetSaveSlotData(s32 slot)
{
    SaveSlotTableA *table = &g_gameDataBlocks.saveBlock->body.slots;
    SlotRecordA *result = NULL;
    s32 index = table->reserve[slot];

    if (index >= 0) {
        result = &table->entries[index];
    }
    return result;
}

}

/* NON_MATCHING: address arithmetic now matches; retail loads the global before scaling the slot index (rsb), the build scales first. */
#include "shard/W5_W5Match5_GameSaveViews.h"

extern "C" {

SlotRecord *gameGetSlotRecord(s32 slotIndex)
{
    GameSlotTable *table = reinterpret_cast<GameSlotTable *>(g_gameDataBlocks.saveBlock);
    GameSlotEntry *slots = table->slots;
    return &slots[slotIndex].record;
}

} /* extern "C" */

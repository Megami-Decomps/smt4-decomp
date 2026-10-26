/* NON_MATCHING: address arithmetic and the leading literal load match; retail schedules `ldr block` right after the rsb and before the x5 scaling add, the build scales first. */
#include "shard/W5_W5Match5_GameSaveViews.h"

extern "C" {

static __inline SlotRecord *slotRecordAt(GameSlotTable *table, s32 slotIndex)
{
    GameSlotEntry *slots = table->slots;
    return &slots[slotIndex].record;
}

SlotRecord *gameGetSlotRecord(s32 slotIndex)
{
    return slotRecordAt(reinterpret_cast<GameSlotTable *>(g_gameDataBlocks.saveBlock), slotIndex);
}

} /* extern "C" */

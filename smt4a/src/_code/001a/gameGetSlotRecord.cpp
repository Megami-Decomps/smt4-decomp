#include "shard/W5_W5Match5_GameSaveViews.h"

extern "C" {

static __inline GameSlotEntry *slotTableGetSlots(GameSlotTable *table)
{
    return table->slots;
}

SlotRecord *gameGetSlotRecord(s32 slotIndex)
{
    GameSlotEntry *slots = slotTableGetSlots(reinterpret_cast<GameSlotTable *>(g_gameDataBlocks.saveBlock));
    return &slots[slotIndex].record;
}

} /* extern "C" */

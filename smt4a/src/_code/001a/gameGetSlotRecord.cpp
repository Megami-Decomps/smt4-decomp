/* NON_MATCHING: retail uses ldr r1, [pc, #24] where the compiled block uses rsb r1, r0, r0, lsl #4. */
#include "shard/W5_W5Match5_GameSaveViews.h"

extern "C" {

SlotRecord *gameGetSlotRecord(s32 slotIndex)
{
    GameSlotTable *table = static_cast<GameSlotTable *>(g_gameDataBlocks.saveBlock);
    return &table->slots[slotIndex].record;
}

} /* extern "C" */

#include "gamedata/GameSaveBlocks.h"
extern "C" {
struct SavedUnitRecord { u8 data[0x604]; };

/* Resolve a saved party slot to its unit record, or null for an empty slot. */
SavedUnitRecord *saveResolvePartySlot(u32 slot)
{
    SaveSlotTableIV *slots = &g_gameDataBlocks.saveBlock->body.slots;
    s32 index = slots->active[slot];
    SavedUnitRecord *record = NULL;
    if (index >= 0) {
        record = (SavedUnitRecord *)&slots->units[index];
    }
    return record;
}
}

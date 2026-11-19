#include "gamedata/GameSaveBlocks.h"
#include "gamedata/UnitStats.h"
extern "C" {

/* Resolve a saved party slot to its unit record, or null for an empty slot. */
StatBlock *saveResolvePartySlot(u32 slot)
{
    SaveSlotTableIV *slots = &g_gameDataBlocks.saveBlock->body.slots;
    s32 index = slots->active[slot];
    StatBlock *record = NULL;
    if (index >= 0) {
        record = &slots->units[index];
    }
    return record;
}
}

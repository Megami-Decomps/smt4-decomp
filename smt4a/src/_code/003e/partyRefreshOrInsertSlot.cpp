#include "gamedata/GameSaveDataA.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {
void battleRecordInitializeFromDefinition(PartySlotA *record, u32 definition);
}

static __inline PartySlotA *resolvePartyRecord(u16 index)
{
    if (index < 12)
        return &gameGetSlotTable()->slots[index];
    return NULL;
}

// Refresh an existing party record or insert it into the first empty slot.
extern "C" void partyRefreshOrInsertSlot(u32 id, u32 definition)
{
    s32 emptySlot = -1;
    for (s32 i = 0; i < 12; ++i) {
        PartySlotA *record = resolvePartyRecord((u16)i);
        if (record->id == id) {
            record->flags |= 1;
            battleRecordInitializeFromDefinition(record, definition);
            return;
        }
        if (emptySlot < 0 && record->id == 0)
            emptySlot = i;
    }
    if (emptySlot < 0)
        return;
    PartySlotA *record = resolvePartyRecord((u16)emptySlot);
    record->id = (u16)id;
    record->flags |= 1;
    record->slotIndex = (u16)emptySlot;
    battleRecordInitializeFromDefinition(record, definition);
}

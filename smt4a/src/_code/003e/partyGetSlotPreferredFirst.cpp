/* NON_MATCHING: preferred-ID comparison operands and zero initialization lifetime/store scheduling differ. */
#include "gamedata/GameSaveDataA.h"
#include "gamedata/SaveSlotTable.h"


static inline PartySlotA *partySlotAt(u16 index)
{
    return index < 12 ? &gameGetSlotTable()->slots[index] : NULL;
}

static inline PartySlotA *findPreferredPartySlot(SaveSlotTableA *party)
{
    if (party->preferredId) {
        for (s32 i = 0; i < 12; ++i) {
            PartySlotA *slot = partySlotAt(i);
            if (slot->id == party->preferredId)
                return slot;
        }
    }
    return NULL;
}

/* Present the preferred party slot first, leaving every other slot in table order. */
extern "C" PartySlotA *partyGetSlotPreferredFirst(u32 index)
{
    SaveSlotTableA *party = gameGetSlotTable();
    PartySlotA *preferred = findPreferredPartySlot(party);
    if (index >= 12)
        return NULL;
    if (!preferred)
        return &gameGetSlotTable()->slots[index];
    PartySlotA *ordered[12] = {NULL};
    ordered[0] = preferred;
    s32 count = 1;
    for (s32 i = 0; i < 12; ++i) {
        PartySlotA *slot = partySlotAt(i);
        if (slot != preferred)
            ordered[count++] = slot;
    }
    return ordered[index];
}

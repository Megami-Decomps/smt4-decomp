/* NON_MATCHING: preferred-ID comparison operands and zero initialization lifetime/store scheduling differ. */
#include "shard/W6_W6Match1_PartySlot.h"

/* The preferred ID is immediately beyond the shared table's recovered extent. */
struct PreferredPartySlotTableView {
    PartySlotTableA table;
    u16 preferredId;
};
extern "C" PreferredPartySlotTableView *gameGetSlotTable(void);

static inline PartySlotA *partySlotAt(u16 index)
{
    return index < 12 ? &gameGetSlotTable()->table.slots[index] : NULL;
}

static inline PartySlotA *findPreferredPartySlot(PreferredPartySlotTableView *party)
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
extern "C" PartySlotA *FUN_003e503c(u32 index)
{
    PreferredPartySlotTableView *party = gameGetSlotTable();
    PartySlotA *preferred = findPreferredPartySlot(party);
    if (index >= 12)
        return NULL;
    if (!preferred)
        return &gameGetSlotTable()->table.slots[index];
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

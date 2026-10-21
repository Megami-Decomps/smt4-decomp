#include "shard/W6_W6Match1_PartySlot.h"

extern "C" {
PartySlotTableA* gameGetSlotTable(void);

static __inline PartySlotA* getPartySlot(u16 index)
{
    if (index >= 12) {
        return NULL;
    }
    return &gameGetSlotTable()->slots[index];
}

s32 partyCountActiveSlots(void)
{
    s32 count = 0;
    for (s32 index = 0; index < 12; ++index) {
        const PartySlotA* slot = getPartySlot((u16)index);
        if (slot != NULL && (slot->flags & 1) != 0) {
            ++count;
        }
    }
    return count;
}

} /* extern "C" */

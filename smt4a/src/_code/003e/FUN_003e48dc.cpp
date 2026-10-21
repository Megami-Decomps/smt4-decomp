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

void FUN_003e48dc(u32 id)
{
    for (s32 index = 0; index < 12; ++index) {
        PartySlotA* slot = getPartySlot((u16)index);
        if (slot->id == id) {
            slot->flags &= ~1u;
            return;
        }
    }
}
}

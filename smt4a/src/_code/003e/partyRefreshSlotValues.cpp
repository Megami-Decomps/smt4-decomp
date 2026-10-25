#include "shard/W6_W6Match1_PartySlot.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {
s32 FUN_0018416c(u16 id);

static __inline PartySlotA *getPartySlot(u16 index)
{
    if (index >= 12) {
        return NULL;
    }
    return &gameGetSlotTable()->slots[index];
}

/* Refreshes both copied slot values, conditionally boosting the first by a quarter. */
void partyRefreshSlotValues(void)
{
    for (s32 index = 0; index < 12; ++index) {
        PartySlotA *slot = getPartySlot(static_cast<u16>(index));
        if (slot != NULL && (slot->flags & 1) != 0) {
            s16 value = slot->unk0E;
            if (FUN_0018416c(slot->unk62) != 0) {
                value = static_cast<s16>(static_cast<s32>(static_cast<f32>(value) * 1.25f));
            }
            slot->unk2A = value;
            slot->unk2C = slot->unk10;
        }
    }
}
}

/* NON_MATCHING: The slot reset halfword store follows the active-slot branch instead of preceding it as a predicated store. */
#include "shard/W6_W6Match1_PartySlot.h"

extern "C" {
PartySlotTableA *gameGetSlotTable(void);
s32 FUN_0018416c(u16 id);

static __inline PartySlotA *getPartySlot(u16 index)
{
    if (index >= 12) {
        return NULL;
    }
    return &gameGetSlotTable()->slots[index];
}

/* Clears the slot word before refreshing its copied values and conditional quarter boost. */
void FUN_003e4e64(void)
{
    for (s32 index = 0; index < 12; ++index) {
        PartySlotA *slot = getPartySlot(static_cast<u16>(index));
        if (slot != NULL && (slot->flags & 1) != 0) {
            slot->unk60 = 0;
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

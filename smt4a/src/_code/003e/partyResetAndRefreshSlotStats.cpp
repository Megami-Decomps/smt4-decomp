#include "gamedata/GameSaveDataA.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {
s32 unitHasRankingBonus(u16 id);

static __inline PartySlotA *getPartySlot(u16 index)
{
    if (index >= 12) {
        return NULL;
    }
    return &gameGetSlotTable()->slots[index];
}

/* Clears the slot word before refreshing its copied values and conditional quarter boost. */
void partyResetAndRefreshSlotStats(void)
{
    for (s32 index = 0; index < 12; ++index) {
        PartySlotA *slot = getPartySlot(static_cast<u16>(index));
        if (slot == NULL)
            continue;
        bool active = (slot->flags & 1) != 0;
        if (active)
            slot->record.ailments = 0;
        if (active) {
            s16 value = slot->record.maxHp;
            if (unitHasRankingBonus(slot->record.id) != 0) {
                value = static_cast<s16>(static_cast<s32>(static_cast<f32>(value) * 1.25f));
            }
            slot->record.hp = value;
            slot->record.mp = slot->record.maxMp;
        }
    }
}
}

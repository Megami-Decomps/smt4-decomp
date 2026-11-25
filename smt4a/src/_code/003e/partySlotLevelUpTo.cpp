/* NON_MATCHING: armcc hoists the learned-skill array address above the equipped-skill scan;
 * retail forms it at the start of the equip loop. */
#include "gamedata/PartySkillRank.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {
void unitCollectSkillsLearnedWithin(PartySlotA *, s16, u16 *);
void FUN_004cd4b8(PartySlotA *, s16);

static __inline PartySlotA *getPartySlot(u16 index)
{
    if (index >= 12)
        return NULL;
    return &gameGetSlotTable()->slots[index];
}

u32 partySlotLevelUpTo(u32 id, s32 targetLevel, s32 maximumIncrease)
{
    PartySlotA *slot = NULL;
    for (s32 index = 0; index < 12; ++index) {
        PartySlotA *candidate = getPartySlot((u16)index);
        if (candidate->id == id) {
            slot = candidate;
            break;
        }
    }
    if (!slot || targetLevel <= slot->record.level)
        return 0;
    s32 increase = targetLevel - slot->record.level;
    if (maximumIncrease < increase)
        increase = maximumIncrease;
    u16 learned[8] = {};
    unitCollectSkillsLearnedWithin(slot, (s16)increase, learned);
    s32 nextSlot = 0;
    for (s32 count = 0; count < 8 && slot->record.skills[count]; ++count)
        ++nextSlot;
    for (s32 index = 0; index < 8 && learned[index]; ++index, ++nextSlot) {
        u16 skill = learned[index];
        partyRecordEquipSkillWithRank(&slot->record, skill, nextSlot);
    }
    FUN_004cd4b8(slot, (s16)increase);
    return 1;
}
}

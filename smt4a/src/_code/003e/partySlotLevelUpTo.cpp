/* NON_MATCHING: parameter registers (r8/r9 swapped), rank-base hoisting in the learn loop and clamp temp differ. */
#include "gamedata/GameSaveDataA.h"
#include "shard/Shard004B.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {
s32 partyRecordClampEquippedRankUp(u32);
s32 partyRecordClampEquippedRankDown(u32);
void FUN_004cd0c8(PartySlotA *, s16, u16 *);
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
    FUN_004cd0c8(slot, (s16)increase, learned);
    s32 nextSlot = 0;
    for (s32 count = 0; count < 8 && slot->record.skills[count]; ++count)
        ++nextSlot;
    for (s32 index = 0; index < 8 && learned[index]; ++index, ++nextSlot) {
        u32 skill = learned[index];
        if (slot && nextSlot < 8) {
            slot->record.skills[nextSlot] = skill;
            const ItemRankDefinition *definition = (const ItemRankDefinition *)skillDataFindById(skill);
            s32 rank = 0;
            if (definition && definition->category < 18)
                rank = slot->record.categoryRanks[definition->category];
            s32 maximum = partyRecordClampEquippedRankUp(skill);
            s32 minimum = partyRecordClampEquippedRankDown(skill);
            if (rank > maximum)
                rank = maximum;
            else if (rank < minimum)
                rank = minimum;
            slot->record.skillRanks[nextSlot] = rank;
        }
    }
    FUN_004cd4b8(slot, (s16)increase);
    return 1;
}
}

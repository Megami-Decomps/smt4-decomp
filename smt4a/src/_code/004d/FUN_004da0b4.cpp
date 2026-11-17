/* NON_MATCHING: The slot index and cached support-unit pointer receive opposite saved registers. */
#include "gamedata/GameSaveDataA.h"
#include "gamedata/SupportUnitRecord.h"
extern "C" {
PartySlotA* gameGetOptions(void);
SupportUnitRecordA* dataTableGetCategoryEntry(s32, u16);
void affinityResolveUnitSlot(PackedSkillSlot*, PartySlotA*, s32);

u32 FUN_004da0b4(u32 index)
{
    PartySlotA* unit = gameGetOptions();
    PartySlotA* current = gameGetOptions();
    PackedSkillSlot slot;
    if (current->record.id != 0 && current->id != 0) {
        SupportUnitRecordA* support = dataTableGetCategoryEntry((s16)unit->id, unit->slotIndex);
        slot.id = support->packedSkills[index].id;
        slot.unk00 = support->packedSkills[index].unk00;
    } else {
        affinityResolveUnitSlot(&slot, unit, index);
    }
    return slot.unk00;
}
}

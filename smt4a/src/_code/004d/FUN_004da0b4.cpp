/* NON_MATCHING: The slot index and cached support-unit pointer receive opposite saved registers. */
#include "shard/W6_W6Match1_PartySlot.h"
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
    if (current->unk62 != 0 && current->id != 0) {
        SupportUnitRecordA* support = dataTableGetCategoryEntry((s16)unit->id, unit->unk12e);
        slot.id = support->packedSkills[index].id;
        slot.unk00 = support->packedSkills[index].unk00;
    } else {
        affinityResolveUnitSlot(&slot, unit, index);
    }
    return slot.unk00;
}
}

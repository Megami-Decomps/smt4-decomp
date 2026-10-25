/* NON_MATCHING: slot index and cached player pointer occupy opposite saved registers. */
#include "gamedata/SupportUnitRecord.h"
#include "shard/W6_W6Match1_PartySlot.h"

extern "C" {
PartySlotA *gameGetOptions();
SupportUnitRecordA *dataTableGetCategoryEntry(s32 category, u16 index);
void affinityResolveUnitSlot(PackedSkillSlot *skill, PartySlotA *unit, s32 slot);

u32 FUN_004da024(u32 slot)
{
    PackedSkillSlot skill;
    PartySlotA *unit = gameGetOptions();
    PartySlotA *current = gameGetOptions();
    if (current->unk62 && current->id) {
        const SupportUnitRecordA *record =
            dataTableGetCategoryEntry((s16)unit->id, unit->unk12e);
        skill.id = record->packedSkills[slot].id;
        skill.unk00 = record->packedSkills[slot].unk00;
    } else {
        affinityResolveUnitSlot(&skill, unit, slot);
    }
    return skill.id;
}
}

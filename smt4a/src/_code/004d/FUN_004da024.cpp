/* NON_MATCHING: the packed skill is copied as a whole instead of retail's two bit-field read/modify/writes. */
#include "gamedata/SupportUnitRecord.h"
#include "shard/W6_W6Match1_PartySlot.h"

extern "C" {
PartySlotA *gameGetOptions();
SupportUnitRecordA *dataTableGetCategoryEntry(s32 category, u32 index);
void affinityResolveUnitSlot(PackedSkillSlot *skill, PartySlotA *unit, u32 slot);

u32 FUN_004da024(u32 slot)
{
    PackedSkillSlot skill;
    PartySlotA *unit = gameGetOptions();
    PartySlotA *current = gameGetOptions();
    if (current->unk62 && current->id) {
        const SupportUnitRecordA *record =
            dataTableGetCategoryEntry((s16)unit->id, unit->unk12e);
        skill = record->packedSkills[slot];
    } else {
        affinityResolveUnitSlot(&skill, unit, slot);
    }
    return skill.id;
}
}

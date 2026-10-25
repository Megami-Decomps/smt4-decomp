/* NON_MATCHING: field-wise bitfield copy now matches retail; only the r4/r5 numbering of slot vs options is swapped. */
#include "shard/GameOptions.h"
#include "gamedata/SupportUnitRecord.h"

extern "C" {
GameOptions *gameGetSupportUnitData();
const SupportUnitRecord *supportUnitGetEntry(s32 kind, u32 index);
void affinityResolveUnitSlot(PackedSkillSlot *result, GameOptions *options, u32 slot);

u32 FUN_003c8538(u32 slot)
{
    PackedSkillSlot skill;
    GameOptions *options = gameGetSupportUnitData();
    GameOptions *current = gameGetSupportUnitData();
    if (current->unk46 != 0 && current->unk604 != 0) {
        const SupportUnitRecord *record =
            supportUnitGetEntry((s16)options->unk604, options->supportIndex);
        skill.id = record->packedSkills[slot].id;
        skill.unk00 = record->packedSkills[slot].unk00;
    } else {
        affinityResolveUnitSlot(&skill, options, slot);
    }
    return skill.id;
}
}

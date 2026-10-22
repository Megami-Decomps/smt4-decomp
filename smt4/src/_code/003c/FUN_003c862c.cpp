/* NON_MATCHING: The slot index and cached support-unit pointer receive opposite saved registers. */
#include "shard/GameOptions.h"
#include "gamedata/SupportUnitRecord.h"
extern "C" {
GameOptions* gameGetSupportUnitData(void);
SupportUnitRecord* supportUnitGetEntry(s32, u32);
void affinityResolveUnitSlot(PackedSkillSlot*, GameOptions*, s32);

u16 FUN_003c862c(s32 index)
{
    GameOptions* unit = gameGetSupportUnitData();
    GameOptions* current = gameGetSupportUnitData();
    PackedSkillSlot slot;
    if (current->unk46 != 0 && current->unk604 != 0) {
        SupportUnitRecord* support = supportUnitGetEntry((s16)unit->unk604, unit->supportIndex);
        slot.id = support->packedSkills[index].id;
        slot.unk00 = support->packedSkills[index].unk00;
    } else {
        affinityResolveUnitSlot(&slot, unit, index);
    }
    return slot.unk00;
}
}

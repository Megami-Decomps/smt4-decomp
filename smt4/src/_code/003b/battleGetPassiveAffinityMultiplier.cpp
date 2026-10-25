#include "battle/BtlMainAccess.h"
#include "shard/PassiveSkill.h"

extern "C" {
void *btlMainFindEntryByListedId(void *, u32);
void FUN_0022abe0(void *, u16 *);

// Multiply the passive-skill bonuses that apply to the requested affinity.
f32 battleGetPassiveAffinityMultiplier(u32 listedId, u32 affinity)
{
    f32 multiplier = 1.0f;
    void *entry = btlMainFindEntryByListedId(static_cast<void *>(btlGetMainState()), listedId);
    u16 skills[10] = {0};
    FUN_0022abe0(entry, skills);
    for (s32 index = 0; index < 9; ++index) {
        if (skills[index] == 0)
            continue;
        const PassiveSkillRecord *skill = passiveSkillLookupRecord(skills[index]);
        if (skill != NULL && ((skill->affinity >> 11) & 31) == affinity) {
            u32 strength = (skill->affinity >> 16) & 15;
            if (strength == 5)
                multiplier *= 1.25f;
            else if (strength == 6)
                multiplier *= 1.5f;
        }
    }
    return multiplier;
}
}

#include "shard/PassiveSkill.h"
#include "shard/Shard0031.h"
#include "gamedata/PartySkillCost.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {
s32 FUN_0028809c(s32 source, s32 target, const SkillDataRecordA *skill, s32 preview, s32 flags);

/* Applies a skill to the player and occupied demon slots, charging MP once if it succeeds. */
u32 skillApplyToParty(s32 source, u32 skillId, s32 preview)
{
    u8 applied = 0;
    const SkillDataRecordA *skill = skillDataFindById(skillId);
    if (skill != NULL) {
        if (FUN_0028809c(source, -1, skill, preview, 0) == 0) {
            applied = 1;
        }
        SaveSlotTableA *party = gameGetSlotTable();
        for (s32 index = 0; index < 24; ++index) {
            s32 target = party->party[index];
            if (target >= 0 && FUN_0028809c(source, target, skill, preview, 0) == 0) {
                applied = 1;
            }
        }
        if (applied != 0) {
            if (preview == 0) {
                chargePartySkillCost(source, skill);
            }
            return 0;
        }
    }
    return 1;
}

} /* extern "C" */

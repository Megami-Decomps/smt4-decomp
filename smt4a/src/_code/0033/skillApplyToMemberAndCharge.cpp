#include "shard/Shard0034.h"
#include "shard/Shard004B.h"
#include "gamedata/PartySkillCost.h"
#include "gamedata/SkillRestore.h"

extern "C" {

/* Uses skill `id` from party slot `slot` (the player when negative) on `target`; when it takes
 * effect outside preview, pays its cost from the user's MP. Returns 1 for an unknown skill. */
s32 skillApplyToMemberAndCharge(s32 slot, u32 target, u32 id, s32 preview)
{
    const SkillDataRecordA *skill = skillDataFindById(id);
    if (skill == NULL) {
        return 1;
    }
    s32 result = skillApplyRestoreToMember(slot, (s32)target, skill, preview, NULL);
    if (result == 0 && preview == 0) {
        chargePartySkillCost(slot, skill);
    }
    return result;
}

} /* extern "C" */

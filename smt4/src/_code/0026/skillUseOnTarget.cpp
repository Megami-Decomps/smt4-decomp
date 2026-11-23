#include "common.h"
#include "gamedata/SkillDataLookup.h"
#include "gamedata/SkillFieldUse.h"

extern "C" {

/* Uses a skill on `target` for `user` (negative: the player) and, unless it failed or is only a preview, charges
 * the user its MP cost. Returns 0 when the skill took effect, 1 when not. */
s32 skillUseOnTarget(s32 user, s32 target, u32 id, s32 preview)
{
    SkillDataRecord *skill = skillDataFindById(id);
    s32 result;

    if (skill == NULL) {
        return 1;
    }
    result = skillApplyRestoreToMember(user, target, skill, preview, NULL);
    if (result == 0 && preview == 0) {
        skillPayMpCost(user, skill);
    }
    return result;
}

} /* extern "C" */

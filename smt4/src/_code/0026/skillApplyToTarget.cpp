#include "common.h"
#include "code/Code0026.h"
#include "gamedata/SkillDataLookup.h"
#include "gamedata/SkillFieldUse.h"

extern "C" {

/* Resolves table 4's record and previews it on the requested target: the HP it would restore goes to `result`. */
s32 skillApplyToTarget(u32 user, s32 target, u32 id, s32 *result)
{
    *result = 0;
    SkillDataRecord *record = skillDataFindById(id);
    if (record == NULL) {
        return 1;
    }
    return skillApplyRestoreToMember(user, target, record, 1, result);
}
}

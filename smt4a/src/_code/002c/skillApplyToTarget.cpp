#include "common.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/SkillRestore.h"

extern "C" {

/* Resolves table 4's record and previews its restoration on the requested target. */
s32 skillApplyToTarget(u32 user, s32 target, u32 id, s32 *result)
{
    *result = 0;
    const SkillDataRecordA *record = skillDataFindById(id);
    if (record == NULL) {
        return 1;
    }
    return skillApplyRestoreToMember((s32)user, target, record, 1, result);
}
} /* extern "C" */

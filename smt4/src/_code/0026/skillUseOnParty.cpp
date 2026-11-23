#include "gamedata/SkillDataRecord.h"

#include "gamedata/SkillDataLookup.h"
#include "gamedata/SkillFieldUse.h"
#include "gamedata/SaveSlotTableIV.h"

extern "C" {

/* Applies a field skill to the player and stock, charging MP only when a target accepts it. */
s32 skillUseOnParty(s32 user, u32 skillId, s32 preview)
{
    bool applied = false;
    SkillDataRecord *skill = skillDataFindById(skillId);
    if (skill != NULL) {
        if (skillApplyRestoreToMember(user, -1, skill, preview, NULL) == 0) {
            applied = true;
        }
        SaveSlotTableIV *slots = gameGetSlotTable();
        for (s32 index = 0; index < 24; ++index) {
            s32 target = slots->stock[index];
            if (target >= 0 && skillApplyRestoreToMember(user, target, skill, preview, NULL) == 0) {
                applied = true;
            }
        }
        if (applied) {
            if (preview == 0) {
                skillPayMpCost(user, skill);
            }
            return 0;
        }
    }
    return 1;
}
}

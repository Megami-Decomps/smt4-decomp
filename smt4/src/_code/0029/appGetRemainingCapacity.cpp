#include "gamedata/GauntletAppTable.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/SkillDataLookup.h"
#include "shard/W6_W6Match3_NameFormState.h"

extern "C" {

/* Returns the capacity of `id` left after the costs of the installed apps 12-15 (at least 1), or 0
 * when `id` has no record. */
s32 appGetRemainingCapacity(u32 id)
{
    const SkillDataRecord *skill = skillDataFindById(id);
    s32 capacity = skill != NULL ? skill->cost.baseCost : 0;
    s32 used = 0;
    if (skill != NULL) {
        if (flagBitIsSet(12)) {
            used += static_cast<const GauntletAppRecord *>(appCostRecordFindById(12))->skillCostDiscount;
        }
        if (flagBitIsSet(13)) {
            used += static_cast<const GauntletAppRecord *>(appCostRecordFindById(13))->skillCostDiscount;
        }
        if (flagBitIsSet(14)) {
            used += static_cast<const GauntletAppRecord *>(appCostRecordFindById(14))->skillCostDiscount;
        }
        if (flagBitIsSet(15)) {
            used += static_cast<const GauntletAppRecord *>(appCostRecordFindById(15))->skillCostDiscount;
        }
        s32 remaining = capacity - used;
        if (remaining <= 0) {
            remaining = 1;
        }
        return remaining;
    }
    return 0;
}

} /* extern "C" */

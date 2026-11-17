#include "common.h"
#include "gamedata/SkillDataLookup.h"

extern "C" {
/* Returns the nonnegative amount remaining below the entry maximum. */
s32 FUN_00333ea8(u32 id, u32 index)
{
    const SkillDataRecord *entry = skillDataFindById(id);
    if (entry == NULL)
        return 0;
    s32 maximum = entry->cost.baseCost;
    s32 remaining = maximum - FUN_00283ebc(entry, index, 4);
    if (remaining <= 0)
        return 1;
    return remaining;
}
}

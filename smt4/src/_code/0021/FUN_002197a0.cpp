#include "common.h"
#include "gamedata/SkillDataLookup.h"

extern "C" {

s32 skillGetDiscountedCost(u16 id, u32 flag);

/* Compares two entries by their looked-up values; empty or unknown ids compare equal. */
s32 FUN_002197a0(const u16 *idA, const u16 *idB)
{
    if (*idA == 0) {
        return 0;
    }
    if (*idB == 0) {
        return 0;
    }
    const SkillDataRecord *entryA = skillDataFindById(*idA);
    const SkillDataRecord *entryB = skillDataFindById(*idB);
    if (entryA == 0) {
        return 0;
    }
    if (entryB == 0) {
        return 0;
    }
    s16 rankA = skillGetDiscountedCost(*idA, 1);
    s16 rankB = skillGetDiscountedCost(*idB, 1);
    return rankA - rankB;
}

} /* extern "C" */

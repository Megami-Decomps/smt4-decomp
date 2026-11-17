#include "common.h"
#include "gamedata/SkillDataLookup.h"

extern "C" {

s32 appGetRemainingCapacity(u32 id);

/* Compares two ids by their appGetRemainingCapacity value; ids that are zero or have no record compare equal (0). */
s32 unitCompareByPriorityValue(const u16 *left, const u16 *right)
{
    if (*left == 0) {
        return 0;
    }
    if (*right == 0) {
        return 0;
    }
    void *leftRecord = skillDataFindById(*left);
    void *rightRecord = skillDataFindById(*right);
    if (leftRecord == NULL) {
        return 0;
    }
    if (rightRecord == NULL) {
        return 0;
    }
    return (s16)appGetRemainingCapacity(*left) - (s16)appGetRemainingCapacity(*right);
}

} /* extern "C" */

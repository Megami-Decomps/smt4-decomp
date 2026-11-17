#include "common.h"
#include "gamedata/NkmBaseRecord.h"

extern "C" {

u32 itemGetFlagBit1(u16 id);

/* qsort comparator over demon IDs: by the sets itemGetFlagBit1 returns (a superset sorts first), then category, grade (descending) and ID. */
int devilCompareBySetCategoryGrade(const u16 *left, const u16 *right)
{
    u32 leftSet = itemGetFlagBit1(*left);
    u32 rightSet = itemGetFlagBit1(*right);
    int result;

    if ((rightSet & ~leftSet) != 0) {
        return -1;
    }
    if ((leftSet & ~rightSet) != 0) {
        return 1;
    }
    NkmBaseRecord *a = nkmBaseGetRecord(*left);
    NkmBaseRecord *b = nkmBaseGetRecord(*right);
    result = a->race - b->race;
    if (result == 0) {
        result = b->level - a->level;
        if (result == 0) {
            result = a->id - b->id;
        }
    }
    return result;
}

} /* extern "C" */

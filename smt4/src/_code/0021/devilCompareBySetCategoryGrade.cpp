#include "common.h"

extern "C" {

/* The sort keys of a demon record. */
typedef struct DevilSortKeys {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 category;
    /* 0x03 */ u8 grade;
} DevilSortKeys;

DevilSortKeys *devilGetRecord(u32 id);
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
    DevilSortKeys *a = devilGetRecord(*left);
    DevilSortKeys *b = devilGetRecord(*right);
    result = a->category - b->category;
    if (result == 0) {
        result = b->grade - a->grade;
        if (result == 0) {
            result = a->id - b->id;
        }
    }
    return result;
}

} /* extern "C" */

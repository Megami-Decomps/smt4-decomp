/* NON_MATCHING: only the two count loads at entry differ: retail loads b->count through the saved copy of r1 after comparing a->count; the build loads both before the compare. */
#include "gamedata/DevilRecordA.h"

extern "C" {

/* qsort comparator: orders demon stock entries by race, level and ID (all descending race/ID, ascending level); empty entries sort last. */
int FUN_0035fe34(const void *left, const void *right)
{
    const DevilStock *a = (const DevilStock *)left;
    const DevilStock *b = (const DevilStock *)right;
    int result;

    if (a->count == 0) {
        if (b->count == 0) {
            return 0;
        }
        return 1;
    }
    if (b->count == 0) {
        return -1;
    }
    const DevilRecordA *devilA = FUN_00184310(a->id);
    const DevilRecordA *devilB = FUN_00184310(b->id);
    result = devilB->race - devilA->race;
    if (result == 0) {
        result = devilA->level - devilB->level;
        if (result == 0) {
            result = devilB->id - devilA->id;
        }
    }
    return result;
}

} /* extern "C" */

#include "gamedata/DevilRecordA.h"

extern "C" {

u32 FUN_002a4b28(u16 id);

/* qsort comparator over demon IDs: by the sets FUN_002a4b28 returns (a subset sorts first), then race (descending), level (ascending) and ID (descending). */
int devilCompareBySetRaceLevel(const u16 *left, const u16 *right)
{
    u32 leftSet = FUN_002a4b28(*left);
    u32 rightSet = FUN_002a4b28(*right);
    int result;

    if ((rightSet & ~leftSet) != 0) {
        return 1;
    }
    if ((leftSet & ~rightSet) != 0) {
        return -1;
    }
    const DevilRecordA *a = FUN_00184310(*left);
    const DevilRecordA *b = FUN_00184310(*right);
    result = b->race - a->race;
    if (result == 0) {
        result = a->level - b->level;
        if (result == 0) {
            result = b->id - a->id;
        }
    }
    return result;
}

} /* extern "C" */

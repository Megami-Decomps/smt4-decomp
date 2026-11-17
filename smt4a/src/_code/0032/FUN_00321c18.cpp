#include "gamedata/NkmBaseRecordA.h"

extern "C" {

/* qsort comparator: orders demon stock entries by level (ascending), then race and ID (descending); empty entries sort last. */
int FUN_00321c18(const DevilStock *a, const DevilStock *b)
{
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
    const NkmBaseRecordA *devilA = nkmBaseGetRecord(a->id);
    const NkmBaseRecordA *devilB = nkmBaseGetRecord(b->id);
    result = devilA->level - devilB->level;
    if (result == 0) {
        result = devilB->race - devilA->race;
        if (result == 0) {
            result = devilB->id - devilA->id;
        }
    }
    return result;
}

} /* extern "C" */

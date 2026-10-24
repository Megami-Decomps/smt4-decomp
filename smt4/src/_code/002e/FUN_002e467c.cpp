/* NON_MATCHING: only the order of the conditional moves (moveq #0 / movne #1) for `second->present != 0` differs */
#include "shard/W6_W6Match5_DevilSort.h"

struct DevilSlot {
    u16 id;       // 0x00
    u16 present;  // 0x02
};

extern "C" {

/* Compares two demon slots: empty slots sort last, then by race (descending), level, and id (descending). */
s32 FUN_002e467c(const DevilSlot *first, const DevilSlot *second)
{
    if (first->present == 0) {
        return second->present != 0;
    }
    if (second->present == 0) {
        return -1;
    }
    const DevilSortRecord *a = devilGetRecord(first->id);
    const DevilSortRecord *b = devilGetRecord(second->id);
    s32 result = b->race - a->race;

    if (result == 0) {
        result = a->level - b->level;
        if (result == 0) {
            result = b->id - a->id;
        }
    }
    return result;
}

} /* extern "C" */

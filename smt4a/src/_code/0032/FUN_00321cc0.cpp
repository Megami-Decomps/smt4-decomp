#include "shard/W6_W6Match8_DevilRecordA.h"

extern "C" {

/* Compares two devil ids in reverse by level, race, then level (forward) and id (reverse). */
s32 FUN_00321cc0(const u16 *first, const u16 *second)
{
    const DevilRecordA *a = devilGetRecord(*first);
    const DevilRecordA *b = devilGetRecord(*second);
    s32 result = b->level - a->level;

    if (result == 0) {
        a = devilGetRecord(*first);
        b = devilGetRecord(*second);
        result = b->race - a->race;
        if (result == 0) {
            result = a->level - b->level;
            if (result == 0) {
                result = b->id - a->id;
            }
        }
    }
    return result;
}

} /* extern "C" */

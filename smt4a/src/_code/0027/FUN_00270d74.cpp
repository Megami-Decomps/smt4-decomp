#include "shard/W6_W6Match8_DevilRecordA.h"

extern "C" {

/* Compares two devil ids by level, race, level (reversed) and id. */
s32 FUN_00270d74(const u16 *first, const u16 *second)
{
    const DevilRecordA *a = FUN_00184310(*first);
    const DevilRecordA *b = FUN_00184310(*second);
    s32 result = a->level - b->level;

    if (result == 0) {
        a = FUN_00184310(*first);
        b = FUN_00184310(*second);
        result = a->race - b->race;
        if (result == 0) {
            result = b->level - a->level;
            if (result == 0) {
                result = a->id - b->id;
            }
        }
    }
    return result;
}

} /* extern "C" */

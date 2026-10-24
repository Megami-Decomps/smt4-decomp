#include "shard/W6_W6Match8_DevilRecordA.h"

struct DevilSlot {
    u16 id;       // 0x00
    u16 present;  // 0x02
};

extern "C" {

/* Compares two demon slots: empty slots sort last, then by race, level (descending) and id. */
s32 FUN_002ce15c(const DevilSlot *first, const DevilSlot *second)
{
    s32 result;

    if (first->present != 0) {
        if (second->present == 0) {
            result = -1;
        } else {
            const DevilRecordA *a = FUN_00184310(first->id);
            const DevilRecordA *b = FUN_00184310(second->id);

            result = a->race - b->race;
            if (result == 0) {
                result = b->level - a->level;
                if (result == 0) {
                    result = a->id - b->id;
                }
            }
        }
    } else {
        result = second->present != 0;
    }
    return result;
}

} /* extern "C" */

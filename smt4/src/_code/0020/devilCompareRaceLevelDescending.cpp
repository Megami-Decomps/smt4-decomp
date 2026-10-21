#include "shard/W6_W6Match5_DevilSort.h"

// Sorts by race ascending, level descending, then record ID ascending.
extern "C" s32 devilCompareRaceLevelDescending(const u16* first, const u16* second)
{
    DevilSortRecord* a = devilGetRecord(*first);
    DevilSortRecord* b = devilGetRecord(*second);
    s32 order = a->race - b->race;
    if (order == 0) {
        order = b->level - a->level;
        if (order == 0) {
            order = a->id - b->id;
        }
    }
    return order;
}

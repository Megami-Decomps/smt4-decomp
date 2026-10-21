#include "shard/W6_W6Match5_DevilSort.h"

// Sort demons by race, descending level, then ID.
extern "C" s32 FUN_00206d4c(const u16 *firstId, const u16 *secondId)
{
    DevilSortRecord *first = devilGetRecord(*firstId);
    DevilSortRecord *second = devilGetRecord(*secondId);
    s32 order = first->race - second->race;
    if (order == 0) {
        order = second->level - first->level;
        if (order == 0)
            order = first->id - second->id;
    }
    return order;
}

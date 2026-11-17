#include "gamedata/DevilRecordA.h"

struct RankedEntry {
    u16 id;  // 0x00
    u8 rank; // 0x02
};

extern "C" {

// Sorts by entry rank descending, metadata key ascending, then ID descending.
s32 FUN_004a7658(const RankedEntry* first, const RankedEntry* second)
{
    s32 order = second->rank - first->rank;
    if (order == 0) {
        DevilRecordA* a = devilGetRecord(first->id);
        DevilRecordA* b = devilGetRecord(second->id);
        order = a->level - b->level;
        if (order == 0) {
            order = second->id - first->id;
        }
    }
    return order;
}
}

#include "gamedata/Table05Pair.h"
#include "shard/W6_W6Match5_DevilSort.h"
extern "C" {
Table05Pair* dataTable05Sub0GetEntries(u32);
u32 randNextInRange(u32);

// Rolls the table probability after race and parent-flag adjustments.
u32 FUN_003c88f0(u32 tableId, const GameUnitSortRecord* first, const GameUnitSortRecord* second)
{
    u16 denominator = dataTable05Sub0GetEntries(tableId)->second;
    DevilSortRecord* firstDevil = devilGetRecord(first->id);
    DevilSortRecord* secondDevil = devilGetRecord(second->id);
    if (firstDevil->race == 0x23 || secondDevil->race == 0x23) {
        denominator /= 2;
    }
    if ((first->flags & 2) != 0) {
        if ((second->flags & 2) != 0) {
            denominator /= 3;
        } else {
            denominator /= 2;
        }
    } else if ((second->flags & 2) != 0) {
        denominator /= 2;
    }
    return randNextInRange((u16)(denominator - 1)) == 1;
}
}

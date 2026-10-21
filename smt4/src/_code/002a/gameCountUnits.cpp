/* NON_MATCHING: compiler converts the indexed unit loop into a pointer/countdown loop. */
#include "common.h"

namespace { struct Unit { s16 id; u8 padding[0x2fe]; }; struct Slots { u8 padding[0x90f0]; Unit units[24]; }; }

extern "C" {
Slots *gameGetSlotTable(void);
u32 gameCountUnits(void)
{
    Slots *slots = gameGetSlotTable();
    u32 count = 0;
    for (u32 i = 0; i < 24; i++) { if (slots->units[i].id != 0) { count++; } }
    return count;
}
}

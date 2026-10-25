#include "common.h"

namespace { /* units[i] is the entry index of the i-th party member, -1 when the position is empty. */
struct Slots { u8 padding[0x90f0]; s8 units[24]; }; }

extern "C" {
Slots *gameGetSlotTable(void);
u32 gameCountUnits(void)
{
    Slots *slots = gameGetSlotTable();
    u32 count = 0;
    for (s32 i = 0; i < 24; i++) {
        if (slots->units[i] < 0) {
            break;
        }
        count++;
    }
    return count;
}
}

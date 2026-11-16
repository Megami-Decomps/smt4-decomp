#include "common.h"

namespace { struct Slot { f32 scale; u32 active; u32 value; u32 extra; u8 state; u8 tail[3]; }; }

extern "C" {
extern Slot DAT_006357d8[];
/* Restarts slot `index` with `extra`: inactive, state 3, full scale. */
void titleRestartSlotState3(u32 index, u32 extra)
{
    Slot *slot = &DAT_006357d8[index];
    slot->active = 0;
    slot->extra = extra;
    slot->state = 3;
    slot->scale = 1.0f;
}
}

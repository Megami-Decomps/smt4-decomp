#include "common.h"

namespace { struct Slot { f32 scale; u32 active; u32 value; u32 extra; u8 state; u8 padding[3]; }; }

extern "C" {
/* Reads or updates the requested object state. */
extern Slot DAT_004d9758[];
void slotSetRequest(u32 index, u32 value, u32 extra)
{
    Slot *slot = &DAT_004d9758[index];
    slot->value = value;
    slot->active = 0;
    slot->state = 1;
    slot->extra = extra;
}
}

#include "common.h"
#include "sys/RuntimeObjects.h"

namespace { struct Slot { f32 scale; u32 active; u32 value; u32 extra; u8 state; u8 padding[3]; }; }

extern "C" {
/* Reads or updates the requested object state. */
extern Slot g_screenFadeSlots[];
void slotSetRequest(u32 index, u32 value, u32 extra)
{
    Slot *slot = &g_screenFadeSlots[index];
    slot->value = value;
    slot->active = 0;
    slot->state = 1;
    slot->extra = extra;
}
}

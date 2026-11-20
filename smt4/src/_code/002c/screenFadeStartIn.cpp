#include "common.h"
#include "code/Code002c_Smt4.h"

namespace { struct Slot { u32 first; u32 active; u32 value; u32 extra; u8 state; u8 tail[3]; }; }

extern "C" {
/* Reads or updates the requested state. */
extern Slot g_screenFadeSlots[];
void screenFadeStartIn(u32 index, u32 value, u32 extra)
{
    Slot *slot = &g_screenFadeSlots[index];
    slot->value = value;
    slot->active = 0;
    slot->state = 2;
    slot->extra = extra;
}
}

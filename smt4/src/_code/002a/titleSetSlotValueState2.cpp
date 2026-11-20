#include "common.h"

namespace { struct Slot { f32 scale; u32 active; u32 value; u32 extra; u8 state; u8 padding[3]; }; }

extern "C" {
/* Sets the slot's value and state 2, clearing its active word. */
extern Slot g_screenFadeSlots[];
void titleSetSlotValueState2(u32 index, u32 value)
{
    Slot *slot = &g_screenFadeSlots[index];
slot->active = 0;
    slot->value = value;
    slot->state = 2;
}
}

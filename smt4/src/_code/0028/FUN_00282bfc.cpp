#include "common.h"

namespace { struct Slot { f32 scale; u32 active; u32 value; u32 extra; u8 state; u8 tail[3]; }; }

extern "C" {
extern Slot DAT_004d9758[];
/* Restarts slot `index` with `extra`: inactive, state 3, full scale. */
void FUN_00282bfc(u32 index, u32 extra)
{
    Slot *slot = &DAT_004d9758[index];
    slot->active = 0;
    slot->extra = extra;
    slot->state = 3;
    slot->scale = 1.0f;
}
}

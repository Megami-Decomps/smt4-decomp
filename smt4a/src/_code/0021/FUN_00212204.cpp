#include "common.h"

namespace { struct Slot { f32 scale; u32 active; u32 value; u32 extra; u8 state; u8 padding[3]; }; }

extern "C" {
/* Reads or updates the requested object state. */
extern Slot DAT_006357d8[];
void FUN_00212204(u32 index)
{
    Slot *slot = &DAT_006357d8[index];
    slot->active = 0;
    slot->value = 0;
    slot->state = 0;
    slot->scale = 0.0f;
}
}

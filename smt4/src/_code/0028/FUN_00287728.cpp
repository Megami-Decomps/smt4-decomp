#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

namespace { struct Slot { f32 scale; u32 active; u32 value; u32 extra; u8 state; u8 padding[3]; }; }

extern "C" {
/* Reads or updates the requested object state. */
extern Slot DAT_004d9758[];
void FUN_00287728(u32 index)
{
    Slot *slot = &DAT_004d9758[index];
    slot->active = 0;
    slot->value = 0;
    slot->state = 0;
    slot->scale = 0.0f;
}
}

#include "common.h"

namespace { struct Slot { u32 first; u32 active; u32 value; u32 extra; u8 state; u8 tail[3]; }; }

extern "C" {
/* Reads or updates the requested state. */
extern Slot DAT_004d9758[];
void FUN_002c29d8(u32 index, u32 value, u32 extra)
{
    Slot *slot = &DAT_004d9758[index];
    slot->value = value;
    slot->active = 0;
    slot->state = 2;
    slot->extra = extra;
}
}

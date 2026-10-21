/* NON_MATCHING: compiler exchanges r2/r3 for the slot base and state constants. */
#include "common.h"

namespace { struct Slot { f32 scale; u32 active; u32 value; u32 extra; u8 state; u8 tail[3]; }; }

extern "C" {
/* Reads or updates the requested object state. */
extern Slot DAT_004d9758[];
void FUN_00282bfc(u32 index, u32 extra)
{
    Slot *slot = &DAT_004d9758[index];
    slot->extra = extra;
    slot->active = 0;
    slot->state = 3;
    slot->scale = 1.0f;
}
}

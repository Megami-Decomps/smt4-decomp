#include "common.h"
#include "code/Code0013_Smt4a.h"

namespace { struct Slot { u32 first; u32 active; u32 value; u32 extra; u8 state; u8 tail[3]; }; }

extern "C" {
/* Reads or updates the requested state. */
extern Slot DAT_006357d8[];
void FUN_0013cab8(u32 index, u32 value, u32 extra)
{
    Slot *slot = &DAT_006357d8[index];
    slot->value = value;
    slot->active = 0;
    slot->state = 2;
    slot->extra = extra;
}
}

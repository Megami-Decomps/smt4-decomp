/* NON_MATCHING: slot base calculation and value-store scheduling differ from retail. */
#include "common.h"

namespace { struct Slot { u32 first; u32 active; u32 value; u32 unknown; u8 state; u8 tail[3]; }; }

extern "C" {
/* Reads or updates the requested state. */
extern Slot DAT_004d9758[];
void FUN_002a03d8(u32 index, u32 value)
{
    DAT_004d9758[index].value = value;
    DAT_004d9758[index].active = 0;
    DAT_004d9758[index].state = 2;
}
}

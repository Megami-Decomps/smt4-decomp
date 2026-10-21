/* NON_MATCHING: compiler schedules the prologue, loads and argument setup differently from retail. */
#include "common.h"

namespace { struct Input { u8 padding[8]; u32 enabled; }; }

extern "C" {
extern Input *DAT_004650a0;
extern u32 DAT_004e3c58[32];
u32 padIsButtonPressed(u32 button)
{
    if (button < 32 && (DAT_004650a0->enabled & 1) != 0 && DAT_004e3c58[button] == 1) { return 1; }
    return 0;
}
}

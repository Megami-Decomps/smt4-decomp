#include "common.h"

namespace { struct Input { u8 padding[8]; u32 enabled; }; }

extern "C" {
extern Input g_padInputState;
extern u32 g_padHeldFrames[31];
u32 padIsButtonPressed(u32 button)
{
    if (button >= 31) {
        return 0;
    }
    u32 held = 0;
    if ((g_padInputState.enabled & 1) == 0) {
        held = g_padHeldFrames[button];
    }
    if (held != 1) {
        return 0;
    }
    return held;
}
}

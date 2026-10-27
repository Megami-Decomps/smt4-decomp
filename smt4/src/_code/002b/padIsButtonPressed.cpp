#include "common.h"

namespace { struct Input { u8 padding[8]; u32 enabled; }; }

extern "C" {
extern Input DAT_004650a0;
extern u32 DAT_004e3c58[31];
u32 padIsButtonPressed(u32 button)
{
    if (button >= 31) {
        return 0;
    }
    u32 held = 0;
    if ((DAT_004650a0.enabled & 1) == 0) {
        held = DAT_004e3c58[button];
    }
    if (held != 1) {
        return 0;
    }
    return held;
}
}

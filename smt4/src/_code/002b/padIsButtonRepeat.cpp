#include "common.h"

struct PadRepeatConfig {
    u8 unk00[8];
    u32 flags;        // 0x08
    u32 delay;        // 0x0c
    u32 interval;     // 0x10
};

extern "C" {
extern PadRepeatConfig g_padInputState;
extern u32 g_padHeldFrames[31];

// Report the initial press and each configured repeat after the hold delay.
u32 padIsButtonRepeat(u32 button)
{
    if (button >= 31)
        return 0;

    u32 heldFrames;
    if (!(g_padInputState.flags & 1)) {
        heldFrames = g_padHeldFrames[button];
        if (heldFrames == 1)
            return 1;
    } else {
        heldFrames = 0;
    }
    if (heldFrames <= g_padInputState.delay)
        return 0;
    if ((heldFrames - g_padInputState.delay) % g_padInputState.interval == 0)
        return 1;
    return 0;
}
}

#include "common.h"

struct PadInputState {
    u32 unk00;  // 0x00
    u32 unk04;  // 0x04
    u32 flags;  // 0x08: bits 0 and 1 lock out the buttons
};

extern "C" {
extern PadInputState g_padInputState;
extern s32 g_padHeldFrames[31]; /* frames each button has been held */

/* Returns whether the pad input is locked by either lock flag. */
static __inline bool padIsLocked(void)
{
    if (g_padInputState.flags & 1)
        return true;
    if (g_padInputState.flags & 2)
        return true;
    return false;
}

/* Returns 1 when `button` was pressed this frame (held for exactly one frame) and input is not locked. */
u32 padButtonIsPressed(u32 button)
{
    if (button >= 31) {
        return 0;
    }
    u32 frames;
    if (padIsLocked()) {
        frames = 0;
    } else {
        frames = g_padHeldFrames[button];
    }
    if (frames == 1) {
        return 1;
    }
    return 0;
}
}

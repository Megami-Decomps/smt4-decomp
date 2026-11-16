#include "common.h"

struct PadInputState {
    u32 unk00;  // 0x00
    u32 unk04;  // 0x04
    u32 flags;  // 0x08: bits 0 and 1 lock out the buttons
};

extern "C" {
extern PadInputState DAT_005b4000;
extern s32 DAT_00640000[31]; /* frames each button has been held */

/* Returns whether the pad input is locked by either lock flag. */
static __inline bool padIsLocked(void)
{
    if (DAT_005b4000.flags & 1)
        return true;
    if (DAT_005b4000.flags & 2)
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
        frames = DAT_00640000[button];
    }
    if (frames == 1) {
        return 1;
    }
    return 0;
}
}

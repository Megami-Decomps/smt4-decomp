#include "common.h"

struct PadRepeatConfig {
    u8 unk00[8];
    u32 flags;        // 0x08
    u32 delay;        // 0x0c
    u32 interval;     // 0x10
};

extern "C" {
extern PadRepeatConfig DAT_004650a0;
extern u32 DAT_004e3c58[31];

// Report the initial press and each configured repeat after the hold delay.
u32 padIsButtonRepeat(u32 button)
{
    if (button >= 31)
        return 0;

    u32 heldFrames;
    if (!(DAT_004650a0.flags & 1)) {
        heldFrames = DAT_004e3c58[button];
        if (heldFrames == 1)
            return 1;
    } else {
        heldFrames = 0;
    }
    if (heldFrames <= DAT_004650a0.delay)
        return 0;
    if ((heldFrames - DAT_004650a0.delay) % DAT_004650a0.interval == 0)
        return 1;
    return 0;
}
}

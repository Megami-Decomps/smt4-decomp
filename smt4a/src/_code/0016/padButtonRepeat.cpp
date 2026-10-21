/* NON_MATCHING: compiler combines the two blocking-bit checks into TST3 instead of retail TST1/TSTEQ2; all remaining instructions/layout match. -O2 is unchanged. */
#include "common.h"

struct PadRepeatSettings {
    u32 unk00;
    u32 unk04;
    u32 flags; // 0x08
    u32 delay; // 0x0c
    u32 interval; // 0x10
};

extern "C" {
extern PadRepeatSettings DAT_005b4000;
extern u32 DAT_00640000[31];

u32 padButtonRepeat(u32 button)
{
    if (button >= 31) {
        return 0;
    }
    u32 frames;
    if ((DAT_005b4000.flags & 1) == 0 && (DAT_005b4000.flags & 2) == 0) {
        frames = DAT_00640000[button];
        if (frames == 1) {
            return 1;
        }
    }
    else {
        frames = 0;
    }
    if (frames > DAT_005b4000.delay &&
        (frames - DAT_005b4000.delay) % DAT_005b4000.interval == 0) {
        return 1;
    }
    return 0;
}
}

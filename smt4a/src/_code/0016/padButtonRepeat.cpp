#include "common.h"
#include "quest_center/qcMain.h"

struct PadRepeatSettings {
    u32 unk00;
    u32 unk04;
    u32 flags; // 0x08
    u32 delay; // 0x0c
    u32 interval; // 0x10
};

extern "C" {
extern PadRepeatSettings g_padInputState;
extern u32 g_padHeldFrames[31];

u32 padButtonRepeat(u32 button)
{
    if (button >= 31) {
        return 0;
    }
    u32 frames;
    bool blocked = (g_padInputState.flags & 1) != 0;
    if (!blocked && (g_padInputState.flags & 2) == 0) {
        frames = g_padHeldFrames[button];
        if (frames == 1) {
            return 1;
        }
    }
    else {
        frames = 0;
    }
    if (frames > g_padInputState.delay &&
        (frames - g_padInputState.delay) % g_padInputState.interval == 0) {
        return 1;
    }
    return 0;
}
}

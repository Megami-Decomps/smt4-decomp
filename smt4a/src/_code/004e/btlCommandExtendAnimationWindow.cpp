#include "shard/W6_W6Match3_BattleTiming.h"

struct AnimationWindow {
    /* 0x0 */ u16 startFrame;
    /* 0x2 */ u16 endFrame;
    /* 0x4 */ u8 unk04[0xc];
};

// Prefix view: the number of animation windows is supplied by the command data.
struct CommandTimingView {
    /* 0x000 */ u8 unk000[0x9e0];
    /* 0x9e0 */ AnimationWindow windows[1];
};

extern "C" void btlCommandExtendAnimationWindow(BtlActorRef*, BtlCommand* command,
    s32 animation, s32 baseFrame, s32 startOffset, s32 endOffset)
{
    CommandTimingView* timing = (CommandTimingView*)command;
    u32 current = timing->windows[animation].startFrame;
    if (!((s32)current <= baseFrame)) {
        baseFrame = current;
    }
    if (startOffset >= 0) {
        s32 start = baseFrame + startOffset;
        if (start > (s32)current) {
            timing->windows[animation].startFrame = (u16)start;
        }
    }
    if (endOffset >= 0) {
        s32 end = baseFrame + endOffset;
        if (timing->windows[animation].endFrame < end) {
            timing->windows[animation].endFrame = (u16)end;
        }
        if (timing->windows[animation].endFrame < timing->windows[animation].startFrame) {
            timing->windows[animation].endFrame = timing->windows[animation].startFrame;
        }
    }
}

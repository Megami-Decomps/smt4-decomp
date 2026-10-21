/* NON_MATCHING: selected primary/secondary track pointers occupy opposite r0/r1 registers; floating operations and control flow agree. */
#include "common.h"

struct AnimationFrameTrack {
    u8 unk00[0x38];
    f32 frame; // 0x38
};
struct AnimationFrameState {
    u8 unk00[8];
    u32 active; // 0x08
    AnimationFrameTrack *primary[3]; // 0x0c
    AnimationFrameTrack *secondary[3]; // 0x18
    u8 unk24[8];
    s32 mode; // 0x2c
};

// Return the furthest current frame of the selected animation-channel pair.
extern "C" f32 FUN_00226bc0(const AnimationFrameState *animation)
{
    s32 channel = 0;
    f32 frame = 0.0f;
    if (animation->mode == 4)
        channel = 1;
    else if (animation->mode == 5)
        channel = 2;
    if (animation->active != 0) {
        AnimationFrameTrack *first = animation->primary[channel];
        AnimationFrameTrack *second = animation->secondary[channel];
        if (first != NULL)
            frame = first->frame;
        if (second != NULL && second->frame > frame)
            frame = second->frame;
    }
    return frame;
}

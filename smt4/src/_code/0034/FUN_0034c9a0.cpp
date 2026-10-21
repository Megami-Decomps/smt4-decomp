/* NON_MATCHING: compiler keeps the completion flag in R2 and adds a final return move; retail keeps it in R0 and preserves the owner in R1. */
#include "common.h"

struct AnimationTrackState {
    u8 unk00[0x38];
    f32 frame;
    u8 unk3C[0x0c];
    f32 end;
};

struct AnimationPairState {
    u8 unk00[0x0c];
    AnimationTrackState* primary;
    u8 unk10[8];
    AnimationTrackState* secondary;
    u8 unk1C[0x10];
    u32 mode;
};

extern "C" bool FUN_0034c9a0(AnimationPairState* animation)
{
    if (animation->mode != 3) {
        return false;
    }
    bool complete = true;
    AnimationTrackState* track = animation->primary;
    if (track != NULL && track->frame < track->end) {
        complete = false;
    }
    track = animation->secondary;
    if (track != NULL && track->frame < track->end) {
        return false;
    }
    return complete;
}

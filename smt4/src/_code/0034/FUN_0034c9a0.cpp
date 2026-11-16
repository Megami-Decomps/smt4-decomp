/* NON_MATCHING: gaugePairIsWithinLimits shape; retail loads the mode into r1 and the first track into r2 (moving the pair to r1), this build keeps the pair in r2 like gaugePairIsWithinLimits. */
#include "common.h"

extern "C" {

typedef struct AnimationTrackState {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ f32 frame;
    /* 0x3C */ u8 unk3C[0xC];
    /* 0x48 */ f32 end;
} AnimationTrackState;

/* Whether the track exists and has not yet reached its end frame. */
static __inline bool trackIsPlaying(const AnimationTrackState *track)
{
    return track != NULL && track->frame < track->end;
}

typedef struct AnimationPairState {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ AnimationTrackState *primary;
    /* 0x10 */ u8 unk10[8];
    /* 0x18 */ AnimationTrackState *secondary;
    /* 0x1C */ u8 unk1C[0x10];
    /* 0x2C */ u32 mode;
} AnimationPairState;

/* In mode 3, whether both tracks have finished playing; 0 in any other mode. */
u32 FUN_0034c9a0(AnimationPairState *animation)
{
    u32 result;

    if (animation->mode == 3) {
        result = 1;
        if (trackIsPlaying(animation->primary)) {
            result = 0;
        }
        if (trackIsPlaying(animation->secondary)) {
            result = 0;
        }
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */

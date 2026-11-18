/* NON_MATCHING: only the entry differs: retail loads the mode into r1 and moves the pair to r1 after the mode test;
 * this build moves the pair to r1 first and loads the mode into r0. The rest (track tests in r2/r1) matches. */
#include "common.h"

extern "C" {

typedef struct AnimationTrackState {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ f32 frame;
    /* 0x3C */ u8 unk3C[0xC];
    /* 0x48 */ f32 end;
} AnimationTrackState;

typedef struct AnimationPairState {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ AnimationTrackState *primary;
    /* 0x10 */ u8 unk10[8];
    /* 0x18 */ AnimationTrackState *secondary;
    /* 0x1C */ u8 unk1C[0x10];
    /* 0x2C */ u32 mode;
} AnimationPairState;

/* In mode 3, whether neither track is still playing (a missing track counts as finished); 0 in any other mode. */
u32 FUN_0034c9a0(AnimationPairState *animation)
{
    u32 result;

    if (animation->mode == 3) {
        result = 1;
        if (animation->primary != NULL && animation->primary->frame < animation->primary->end) {
            result = 0;
        }
        if (animation->secondary != NULL && animation->secondary->frame < animation->secondary->end) {
            result = 0;
        }
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */

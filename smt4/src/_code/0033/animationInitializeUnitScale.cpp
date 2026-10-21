#include "common.h"

struct AnimationState {
    /* 0x00 */ s32 enabled;
    /* 0x04 */ s32 frame;
    /* 0x08 */ f32 progress;
    /* 0x0c */ f32 scaleX;
    /* 0x10 */ f32 scaleY;
};

/* Initializes an enabled animation with unit scale. */
extern "C" void animationInitializeUnitScale(AnimationState *animation)
{
    animation->enabled = 1;
    animation->frame = 0;
    animation->progress = 0.0f;
    animation->scaleX = 1.0f;
    animation->scaleY = 1.0f;
}

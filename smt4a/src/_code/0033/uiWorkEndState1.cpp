/* NON_MATCHING: register allocation only: retail uses r3 for the pooled offset and r2 for the constant 6, the build the reverse */
#include "common.h"

extern "C" {

typedef struct Sprite00336da0 {
    /* 0x00 */ u8 data[0x348];
} Sprite00336da0;

typedef struct Work00336da0 {
    /* 0x0000 */ u8 unk0000[0x20f0];
    /* 0x20f0 */ Sprite00336da0 sprite;
    /* 0x2438 */ u32 timer;
    /* 0x243c */ s32 state;
} Work00336da0;

void uiSpriteSetKeyframe(Sprite00336da0 *sprite, s32 keyframe, s32 flag);

/* State 1 ends: moves to state 6, clears the timer and starts the sprite's keyframe 0. */
void uiWorkEndState1(Work00336da0 *work)
{
    if (work->state == 1) {
        work->state = 6;
        work->timer = 0;
        uiSpriteSetKeyframe(&work->sprite, 0, 1);
    }
}

} /* extern "C" */

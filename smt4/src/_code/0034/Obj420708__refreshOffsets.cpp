/* NON_MATCHING: the final clamp: retail tests the float bit pattern as an integer (vmov r1,s0; cmp r1,#0x3f800000) and branches around the hold step instead of predicating it. */
#include "common.h"

struct RampParameter {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 frame;
    /* 0x08 */ f32 value;
    /* 0x0c */ s32 riseEnd;
    /* 0x10 */ s32 holdEnd;
    /* 0x14 */ s32 fallEnd;
    /* 0x18 */ f32 riseStep;
    /* 0x1c */ f32 fallStep;
};

extern "C" {

/* Virtual slot: advances the frame and ramps the value up, holds it, then ramps it down, clamped to 0..1. */
void _ZN9Obj42070814refreshOffsetsEv(RampParameter *self)
{
    s32 frame = self->frame + 1;
    f32 value = self->value;
    self->frame = frame;
    if (frame < self->riseEnd) {
        value = value + self->riseStep;
        self->value = value;
    } else if (frame >= self->holdEnd) {
        if (self->fallEnd > frame) {
            value = value - self->fallStep;
            self->value = value;
        }
    }
    if (value > 1.0f) {
        self->value = 1.0f;
    } else {
        if (value < 0.0f) {
            value = 0.0f;
        }
        self->value = value;
    }
}

} /* extern "C" */

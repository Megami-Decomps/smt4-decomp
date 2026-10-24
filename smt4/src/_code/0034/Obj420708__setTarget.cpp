/* NON_MATCHING: store scheduling only: armcc merges the stores at 0x10/0x14 into stm and the two float steps into vstm; retail keeps them separate. */
#include "common.h"

struct RampParameter {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ s32 riseEnd;
    /* 0x10 */ s32 holdEnd;
    /* 0x14 */ s32 fallEnd;
    /* 0x18 */ f32 riseStep;
    /* 0x1c */ f32 fallStep;
};

extern "C" {

/* Virtual slot: sets the rise, hold and fall lengths (in frames) and the per-frame steps of the rise and fall. */
void _ZN9Obj4207089setTargetEjjj(RampParameter *self, s32 rise, s32 hold, s32 fall)
{
    s32 holdEnd = rise + hold;
    self->riseEnd = rise;
    self->fallEnd = holdEnd + fall;
    self->holdEnd = holdEnd;
    self->riseStep = 1.0f / static_cast<f32>(rise);
    self->fallStep = 1.0f / static_cast<f32>(fall);
}

} /* extern "C" */

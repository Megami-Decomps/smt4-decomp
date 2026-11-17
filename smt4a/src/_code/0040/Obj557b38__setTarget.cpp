#include "common.h"
#include "effect/RampParameter.h"

extern "C" {

/* Virtual slot: sets the rise, hold and fall lengths (in frames) and the per-frame steps of the rise and fall. */
void _ZN9Obj557b389setTargetEjjj(RampParameter *self, s32 rise, s32 hold, s32 fall)
{
    self->riseEnd = rise;
    self->holdEnd = hold + rise;
    self->fallEnd = self->holdEnd + fall;
    self->riseStep = 1.0f / static_cast<f32>(rise);
    self->fallStep = 1.0f / static_cast<f32>(fall);
}

} /* extern "C" */

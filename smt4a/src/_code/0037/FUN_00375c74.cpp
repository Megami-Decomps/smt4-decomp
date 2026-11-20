/* NON_MATCHING: duration and frame loads and the saved-register moves differ in the prologue. */
#include "gfx/ParticleEmission.h"
#include "shard/W5_W5Match2_ShiftRandom.h"
#include <math.h>

extern "C" {
f32 shiftRandomNextFraction(ShiftRandomState *state);

/* Compute burst or continuous emission count, retaining the fractional count between frames. */
void FUN_00375c74(ParticleEmissionState *state, const ParticleEmissionDefinition *definition,
                  u8 *burst, s32 *count, f32 timeStep)
{
    if (definition->duration != 0 && state->frame >= definition->duration) {
        *burst = 0;
        *count = 0;
        return;
    } else if (state->frame == 0 && definition->burstOnFirstFrame != 0) {
        *burst = 1;
        if (definition->randomness > 0.0f) {
            *count = (s32)(shiftRandomNextFraction(NULL) * (1.1f - definition->randomness) * (f32)state->initialCount);
        } else {
            *count = state->initialCount;
        }
        return;
    } else {
        *burst = 0;
        if (definition->randomness > 0.0f) {
            state->remainder += shiftRandomNextFraction(NULL) * (1.1f - definition->randomness) *
                                (f32)definition->rate * timeStep;
        } else {
            state->remainder += (f32)definition->rate * timeStep;
        }
        s32 emitted = (s32)fabsf(state->remainder);
        *count = emitted;
        state->remainder -= (f32)emitted;
        return;
    }
}
} /* extern "C" */

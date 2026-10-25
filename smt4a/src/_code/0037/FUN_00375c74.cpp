/* NON_MATCHING: initial count stores are predicated/merged; random-factor operand order and saved registers differ. */
#include "gfx/ParticleEmission.h"
#include "shard/W5_W5Match2_ShiftRandom.h"
#include <math.h>

extern "C" {
f32 shiftRandomNextFraction(ShiftRandomState *state);

// Compute burst or continuous emission count, retaining the fractional count between frames.
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
            f32 random = shiftRandomNextFraction(NULL);
            *count = static_cast<s32>(random * (1.1f - definition->randomness) * static_cast<f32>(state->initialCount));
        } else {
            *count = state->initialCount;
        }
        return;
    } else {
        *burst = 0;
        if (definition->randomness > 0.0f) {
            f32 random = shiftRandomNextFraction(NULL);
            state->remainder += random * (1.1f - definition->randomness) *
                          static_cast<f32>(definition->rate) * timeStep;
        } else {
            state->remainder += static_cast<f32>(definition->rate) * timeStep;
        }
        s32 emitted = static_cast<s32>(fabsf(state->remainder));
        *count = emitted;
        state->remainder -= static_cast<f32>(emitted);
        return;
    }
}
}

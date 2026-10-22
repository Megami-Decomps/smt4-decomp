/* NON_MATCHING: VFP multiply-subtract contraction, conditional execution and particle-loop scheduling differ. */
#include "AsdSDK/Source/Gfx/Effect/effParticle.h"

extern "C" f32 FUN_00514540(u32 stream);
extern "C" s32 randomAdvanceShiftRegister(u32 stream);

/* Choose randomized ramp endpoints and stagger the particles across eight initial phases. */
extern "C" void FUN_003931fc(EffParticleBatch *batch)
{
    EffParticleBatchState *state = batch->state;
    EffParticleBatchParameters *parameters = batch->parameters;
    EffParticleSeed *particle = state->particles;
    s32 duration = parameters->duration;
    f32 random = FUN_00514540(0);
    f32 start = ((1.0f - parameters->startVariance) + random * parameters->startVariance) * parameters->start;
    if (duration > 0) {
        random = FUN_00514540(0);
        state->value = start;
        state->step = (((1.0f - parameters->endVariance) + random * parameters->endVariance) *
                       parameters->end - start) / (f32)duration;
    } else {
        state->value = start;
        state->step = 0.0f;
    }
    u32 count = parameters->count;
    for (u32 index = 0; index < count; ++index, ++particle) {
        particle->phase = ~(randomAdvanceShiftRegister(0) % 8);
    }
}

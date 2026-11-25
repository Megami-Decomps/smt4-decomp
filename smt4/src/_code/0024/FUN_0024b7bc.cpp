/* NON_MATCHING: retail and armcc encode the two inputs to the trail-size multiply in opposite registers. */
#include "gfx/SpiralEmitter.h"

/* Releases the trail slots associated with one parent particle. */
extern "C" void FUN_0024b7bc(ParticleEmissionState *emitter, SpiralParticle *parent)
{
    const ParticleEmissionDefinition *definition = (const ParticleEmissionDefinition *)emitter->definition;
    const ParticleTrailShape *trail = &definition->trail;
    u32 count = trail->rows * trail->columns;
    if (count == 0) {
        return;
    }

    SpiralParticle *particles = (SpiralParticle *)emitter->particles;
    SpiralParticle *block = &particles[emitter->initialCount + ((u32)parent - (u32)particles) / sizeof(SpiralParticle) * count];
    for (s32 i = 0; i < (s32)count; ++i) {
        block[i].frame = -1;
    }
}

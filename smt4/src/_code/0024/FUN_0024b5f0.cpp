#include "gfx/SpiralEmitter.h"

/* NON_MATCHING: the two input registers of mul are reversed; the trail address and particle copy match. */
/* Seeds the trail history for a particle, marking the first sample as unused. */
extern "C" void FUN_0024b5f0(ParticleEmissionState *emitter, SpiralParticle *source)
{
    const ParticleEmissionDefinition *definition = (const ParticleEmissionDefinition *)emitter->definition;
    const u32 trailLength = definition->trail.rows * definition->trail.columns;
    if (trailLength == 0) {
        return;
    }

    SpiralParticle *particles = (SpiralParticle *)emitter->particles;
    u32 index = ((u32)source - (u32)particles) / sizeof(*particles);
    SpiralParticle *sample = &particles[emitter->initialCount + index * trailLength];
    *sample = *source;
    sample->frame = -1;
}

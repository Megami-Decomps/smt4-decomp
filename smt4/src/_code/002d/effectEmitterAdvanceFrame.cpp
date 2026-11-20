#include "shard/S1Effect.h"

extern "C" {

s32 effGetFrameCounter(void);
EffectEmitterB *effJobComputeQuadVertices(EffectEmitterB *emitter);

/* Advance the emitter by the frames elapsed, then run its update. */
EffectEmitterB *effectEmitterAdvanceFrame(EffectEmitterB *emitter)
{
    emitter->frame += effGetFrameCounter();
    return effJobComputeQuadVertices(emitter);
}

} /* extern "C" */

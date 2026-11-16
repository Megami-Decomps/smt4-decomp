#include "shard/S1Effect.h"

extern "C" {

s32 effGetFrameCounter(void);
EffectEmitter *effEmitterUpdate(EffectEmitter *emitter);

/* Advance the emitter by the frames elapsed, then run its update. */
EffectEmitter *effEmitterAdvanceFrame(EffectEmitter *emitter)
{
    emitter->frame += effGetFrameCounter();
    return effEmitterUpdate(emitter);
}

} /* extern "C" */

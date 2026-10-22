#include "shard/S1Effect.h"

extern "C" {

s32 effGetFrameCounter(void);
EffectEmitter *FUN_001f7380(EffectEmitter *emitter);

/* Advance the emitter by the frames elapsed, then run its update. */
EffectEmitter *effEmitterAdvanceFrame(EffectEmitter *emitter)
{
    emitter->frame += effGetFrameCounter();
    return FUN_001f7380(emitter);
}

} /* extern "C" */

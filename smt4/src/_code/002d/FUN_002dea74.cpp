#include "shard/S1Effect.h"

extern "C" {

s32 effGetFrameCounter(void);
EffectEmitterB *FUN_002dea98(EffectEmitterB *emitter);

/* Advance the emitter by the frames elapsed, then run its update. */
EffectEmitterB *FUN_002dea74(EffectEmitterB *emitter)
{
    emitter->frame += effGetFrameCounter();
    return FUN_002dea98(emitter);
}

} /* extern "C" */

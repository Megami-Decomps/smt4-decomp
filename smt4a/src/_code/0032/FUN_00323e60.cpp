#include "AsdSDK/Source/Gfx/Effect/effMisc.h"
#include "AsdSDK/Source/Gfx/Effect/effParticle.h"
#include "shard/W6_W6Match2_EmitterResources.h"

extern "C" {
EffEmitter *effEmitterCreateSmall(EffEmitterDesc *descriptor);
EffEmitter *effEmitterAllocate(u32 count);
void polygonTrackRebuildResources(ResourceEmitter *emitter, u32 id, const EmitterArguments *arguments);
void objectBufferFree(void *buffer);
void *effBehaviorCreate(u16 kind, u32 count, EffEmitterDesc *descriptor);
void *effGeomCloneHandle(void *auxiliary);
void effParticleParamCopy(EffParticleParam *destination, const EffParticleParam *source);

/* A pointer at the end of byte-aligned EmitterArguments cannot be added to its shared type. */
struct ParticleArguments {
    u8 placement[0x20];
    EffParticleParam *parameter;
};

static __inline EffParticleParam *requestParameter(EmitterResourceRequest *request)
{
    return ((ParticleArguments *)&request->arguments)->parameter;
}

/* Replaces the emitter's particle buffer with one sized for its particle count. */
static __inline void particleCreateBuffer(EffEmitter *emitter, u32 kind, EffEmitterDesc *descriptor)
{
    if (emitter->particle.buffer != NULL) {
        objectBufferFree(emitter->particle.buffer);
    }
    emitter->particle.buffer = effBehaviorCreate(kind, emitter->maxCount, descriptor);
}

/* Creates a particle emitter, its backing buffer and an independent copy of auxiliary data. */
EffEmitter *FUN_00323e60(EmitterResourceRequest *request)
{
    EffEmitterDesc *descriptor = (EffEmitterDesc *)request->source->data;
    EffEmitter *emitter = effEmitterCreateSmall(descriptor);
    polygonTrackRebuildResources((ResourceEmitter *)emitter, request->source->id, &request->arguments);
    particleCreateBuffer(emitter, request->source->id, descriptor);
    if (emitter->particle.parameter == NULL) {
        emitter->particle.parameter = (EffParticleParam *)effEmitterAllocate(emitter->maxCount);
        emitter->particle.parameter->source = (EffParticleSource *)emitter->particle.buffer;
    }
    if (requestParameter(request)->auxiliary != NULL) {
        emitter->particle.parameter->auxiliary = effGeomCloneHandle(requestParameter(request)->auxiliary);
    }
    effParticleParamCopy(emitter->particle.parameter, requestParameter(request));
    emitter->particle.parameter->type = requestParameter(request)->type;
    return emitter;
}
}

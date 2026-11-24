#include "AsdSDK/Source/Gfx/Effect/effMisc.h"
#include "AsdSDK/Source/Gfx/Effect/effParticle.h"
#include "shard/W6_W6Match2_EmitterResources.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"
#include "AsdSDK/Source/Gfx/Effect/effParticleParamCopy.h"

extern "C" {
EffEmitter *effEmitterCreate(u32 count);
void polygonTrackRebuildResources(ResourceEmitter *emitter, u32 id, const EmitterArguments *arguments);
void objectBufferFree(void *buffer);
void *effGeomCloneHandle(void *auxiliary);

/* Replaces the emitter's particle buffer with one sized for its particle count. */
static __inline void particleCreateBuffer(EffEmitter *emitter, u32 kind, EffEmitterDesc *descriptor)
{
    if (emitter->particle.buffer != NULL) {
        objectBufferFree(emitter->particle.buffer);
    }
    emitter->particle.buffer = effBehaviorCreate(kind, emitter->maxCount, descriptor);
}

/* Creates a particle emitter for a resource request: its particle buffer, its parameter block (a
 * copy of the request's, with an independent copy of the auxiliary geometry). */
EffEmitter *effParticleEmitterCreate(EmitterResourceRequest *request)
{
    EffEmitterDesc *descriptor = (EffEmitterDesc *)request->source->data;
    EffEmitter *emitter = effEmitterCreateSmall(descriptor);
    polygonTrackRebuildResources((ResourceEmitter *)emitter, request->source->id, &request->arguments);
    particleCreateBuffer(emitter, request->source->id, descriptor);
    if (emitter->particle.parameter == NULL) {
        emitter->particle.parameter = (EffParticleParam *)effEmitterCreate(emitter->maxCount);
        emitter->particle.parameter->source = (EffectBehaviorBlock *)emitter->particle.buffer;
    }
    if (request->particle.parameter->auxiliary != NULL) {
        emitter->particle.parameter->auxiliary = effGeomCloneHandle(request->particle.parameter->auxiliary);
    }
    effParticleParamCopy(emitter->particle.parameter, request->particle.parameter);
    emitter->particle.parameter->type = request->particle.parameter->type;
    return emitter;
}

} /* extern "C" */

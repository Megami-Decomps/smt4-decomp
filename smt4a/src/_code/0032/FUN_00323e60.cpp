/* NON_MATCHING: retail splits the descriptor pointer (r6 then copied to r7) while kind takes r6, and loads the parameter pointer before the buffer store; parameter-pointer caching and the kind uxth now match. */
/* Creates a particle emitter, its backing buffer and an independent copy of auxiliary data. */
#include "AsdSDK/Source/Gfx/Effect/effMisc.h"
#include "AsdSDK/Source/Gfx/Effect/effParticle.h"
#include "shard/W6_W6Match2_EmitterResources.h"

extern "C" {
EffEmitter *effEmitterCreateSmall(EffEmitterDesc *descriptor);
EffEmitter *effEmitterAllocate(u32 count);
void polygonTrackRebuildResources(ResourceEmitter *emitter, u32 id, const EmitterArguments *arguments);
void objectBufferFree(void *buffer);
void *FUN_002b2d74(u16 kind, u32 count, EffEmitterDesc *descriptor);
void *FUN_00271d28(void *auxiliary);
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

EffEmitter *FUN_00323e60(EmitterResourceRequest *request)
{
    EffEmitterDesc *descriptor = (EffEmitterDesc *)request->source->data;
    EffEmitter *emitter = effEmitterCreateSmall(descriptor);
    polygonTrackRebuildResources((ResourceEmitter *)emitter, request->source->id, &request->arguments);
    u32 kind = request->source->id;
    if (emitter->particle.buffer != NULL) {
        objectBufferFree(emitter->particle.buffer);
    }
    emitter->particle.buffer = FUN_002b2d74(kind, emitter->maxCount, descriptor);
    if (emitter->particle.parameter == NULL) {
        emitter->particle.parameter = (EffParticleParam *)effEmitterAllocate(emitter->maxCount);
        emitter->particle.parameter->source = (EffParticleSource *)emitter->particle.buffer;
    }
    if (requestParameter(request)->auxiliary != NULL) {
        emitter->particle.parameter->auxiliary = FUN_00271d28(requestParameter(request)->auxiliary);
    }
    effParticleParamCopy(emitter->particle.parameter, requestParameter(request));
    emitter->particle.parameter->type = requestParameter(request)->type;
    return emitter;
}
}

#include "AsdSDK/Source/Gfx/Effect/effMisc.h"
#include "AsdSDK/Source/Gfx/Effect/effParticle.h"
#include "shard/W6_W6Match2_EmitterResources.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"
#include "AsdSDK/Source/Gfx/Effect/effParticleParamCopy.h"

extern "C" {
EffEmitter *effEmitterCreate(u32 count);
void polygonTrackRebuildResources(ResourceEmitter *emitter, u32 id, const EmitterArguments *arguments);
void objectBufferFree(void *buffer);
void *FUN_002691d8(u16 kind, u32 count, EffEmitterDesc *descriptor);
void *FUN_00268fc4(void *auxiliary);

/* Replaces the emitter's particle buffer with one sized for its particle count. */
static __inline void particleCreateBuffer(EffEmitter *emitter, u32 kind, EffEmitterDesc *descriptor)
{
    if (emitter->particle.buffer != NULL) {
        objectBufferFree(emitter->particle.buffer);
    }
    emitter->particle.buffer = FUN_002691d8(kind, emitter->maxCount, descriptor);
}

/* Creates a particle emitter, its backing buffer and an independent copy of auxiliary data. */
EffEmitter *FUN_002c7c28(EmitterResourceRequest *request)
{
    /* A pointer at the end of byte-aligned EmitterArguments cannot be added to its shared type. */
    struct ParticleRequest {
        u8 unk00[0x2C];
        EffParticleParam *parameter;
    };
    ParticleRequest *arguments = (ParticleRequest *)request;
    EffEmitterDesc *descriptor = (EffEmitterDesc *)request->source->data;
    EffEmitter *emitter = effEmitterCreateSmall(descriptor);
    polygonTrackRebuildResources((ResourceEmitter *)emitter, request->source->id, &request->arguments);
    particleCreateBuffer(emitter, request->source->id, descriptor);
    if (emitter->particle.parameter == NULL) {
        emitter->particle.parameter = (EffParticleParam *)effEmitterCreate(emitter->maxCount);
        emitter->particle.parameter->source = (EffParticleSource *)emitter->particle.buffer;
    }
    if (arguments->parameter->auxiliary != NULL) {
        emitter->particle.parameter->auxiliary = FUN_00268fc4(arguments->parameter->auxiliary);
    }
    effParticleParamCopy(emitter->particle.parameter, arguments->parameter);
    emitter->particle.parameter->type = arguments->parameter->type;
    return emitter;
}
}

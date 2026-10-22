/* NON_MATCHING: emitter count loads and parameter-pointer caching are scheduled differently. */
/* Creates a particle emitter, its backing buffer and an independent copy of auxiliary data. */
#include "AsdSDK/Source/Gfx/Effect/effMisc.h"
#include "AsdSDK/Source/Gfx/Effect/effParticle.h"
#include "shard/W6_W6Match2_EmitterResources.h"

extern "C" {
EffEmitter *effEmitterCreateSmall(EffEmitterDesc *descriptor);
EffEmitter *effEmitterCreate(u32 count);
void FUN_0024f8a4(ResourceEmitter *emitter, u32 id, const EmitterArguments *arguments);
void objectBufferFree(void *buffer);
void *FUN_002691d8(u16 kind, u32 count, EffEmitterDesc *descriptor);
void *FUN_00268fc4(void *auxiliary);
void effParticleParamCopy(EffParticleParam *destination, const EffParticleParam *source);

EffEmitter *FUN_002c7c28(EmitterResourceRequest *request)
{
    /* A pointer at the end of byte-aligned EmitterArguments cannot be added to its shared type. */
    struct ParticleArguments {
        u8 placement[0x20];
        EffParticleParam *parameter;
    };
    ParticleArguments *arguments = (ParticleArguments *)&request->arguments;
    EffEmitterDesc *descriptor = (EffEmitterDesc *)request->source->data;
    EffEmitter *emitter = effEmitterCreateSmall(descriptor);
    FUN_0024f8a4((ResourceEmitter *)emitter, request->source->id, &request->arguments);
    u16 kind = request->source->id;
    if (emitter->particle.buffer != NULL) {
        objectBufferFree(emitter->particle.buffer);
    }
    emitter->particle.buffer = FUN_002691d8(kind, emitter->maxCount, descriptor);
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

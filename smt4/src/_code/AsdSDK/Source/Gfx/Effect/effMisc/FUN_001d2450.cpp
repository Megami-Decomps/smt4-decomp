/* NON_MATCHING: Particle allocation argument scheduling, saved registers, and resource-ID zero extension differ. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
extern const char DAT_00410380[];
void *memAlloc(u32 pool, u32 category, u32 options, u32 size,
               u32 alignment, u32 count);
void rt_memclr(void *destination, u32 size);
void objectBufferFree(void *buffer);
void *FUN_002691d8(u16 kind, u32 count,
                    ParticleDefinitionPrefixIV *definition);
void *FUN_00268fc4(void *source);
void effParticleParamCopy(ParticleInstanceIV *destination,
                          ParticleSourcePrefixIV *source);

ParticleInstanceIV *FUN_001d2450(ParticleSourcePrefixIV *source)
{
    ParticleDefinitionPrefixIV *definition = source->resource->definition;
    u32 count = definition->primaryCount;
    if (count == 0)
        count = definition->fallbackCount;
    count *= source->resource->definition->countMultiplier;
    if (count > 300)
        count = 300;

    asdDebugTrace(DAT_00410380, 450);
    ParticleInstanceIV *instance = static_cast<ParticleInstanceIV *>(
        memAlloc(0x10000, 0x100, 0, sizeof(ParticleInstanceIV), 0x10, 1));
    rt_memclr(instance, sizeof(ParticleInstanceIV));
    instance->index = -1;
    instance->count = count;
    instance->scale = 1.0f;

    u16 kind = source->resource->kind;
    if (instance->objectBuffer != 0)
        objectBufferFree(instance->objectBuffer);
    instance->objectBuffer = FUN_002691d8(kind, instance->count, definition);
    instance->flags |= 1;

    if (instance->count != 0) {
        if (source->auxiliary != 0)
            instance->auxiliary = FUN_00268fc4(source->auxiliary);
        effParticleParamCopy(instance, source);
    }
    return instance;
}
}

/* NON_MATCHING: the shared size constant (r8) and the resource-kind uxth now match (plain static allocate-and-clear helper, u32 kind); retail reloads source->resource->definition for the count multiplier instead of reusing the definition pointer and allocates source/definition/count in r5/r6/r7. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "AsdSDK/Source/Gfx/Effect/effParticle.h"
#include "AsdSDK/Source/Gfx/Effect/effParticleParamCopy.h"

extern "C" {
extern const char DAT_00410380[];
void *memAlloc(u32 pool, u32 category, u32 options, u32 size,
               u32 alignment, u32 count);
void rt_memclr(void *destination, u32 size);
void objectBufferFree(void *buffer);
void *FUN_002691d8(u16 kind, u32 count,
                    ParticleDefinitionPrefixIV *definition);
void *FUN_00268fc4(void *source);

static ParticleInstanceIV *allocateParticleInstance(u32 size)
{
    asdDebugTrace(DAT_00410380, 450);
    ParticleInstanceIV *instance = static_cast<ParticleInstanceIV *>(memAlloc(0x10000, 0x100, 0, size, 0x10, 1));
    rt_memclr(instance, size);
    return instance;
}

ParticleInstanceIV *FUN_001d2450(ParticleSourcePrefixIV *source)
{
    ParticleDefinitionPrefixIV *definition = source->resource->definition;
    u32 count = definition->primaryCount;
    if (count == 0)
        count = definition->fallbackCount;
    count *= source->resource->definition->countMultiplier;
    if (count > 300)
        count = 300;

    ParticleInstanceIV *instance = allocateParticleInstance(sizeof(ParticleInstanceIV));
    instance->index = -1;
    instance->count = count;
    instance->scale = 1.0f;

    u32 kind = source->resource->kind;
    if (instance->objectBuffer != 0)
        objectBufferFree(instance->objectBuffer);
    instance->objectBuffer = FUN_002691d8(kind, instance->count, definition);
    instance->flags |= 1;

    if (instance->count != 0) {
        if (source->auxiliary != 0)
            instance->auxiliary = FUN_00268fc4(source->auxiliary);
        effParticleParamCopy(reinterpret_cast<EffParticleParam *>(instance), reinterpret_cast<EffParticleParam *>(source));
    }
    return instance;
}
}

/* NON_MATCHING: Particle allocation argument scheduling, saved registers, and resource-ID zero extension differ. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Gfx/Effect/EffectBehaviorBlock.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
extern const char g_effMiscHeaderNestedSourceFileName[];
void *memAlloc(u32 pool, u32 category, u32 options, u32 size,
               u32 alignment, u32 count);
void rt_memclr(void *destination, u32 size);
void objectBufferFree(void *buffer);
void *effGeomCloneHandle(void *source);
void effParticleParamCopy(ParticleInstanceA *destination,
                          ParticleSourcePrefixA *source);

ParticleInstanceA *FUN_002720d4(ParticleSourcePrefixA *source)
{
    ParticleCapacityPrefixA *definition = source->resource->capacity;
    u32 count = definition->primaryCount;
    if (count == 0)
        count = definition->fallbackCount;
    count *= source->resource->capacity->countMultiplier;
    count = count > 300 ? 300 : count;

    asdDebugTrace(g_effMiscHeaderNestedSourceFileName, 450);
    ParticleInstanceA *instance = static_cast<ParticleInstanceA *>(
        memAlloc(0x10000, 0x100, 0, sizeof(ParticleInstanceA), 0x10, 1));
    rt_memclr(instance, sizeof(ParticleInstanceA));
    instance->index = -1;
    instance->count = count;
    instance->scale = 1.0f;

    u16 kind = source->resource->resourceId;
    if (instance->objectBuffer != 0)
        objectBufferFree(instance->objectBuffer);
    instance->objectBuffer = effBehaviorCreate(kind, instance->count, definition);
    instance->flags |= 1;

    if (instance->count != 0) {
        if (source->auxiliary != 0)
            instance->auxiliary = effGeomCloneHandle(source->auxiliary);
        effParticleParamCopy(instance, source);
    }
    return instance;
}
}

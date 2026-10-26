#include "AsdSDK/Source/Gfx/Effect/effParticle.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "util/MemoryHelpers.h"

extern "C" {
extern const char DAT_00544af8[];
EffParticleSource *FUN_002b2d74(u32 id, u32 owner, u32 flags);
void *memAlloc(u32 pool, u32 category, u32 flags, u32 size, u32 alignment, u32 tracked);
void FUN_00390368(EffObjectParticle *object, EffObjectParticleState *state);

/* Replace the particle source and allocate one initialized state per source entry. */
void FUN_003aa57c(EffObjectParticle *object, u32 sourceId, u32 flags)
{
    if (object->source) {
        objectBufferFree(object->source);
    }
    object->source = FUN_002b2d74((u16)sourceId, object->owner, flags);
    if (object->allocation) {
        asdMemFree(object->allocation);
    }
    u32 count = object->source->count;
    u32 bytes = count * sizeof(EffObjectParticleState);
    asdDebugTrace(DAT_00544af8, 547);
    object->allocation = memAlloc(0x10000, 0x100, 0, bytes, 16, 1);
    EffObjectParticleState *state = static_cast<EffObjectParticleState *>(object->allocation);
    u32 index = 0;
    object->states = state;
    for (; index < count; ++index, ++state) {
        FUN_00390368(object, state);
    }
}
}

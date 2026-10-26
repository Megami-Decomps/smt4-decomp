#include "AsdSDK/Source/Gfx/Effect/effParticle.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "util/ObjectBufferFree.h"

extern "C" {
extern const char DAT_00410334[];
EffParticleSource *FUN_002691d8(u32 id, u32 owner, u32 flags);
void *memAlloc(u32 pool, u32 category, u32 flags, u32 size, u32 alignment, u32 tracked);
void FUN_003024d0(EffObjectParticle *object, EffObjectParticleState *state);

/* Replace the particle source and allocate one initialized state per source entry. */
void FUN_00313760(EffObjectParticle *object, u32 sourceId, u32 flags)
{
    if (object->source) {
        objectBufferFree(object->source);
    }
    object->source = FUN_002691d8((u16)sourceId, object->owner, flags);
    if (object->allocation) {
        asdMemFree(object->allocation);
    }
    u32 count = object->source->count;
    u32 bytes = count * sizeof(EffObjectParticleState);
    asdDebugTrace(DAT_00410334, 547);
    object->allocation = memAlloc(0x10000, 0x100, 0, bytes, 16, 1);
    EffObjectParticleState *state = static_cast<EffObjectParticleState *>(object->allocation);
    u32 index = 0;
    object->states = state;
    for (; index < count; ++index, ++state) {
        FUN_003024d0(object, state);
    }
}
}

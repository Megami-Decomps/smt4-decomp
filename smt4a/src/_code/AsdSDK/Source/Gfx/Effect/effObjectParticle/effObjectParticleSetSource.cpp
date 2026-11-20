#include "AsdSDK/Source/Gfx/Effect/effParticle.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "util/MemoryHelpers.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
extern const char g_effObjectParticleSourceFileName[]; /* "...\Effect\effObjectParticle.cpp": __FILE__ */
EffParticleSource *effBehaviorCreate(u32 id, u32 owner, u32 flags);
void effObjectParticleInitMotion(EffObjectParticle *object, EffObjectParticleState *state);


/* Replaces the particle source and allocates one initialized state per source entry. */
void effObjectParticleSetSource(EffObjectParticle *object, u32 sourceId, u32 flags)
{
    if (object->source != NULL) {
        objectBufferFree(object->source);
    }
    object->source = effBehaviorCreate((u16)sourceId, object->owner, flags);
    if (object->allocation != NULL) {
        asdMemFree(object->allocation);
    }
    u32 count = object->source->count;
    u32 bytes = count * sizeof(EffObjectParticleState);
    asdDebugTrace(g_effObjectParticleSourceFileName, 547);
    object->allocation = memAlloc(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, bytes, 16, 1);
    EffObjectParticleState *state = (EffObjectParticleState *)object->allocation;
    u32 index = 0;
    object->states = state;
    for (; index < count; ++index, ++state) {
        effObjectParticleInitMotion(object, state);
    }
}
} /* extern "C" */

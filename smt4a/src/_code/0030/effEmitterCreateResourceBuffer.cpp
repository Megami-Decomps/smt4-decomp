#include "shard/W6_W6Match2_EmitterResources.h"
#include "AsdSDK/Source/Gfx/Effect/EffectBehaviorBlock.h"

extern "C" {
ResourceEmitter* effEmitterCreateSmall(void* data);
void polygonTrackRebuildResources(ResourceEmitter* emitter, u32 id, const EmitterArguments* arguments);
void objectBufferFree(void* buffer);

// Create the emitter and replace its resource buffer using the current source ID.
ResourceEmitter* effEmitterCreateResourceBuffer(EmitterResourceRequest* request)
{
    void* data = request->source->data;
    ResourceEmitter* emitter = effEmitterCreateSmall(data);
    polygonTrackRebuildResources(emitter, request->source->id, &request->arguments);
    u32 id = request->source->id;
    if (emitter->buffer != NULL) {
        objectBufferFree(emitter->buffer);
    }
    emitter->buffer = effBehaviorCreate(id, emitter->key, data);
    return emitter;
}
}

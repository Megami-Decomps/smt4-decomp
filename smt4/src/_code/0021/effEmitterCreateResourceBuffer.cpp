#include "shard/W6_W6Match2_EmitterResources.h"
#include "AsdSDK/Source/Gfx/Effect/effMisc.h"

extern "C" {
void polygonTrackRebuildResources(ResourceEmitter* emitter, u32 id, const EmitterArguments* arguments);
void objectBufferFree(void* buffer);
void* effBehaviorCreate(u16 id, u32 key, void* data);

// Create the emitter and replace its resource buffer using the current source ID.
ResourceEmitter* effEmitterCreateResourceBuffer(EmitterResourceRequest* request)
{
    void* data = request->source->data;
    ResourceEmitter* emitter = reinterpret_cast<ResourceEmitter*>(effEmitterCreateSmall(reinterpret_cast<EffEmitterDesc *>(data)));
    polygonTrackRebuildResources(emitter, request->source->id, &request->arguments);
    u32 id = request->source->id;
    if (emitter->buffer != NULL) {
        objectBufferFree(emitter->buffer);
    }
    emitter->buffer = effBehaviorCreate(id, emitter->key, data);
    return emitter;
}
}

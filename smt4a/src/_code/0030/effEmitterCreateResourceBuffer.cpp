#include "shard/W6_W6Match2_EmitterResources.h"

extern "C" {
ResourceEmitter* effEmitterCreateSmall(void* data);
void polygonTrackRebuildResources(ResourceEmitter* emitter, u32 id, const EmitterArguments* arguments);
void objectBufferFree(void* buffer);
void* FUN_002b2d74(u16 id, u32 key, void* data);

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
    emitter->buffer = FUN_002b2d74(id, emitter->key, data);
    return emitter;
}
}

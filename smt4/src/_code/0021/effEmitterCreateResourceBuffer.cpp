#include "shard/W6_W6Match2_EmitterResources.h"

extern "C" {
ResourceEmitter* effEmitterCreateSmall(void* data);
void FUN_0024f8a4(ResourceEmitter* emitter, u32 id, const EmitterArguments* arguments);
void objectBufferFree(void* buffer);
void* FUN_002691d8(u16 id, u32 key, void* data);

// Create the emitter and replace its resource buffer using the current source ID.
ResourceEmitter* effEmitterCreateResourceBuffer(EmitterResourceRequest* request)
{
    void* data = request->source->data;
    ResourceEmitter* emitter = effEmitterCreateSmall(data);
    FUN_0024f8a4(emitter, request->source->id, &request->arguments);
    u32 id = request->source->id;
    if (emitter->buffer != NULL) {
        objectBufferFree(emitter->buffer);
    }
    emitter->buffer = FUN_002691d8(id, emitter->key, data);
    return emitter;
}
}

#include "shard/W6_W6Match3_EmitterRecord.h"

extern "C" {

void *resourceResolveHeaderPointer(const RelativeDataB *record);
ResourceEmitter *FUN_003a1ef4(void *data);
void polygonTrackRebuildResources(ResourceEmitter *emitter, u32 kind, const EmitterArguments *arguments);
void objectBufferFree(void *buffer);
void *FUN_002b2d74(u16 kind, u32 count, void *data);

static inline void replaceEmitterBuffer(ResourceEmitter *emitter, u32 kind, void *data)
{
    if (emitter->buffer != NULL) {
        objectBufferFree(emitter->buffer);
    }
    emitter->buffer = FUN_002b2d74((u16)kind, emitter->key, data);
}


ResourceEmitter *effPolygonTrackCreateFromResource(const EmitterResourceRecord *record)
{
    u8 *data = (u8 *)resourceResolveHeaderPointer(&record->pointer);
    ResourceEmitter *emitter = FUN_003a1ef4(data + 0x1c);
    polygonTrackRebuildResources(emitter, record->description.kind, (const EmitterArguments *)data);
    replaceEmitterBuffer(emitter, record->description.kind, data + 0x1c);
    return emitter;
}

} /* extern "C" */

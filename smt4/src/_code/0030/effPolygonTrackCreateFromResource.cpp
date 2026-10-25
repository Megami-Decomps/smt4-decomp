#include "shard/W6_W6Match3_EmitterRecord.h"
#include "AsdSDK/Source/Gfx/Effect/effMisc.h"

extern "C" {

void *resourceResolveHeaderPointer(const RelativeDataB *record);
void FUN_0024f8a4(ResourceEmitter *emitter, u32 kind, const EmitterArguments *arguments);
void objectBufferFree(void *buffer);
void *FUN_002691d8(u16 kind, u32 count, void *data);

static inline void replaceEmitterBuffer(ResourceEmitter *emitter, u32 kind, void *data)
{
    if (emitter->buffer != NULL) {
        objectBufferFree(emitter->buffer);
    }
    emitter->buffer = FUN_002691d8((u16)kind, emitter->key, data);
}


ResourceEmitter *effPolygonTrackCreateFromResource(const EmitterResourceRecord *record)
{
    u8 *data = (u8 *)resourceResolveHeaderPointer(&record->pointer);
    ResourceEmitter *emitter = reinterpret_cast<ResourceEmitter *>(effEmitterCreateSmall(reinterpret_cast<EffEmitterDesc *>(data + 0x1c)));
    FUN_0024f8a4(emitter, record->description.kind, (const EmitterArguments *)data);
    replaceEmitterBuffer(emitter, record->description.kind, data + 0x1c);
    return emitter;
}

} /* extern "C" */

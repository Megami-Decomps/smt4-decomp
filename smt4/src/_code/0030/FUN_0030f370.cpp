/* NON_MATCHING: only the resource and emitter callee-saved registers trade r4/r5 (retail: resource r5, emitter r4). */
#include "shard/W6_W6Match2_EmitterResources.h"
#include "AsdSDK/Source/Gfx/Effect/effMisc.h"
#include "util/MemoryHelpers.h"

struct EmitterHeader {
    u8 unk00[0x1c]; // 0x00
    u8 body[1];     // 0x1c
};

struct EmitterResource {
    u8 unk00[0x0c];  // 0x00
    u16 kind;        // 0x0c
    u8 unk0e[0x0e]; // 0x0e
    u16 type;        // 0x1c
};

extern "C" {
s32 resourceResolveDataPointer(EmitterResource *resource);
EmitterHeader *resourceResolveHeaderPointer(EmitterResource *resource);
void FUN_0024f8a4(ResourceEmitter *emitter, u32 id, const EmitterArguments *arguments);
void *FUN_002691d8(u16 id, u32 key, void *data);
void effEmitterReplaceResourceByKind(ResourceEmitter *owner, u32 kind, const u32 *resource);

/* Creates the emitter for a resource, replaces its buffer and applies the resource's data by type. */
ResourceEmitter *FUN_0030f370(EmitterResource *resource)
{
    u8 *header = reinterpret_cast<u8 *>(resourceResolveHeaderPointer(resource));
    ResourceEmitter *emitter = reinterpret_cast<ResourceEmitter *>(effEmitterCreateSmall(reinterpret_cast<EffEmitterDesc *>(header + 0x1c)));
    FUN_0024f8a4(emitter, resource->kind, (const EmitterArguments *)header);
    u32 kind = resource->kind;
    void *buffer = emitter->buffer;
    header += 0x1c;
    if (buffer != NULL) {
        objectBufferFree(buffer);
    }
    emitter->buffer = FUN_002691d8(kind, emitter->key, header);
    const u32 *data = (const u32 *)resourceResolveDataPointer(resource);
    if (data != NULL) {
        effEmitterReplaceResourceByKind(emitter, resource->type, data);
    }
    return emitter;
}

} /* extern "C" */

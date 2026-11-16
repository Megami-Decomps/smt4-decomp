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
void polygonTrackRebuildResources(ResourceEmitter *emitter, u32 id, const EmitterArguments *arguments);
void *effBehaviorCreate(u16 id, u32 key, void *data);
void effEmitterReplaceResourceByKind(ResourceEmitter *owner, u32 kind, const u32 *resource);

static inline void replaceEmitterBuffer(ResourceEmitter *emitter, u32 kind, void *data)
{
    if (emitter->buffer != NULL) {
        objectBufferFree(emitter->buffer);
    }
    emitter->buffer = effBehaviorCreate((u16)kind, emitter->key, data);
}

/* Creates the emitter for a resource and replaces its buffer (as effPolygonTrackCreateFromResource does). */
static inline ResourceEmitter *createEmitter(EmitterResource *resource)
{
    u8 *header = reinterpret_cast<u8 *>(resourceResolveHeaderPointer(resource));
    ResourceEmitter *emitter = reinterpret_cast<ResourceEmitter *>(effEmitterCreateSmall(reinterpret_cast<EffEmitterDesc *>(header + 0x1c)));
    polygonTrackRebuildResources(emitter, resource->kind, (const EmitterArguments *)header);
    replaceEmitterBuffer(emitter, resource->kind, header + 0x1c);
    return emitter;
}

/* Creates the emitter for a resource, replaces its buffer and applies the resource's data by type. */
ResourceEmitter *FUN_0030f370(EmitterResource *resource)
{
    ResourceEmitter *emitter = createEmitter(resource);
    const u32 *data = (const u32 *)resourceResolveDataPointer(resource);
    if (data != NULL) {
        effEmitterReplaceResourceByKind(emitter, resource->type, data);
    }
    return emitter;
}

} /* extern "C" */

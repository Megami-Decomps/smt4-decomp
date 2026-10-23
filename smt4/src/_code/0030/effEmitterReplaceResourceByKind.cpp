#include "shard/W6_W6Match2_EmitterResources.h"
#include "AsdSDK/Source/Gfx/Effect/effMisc.h"

extern "C" {
EffEmitter *effEmitterCreate(u32 maxCount);
void FUN_002493a4(EffEmitter *emitter, u32 key, u32 kind);
void textureAttachmentSetImage(EffEmitter *emitter, const u32 *resource);
void objResourceReplace(EffEmitter *emitter, const u32 *resource);
void FUN_0031d0bc(EffEmitter *emitter, u32 resource);
void effParticleRebuildHandles(EffEmitter *emitter, const u32 *resource);
void effParticleParamRebuildHandles3c(EffEmitter *emitter, const u32 *resource);
void effTlpReplace(EffEmitter *emitter, const u32 *resource);
void FUN_0030ee9c(EffEmitter *emitter, const u32 *resource);

void effEmitterReplaceResourceByKind(ResourceEmitter *owner, u32 kind, const u32 *resource)
{
    if (!owner->resource.emitter) {
        owner->resource.emitter = effEmitterCreate(owner->key);
        owner->resource.emitter->resourceUser.data = owner->buffer;
    }
    switch (kind) {
    case 1:
        FUN_002493a4(owner->resource.emitter, owner->key, kind);
        textureAttachmentSetImage(owner->resource.emitter, resource);
        break;
    case 2:
        FUN_002493a4(owner->resource.emitter, owner->key, kind);
        objResourceReplace(owner->resource.emitter, resource);
        break;
    case 4:
        FUN_002493a4(owner->resource.emitter, owner->key, kind);
        FUN_0031d0bc(owner->resource.emitter, *resource);
        break;
    case 5:
        effParticleRebuildHandles(owner->resource.emitter, resource);
        break;
    case 6:
        effParticleParamRebuildHandles3c(owner->resource.emitter, resource);
        break;
    case 7:
        FUN_002493a4(owner->resource.emitter, owner->key, kind);
        effTlpReplace(owner->resource.emitter, resource);
        break;
    case 9:
        FUN_002493a4(owner->resource.emitter, owner->key, kind);
        FUN_0030ee9c(owner->resource.emitter, resource);
        break;
    }
    owner->resource.emitter->resource.kind = kind;
}
}

#include "AsdSDK/Source/Gfx/Effect/EffMiscInit.h"

extern "C" {

EffMiscObject *effMiscCreate(u32 kind, void *params);
void *resourceResolveHeaderPointer(EffMiscDesc *desc);
u32 *resourceResolveDataPointer(EffMiscDesc *desc);
void *sysGetTableWord(u32 id);
void *textureCreateFromImage(u32 *resource);
void *asdEffectTextureCreate(u32 *resource);

/* Allocates a zeroed shared-resource record of the given type holding one reference
 * (effMisc.h line 450: the header's inline allocator). */
static __inline EffMiscShared *newShared(u32 type, u32 size)
{
    EffMiscShared *shared = (EffMiscShared *)effMiscAllocateZeroed(size);
    shared->type = type;
    shared->refCount = 1;
    return shared;
}

/* Creates the resource a shared record of `type` holds and attaches the record to `obj`. */
static __inline void effMiscAttachShared(EffMiscObject *obj, u32 type, u32 *resource)
{
    EffMiscShared *shared = newShared(type, sizeof(EffMiscShared));
    switch (type) {
    case EFF_MISC_SHARED_TEXTURE_FILE:
        shared->resource = textureCreateFromImage(resource);
        break;
    case EFF_MISC_SHARED_EFFECT_TEXTURE:
        shared->resource = asdEffectTextureCreate(resource);
        break;
    case EFF_MISC_SHARED_TEXTURE_ID:
        shared->resource = sysGetTableWord(*resource & 0xffff);
        break;
    }
    obj->shared = shared;
}

/* Creates an effect object from an effect description: the kind and parameters come from the
 * description and, for kinds that take one, its resource is attached as a shared resource. */
EffMiscObject *effMiscCreateFromDesc(EffMiscDesc *desc)
{
    void *params = resourceResolveHeaderPointer(desc);
    u32 kind = desc->kind;
    EffMiscObject *obj = effMiscCreate(kind, params);
    u32 *resource = resourceResolveDataPointer(desc);

    if (resource != NULL && g_effMiscKinds[obj->kind].sharesData != 0) {
        effMiscAttachShared(obj, desc->resourceType, resource);
    }
    return obj;
}

} /* extern "C" */

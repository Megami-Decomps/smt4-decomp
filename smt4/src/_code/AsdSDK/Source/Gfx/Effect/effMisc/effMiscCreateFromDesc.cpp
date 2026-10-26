#include "AsdSDK/Source/Gfx/Effect/effMisc.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char DAT_00410204[]; /* __FILE__ */

EffMiscObject *effMiscCreate(u32 kind, void *params);
void *resourceResolveHeaderPointer(EffMiscDesc *desc);
u32 *resourceResolveDataPointer(EffMiscDesc *desc);
void *FUN_0024c3c8(u32 id);
void *textureCreateFromImage(u32 *resource);
void *asdEffectTextureCreate(u32 *resource);
void *memAlloc(int, int, int, int size, int align, int);
void rt_memclr(void *block, s32 size);

extern EffMiscKind g_effMiscKinds[];

static __inline EffMiscShared *newShared(u32 type, u32 size)
{
    asdDebugTrace(DAT_00410204, 450);
    EffMiscShared *shared = (EffMiscShared *)memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
    rt_memclr(shared, size);
    shared->type = type;
    shared->refCount = 1;
    return shared;
}

static __inline void effMiscAttachShared(EffMiscObject *obj, u32 type, u32 *resource)
{
    EffMiscShared *shared = newShared(type, sizeof(EffMiscShared));
    switch (type) {
    case 1:
        shared->resource = textureCreateFromImage(resource);
        break;
    case 9:
        shared->resource = asdEffectTextureCreate(resource);
        break;
    case 4:
        shared->resource = FUN_0024c3c8(*resource & 0xffff);
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

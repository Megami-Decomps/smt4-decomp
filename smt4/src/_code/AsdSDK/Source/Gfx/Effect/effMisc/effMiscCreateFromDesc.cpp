/* NON_MATCHING: register allocation only: retail keeps the shared block size (12) and the constant 1 in r8/r9 across the allocation and saves one more register */
#include "AsdSDK/Source/Gfx/Effect/effMisc.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char DAT_00410204[]; /* __FILE__ */

EffMiscObject *effMiscCreate(u32 kind, void *params);
void *FUN_0024c3f8(EffMiscDesc *desc);
u32 *FUN_0024c3d8(EffMiscDesc *desc);
void *FUN_0024c3c8(u32 id);
void *FUN_0028c814(u32 *resource);
void *asdEffectTextureCreate(u32 *resource);
void *memAlloc(int, int, int, int size, int align, int);
void rt_memclr(void *block, s32 size);

extern EffMiscKind g_effMiscKinds[];

/* Creates an effect object from an effect description: the kind and parameters come from the
 * description and, for kinds that take one, its resource is attached as a shared resource. */
EffMiscObject *effMiscCreateFromDesc(EffMiscDesc *desc)
{
    void *params = FUN_0024c3f8(desc);
    u32 kind = desc->kind;
    EffMiscObject *obj = effMiscCreate(kind, params);
    u32 *resource = FUN_0024c3d8(desc);
    EffMiscShared *shared;
    u32 type;

    if (resource == NULL) {
        return obj;
    }
    if (g_effMiscKinds[obj->kind].sharesData == 0) {
        return obj;
    }
    type = desc->resourceType;
    asdDebugTrace(DAT_00410204, 450);
    shared = (EffMiscShared *)memAlloc(0x10000, 0x100, 0, 0xc, 0x10, 1);
    rt_memclr(shared, 0xc);
    shared->type = type;
    shared->refCount = 1;
    switch (type) {
    case 1:
        shared->resource = FUN_0028c814(resource);
        break;
    case 4:
        shared->resource = FUN_0024c3c8(*resource & 0xffff);
        break;
    case 9:
        shared->resource = asdEffectTextureCreate(resource);
        break;
    }
    obj->shared = shared;
    return obj;
}

} /* extern "C" */

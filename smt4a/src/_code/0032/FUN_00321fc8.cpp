/* NON_MATCHING: register allocation only: retail keeps the shared block size (12) and the constant 1 in r8/r9 across the allocation and saves one more register */
#include "AsdSDK/Source/Gfx/Effect/effMisc.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char DAT_005449ec[]; /* __FILE__ */

EffMiscObject *FUN_00271be0(u32 kind, void *params);
void *FUN_002b41c4(EffMiscDesc *desc);
u32 *FUN_002721e4(EffMiscDesc *desc);
void *FUN_0037a834(u32 id);
void *FUN_0037a7f4(u32 *resource);
void *asdEffectTextureCreate(u32 *resource);
void *memAlloc(int, int, int, int size, int align, int);
void rt_memclr(void *block, s32 size);

extern EffMiscKind DAT_005c1078[];

/* Creates an effect object from an effect description: the kind and parameters come from the
 * description and, for kinds that take one, its resource is attached as a shared resource. */
EffMiscObject *FUN_00321fc8(EffMiscDesc *desc)
{
    void *params = FUN_002b41c4(desc);
    u32 kind = desc->kind;
    EffMiscObject *obj = FUN_00271be0(kind, params);
    u32 *resource = FUN_002721e4(desc);
    EffMiscShared *shared;
    u32 type;

    if (resource == NULL) {
        return obj;
    }
    if (DAT_005c1078[obj->kind].sharesData == 0) {
        return obj;
    }
    type = desc->resourceType;
    asdDebugTrace(DAT_005449ec, 450);
    shared = (EffMiscShared *)memAlloc(0x10000, 0x100, 0, 0xc, 0x10, 1);
    rt_memclr(shared, 0xc);
    shared->type = type;
    shared->refCount = 1;
    switch (type) {
    case 1:
        shared->resource = FUN_0037a7f4(resource);
        break;
    case 4:
        shared->resource = FUN_0037a834(*resource & 0xffff);
        break;
    case 9:
        shared->resource = asdEffectTextureCreate(resource);
        break;
    }
    obj->shared = shared;
    return obj;
}

} /* extern "C" */

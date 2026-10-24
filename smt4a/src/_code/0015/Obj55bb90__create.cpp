/* NON_MATCHING: register allocation only: retail shares one zero register (r9) for the null result, the moved resource and the zeroed fields; built uses separate ones */
#include <new>
#include "classes/Obj55bb90.h"

extern "C" {
Obj55bb90Res *FUN_00172718(AsdAllocatorObject *allocator, u32 unk);
void nw_gfx_Fog_DestroyResFog(AsdAllocatorObject *allocator, Obj55bb90Res *res);
}

Obj55bb90::Obj55bb90(void *owner, Obj55b680ResHandle<Obj55bb90Res> handle)
    : Obj55b680(handle.allocator, handle.res, owner), handle(handle)
{
    unk150 = 0;
    unk154 = 0;
    color[0] = 0.0f;
    color[1] = 0.0f;
    color[2] = 0.0f;
    unk164 = 0;
    unk168 = 0;
}

/* Builds a fog from a default resource; the resource is destroyed here only if the fog could not
 * take ownership of it. */
Obj55bb90 *Obj55bb90::create(void *owner, AsdAllocatorObject *allocator)
{
    Obj55b680ResHandle<Obj55bb90Res> res = {FUN_00172718(allocator, 0), allocator};
    void *memory = allocator->allocate(sizeof(Obj55bb90), 4);
    Obj55bb90 *fog = NULL;
    if (memory != NULL) {
        fog = new (memory) Obj55bb90(owner, res.take());
    }
    fog->initialize(allocator);
    if (res.res != NULL) {
        nw_gfx_Fog_DestroyResFog(allocator, res.res);
    }
    return fog;
}

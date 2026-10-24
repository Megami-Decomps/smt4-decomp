/* NON_MATCHING: register allocation only: retail shares one zero register (r9) for the null result, the moved resource and the zeroed fields; built uses separate ones */
#include <new>
#include "classes/Obj421774.h"

extern "C" {
Obj421774Res *FUN_0012d714(AsdAllocatorObject *allocator, u32 unk);
void nw_gfx_Fog_DestroyResFog(AsdAllocatorObject *allocator, Obj421774Res *res);
}

Obj421774::Obj421774(void *owner, Obj421230ResHandle<Obj421774Res> handle)
    : Obj421230(handle.allocator, handle.res, owner), handle(handle)
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
Obj421774 *Obj421774::create(void *owner, AsdAllocatorObject *allocator)
{
    Obj421230ResHandle<Obj421774Res> res = {FUN_0012d714(allocator, 0), allocator};
    void *memory = allocator->allocate(sizeof(Obj421774), 4);
    Obj421774 *fog = NULL;
    if (memory != NULL) {
        fog = new (memory) Obj421774(owner, res.take());
    }
    fog->initialize(allocator);
    if (res.res != NULL) {
        nw_gfx_Fog_DestroyResFog(allocator, res.res);
    }
    return fog;
}

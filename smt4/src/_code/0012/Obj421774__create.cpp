#include <new>
#include "classes/Obj421774.h"

extern "C" {
Obj421774Res *FUN_0012d714(AsdAllocatorObject *allocator, u32 unk);
}

Obj421774::Obj421774(AsdAllocatorObject *allocator, Obj421230ResHandle<Obj421774Res> handle, void *owner)
    : Obj421230(allocator, handle.res, owner), handle(handle)
{
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
    Obj421230ResHandle<Obj421774Res> res(FUN_0012d714(allocator, 0), allocator);
    void *memory = allocator->allocate(sizeof(Obj421774), 4);
    Obj421774 *fog = new (memory) Obj421774(allocator, res, owner);
    fog->initialize(allocator);
    return fog;
}

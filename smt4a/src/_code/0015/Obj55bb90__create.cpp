#include <new>
#include "classes/Obj55bb90.h"

extern "C" {
Obj55bb90Res *FUN_00172718(AsdAllocatorObject *allocator, u32 unk);
}

Obj55bb90::Obj55bb90(AsdAllocatorObject *allocator, Obj55b680ResHandle<Obj55bb90Res> handle, void *owner)
    : Obj55b680(allocator, handle.res, owner), handle(handle)
{
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
    Obj55b680ResHandle<Obj55bb90Res> res(FUN_00172718(allocator, 0), allocator);
    void *memory = allocator->allocate(sizeof(Obj55bb90), 4);
    Obj55bb90 *fog = new (memory) Obj55bb90(allocator, res, owner);
    fog->initialize(allocator);
    return fog;
}

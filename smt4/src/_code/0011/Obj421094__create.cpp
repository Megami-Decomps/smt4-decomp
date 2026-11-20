#include <new>
#include "classes/Obj421094.h"

extern "C" {
Obj421230Res *FUN_0012afd0(AsdAllocatorObject *allocator, u32 unk);
}

Obj421094::Obj421094(AsdAllocatorObject *allocator, Obj421230ResHandle<Obj421230Res> handle, void *owner)
    : Obj421230Light(allocator, handle.res, owner), handle(handle)
{
}

/* Builds the object from a default resource; the resource is released here only if the object
 * could not take ownership of it. */
Obj421094 *Obj421094::create(void *owner, AsdAllocatorObject *allocator)
{
    Obj421230ResHandle<Obj421230Res> res(FUN_0012afd0(allocator, 0), allocator);
    void *memory = allocator->allocate(sizeof(Obj421094), 4);
    Obj421094 *object = new (memory) Obj421094(allocator, res, owner);
    object->initialize(allocator);
    return object;
}

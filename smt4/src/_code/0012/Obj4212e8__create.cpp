#include <new>
#include "classes/Obj4212e8.h"

extern "C" {
Obj421230Res *FUN_0012c264(AsdAllocatorObject *allocator, u32 unk);
}

Obj4212e8::Obj4212e8(AsdAllocatorObject *allocator, Obj421230ResHandle<Obj421230Res> handle, void *owner)
    : Obj421230Light(allocator, handle.res, owner), handle(handle)
{
}

/* Builds the object from a default resource; the resource is released here only if the object
 * could not take ownership of it. */
Obj4212e8 *Obj4212e8::create(void *owner, AsdAllocatorObject *allocator)
{
    Obj421230ResHandle<Obj421230Res> res(FUN_0012c264(allocator, 0), allocator);
    void *memory = allocator->allocate(sizeof(Obj4212e8), 4);
    Obj4212e8 *object = new (memory) Obj4212e8(allocator, res, owner);
    object->initialize(allocator);
    return object;
}

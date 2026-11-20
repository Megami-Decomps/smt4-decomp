#include <new>
#include "classes/Obj55b4e4.h"

extern "C" {
Obj55b680Res *FUN_00171bbc(AsdAllocatorObject *allocator, u32 unk);
}

Obj55b4e4::Obj55b4e4(AsdAllocatorObject *allocator, Obj55b680ResHandle<Obj55b680Res> handle, void *owner)
    : Obj55b680Light(allocator, handle.res, owner), handle(handle)
{
}

/* Builds the object from a default resource; the resource is released here only if the object
 * could not take ownership of it. */
Obj55b4e4 *Obj55b4e4::create(void *owner, AsdAllocatorObject *allocator)
{
    Obj55b680ResHandle<Obj55b680Res> res(FUN_00171bbc(allocator, 0), allocator);
    void *memory = allocator->allocate(sizeof(Obj55b4e4), 4);
    Obj55b4e4 *object = new (memory) Obj55b4e4(allocator, res, owner);
    object->initialize(allocator);
    return object;
}

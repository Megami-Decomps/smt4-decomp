/* NON_MATCHING: register allocation only: retail copies the allocator word of the handle at the constructor call (a copy of the argument register r1) and numbers the owner/allocator r5/r6; the zero register is shared as in retail. */
#include <new>
#include "classes/Obj4212e8.h"

extern "C" {
Obj421230Res *FUN_0012c264(AsdAllocatorObject *allocator, u32 unk);
}

Obj4212e8::Obj4212e8(void *owner, Obj421230ResHandle<Obj421230Res> handle)
    : Obj421230(handle.allocator, handle.res, owner), unk148(0), handle(handle)
{
    unk170 = 0;
}

/* Builds the object from a default resource; the resource is released here only if the object
 * could not take ownership of it. */
Obj4212e8 *Obj4212e8::create(void *owner, AsdAllocatorObject *allocator)
{
    Obj421230ResHandle<Obj421230Res> res = {FUN_0012c264(allocator, 0), allocator};
    void *memory = allocator->allocate(sizeof(Obj4212e8), 4);
    Obj4212e8 *object = memory != NULL ? new (memory) Obj4212e8(owner, res.take()) : NULL;
    object->initialize(allocator);
    if (res.res != NULL) {
        Obj421230ReleaseRes(allocator, res.res);
    }
    return object;
}

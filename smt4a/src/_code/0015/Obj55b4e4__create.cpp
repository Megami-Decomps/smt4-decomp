/* NON_MATCHING: register allocation only: retail copies the allocator word of the handle at the constructor call (a copy of the argument register r1) and numbers the owner/allocator r5/r6; the zero register is shared as in retail. */
#include <new>
#include "classes/Obj55b4e4.h"

extern "C" {
Obj55b680Res *FUN_00171bbc(AsdAllocatorObject *allocator, u32 unk);
}

Obj55b4e4::Obj55b4e4(void *owner, Obj55b680ResHandle<Obj55b680Res> handle)
    : Obj55b680(handle.allocator, handle.res, owner), unk148(0), handle(handle)
{
    unk170 = 0;
}

/* Builds the object from a default resource; the resource is released here only if the object
 * could not take ownership of it. */
Obj55b4e4 *Obj55b4e4::create(void *owner, AsdAllocatorObject *allocator)
{
    Obj55b680ResHandle<Obj55b680Res> res = {FUN_00171bbc(allocator, 0), allocator};
    void *memory = allocator->allocate(sizeof(Obj55b4e4), 4);
    Obj55b4e4 *object = memory != NULL ? new (memory) Obj55b4e4(owner, res.take()) : NULL;
    object->initialize(allocator);
    if (res.res != NULL) {
        Obj55b680ReleaseRes(allocator, res.res);
    }
    return object;
}

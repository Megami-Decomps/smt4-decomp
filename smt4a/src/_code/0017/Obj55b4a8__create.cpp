/* NON_MATCHING: register allocation only: retail copies the allocator word of the handle at the constructor call (a copy of the argument register r1) and numbers the owner/allocator r5/r6; the zero register is shared as in retail. */
#include <new>
#include "classes/Obj55b4a8.h"

extern "C" {
Obj55b4a8Res *FUN_0018c99c(AsdAllocatorObject *allocator, u32 unk);
}

Obj55b4a8::Obj55b4a8(void *owner, Obj55b680ResHandle<Obj55b4a8Res> handle)
    : Obj55b680(handle.allocator, handle.res, owner), unk148(0), handle(handle)
{
    unk170 = 0;
    const Obj55b4a8Words &source = static_cast<const Obj55b4a8Res *>(res)->words;
    words.head = source.head;
    words.tail = source.tail;
}

/* Builds the object from a default resource; the resource is released here only if the object
 * could not take ownership of it. */
Obj55b4a8 *Obj55b4a8::create(void *owner, AsdAllocatorObject *allocator)
{
    Obj55b680ResHandle<Obj55b4a8Res> res = {FUN_0018c99c(allocator, 0), allocator};
    void *memory = allocator->allocate(sizeof(Obj55b4a8), 4);
    Obj55b4a8 *object = memory != NULL ? new (memory) Obj55b4a8(owner, res.take()) : NULL;
    object->initialize(allocator);
    if (res.res != NULL) {
        Obj55b680ReleaseRes(allocator, res.res);
    }
    return object;
}

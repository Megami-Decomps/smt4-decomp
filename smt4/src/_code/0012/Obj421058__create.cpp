/* NON_MATCHING: register allocation only: retail shares one zero register (r9) for the null result, the moved resource and the zeroed fields, and copies the allocator at the constructor call; built uses separate registers */
#include <new>
#include "classes/Obj421058.h"

extern "C" {
Obj421058Res *FUN_0013d5e0(AsdAllocatorObject *allocator, u32 unk);
}

Obj421058::Obj421058(void *owner, Obj421230ResHandle<Obj421058Res> handle)
    : Obj421230(handle.allocator, handle.res, owner), unk148(0), handle(handle)
{
    unk170 = 0;
    const Obj421058Words &source = static_cast<const Obj421058Res *>(res)->words;
    words.head = source.head;
    words.tail = source.tail;
}

/* Builds the object from a default resource; the resource is released here only if the object
 * could not take ownership of it. */
Obj421058 *Obj421058::create(void *owner, AsdAllocatorObject *allocator)
{
    Obj421230ResHandle<Obj421058Res> res = {FUN_0013d5e0(allocator, 0), allocator};
    void *memory = allocator->allocate(sizeof(Obj421058), 4);
    Obj421058 *object = NULL;
    if (memory != NULL) {
        object = new (memory) Obj421058(owner, res.take());
    }
    object->initialize(allocator);
    if (res.res != NULL) {
        Obj421230ReleaseRes(allocator, res.res);
    }
    return object;
}

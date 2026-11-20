/* NON_MATCHING: only the copy of the three resource words differs: retail loads the pair and the third word before storing the third word and then the pair; the build stores the pair first. */
#include <new>
#include "classes/Obj421158.h"

extern "C" {
Obj421158Res *FUN_0013d7a0(AsdAllocatorObject *allocator, u32 unk);
}

Obj421158::Obj421158(AsdAllocatorObject *allocator, Obj421230ResHandle<Obj421158Res> handle, void *owner)
    : Obj421230Light(allocator, handle.res, owner), handle(handle)
{
    const Obj421158Words &source = static_cast<const Obj421158Res *>(res)->unk10c;
    unk17c.head = source.head;
    unk17c.tail = source.tail;
}

/* Builds a light from a default resource; the resource is destroyed here only if the light
 * could not take ownership of it. */
Obj421158 *Obj421158::create(void *owner, AsdAllocatorObject *allocator)
{
    Obj421230ResHandle<Obj421158Res> res(FUN_0013d7a0(allocator, 0), allocator);
    void *memory = allocator->allocate(sizeof(Obj421158), 4);
    Obj421158 *light = new (memory) Obj421158(allocator, res, owner);
    light->initialize(allocator);
    return light;
}

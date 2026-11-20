/* NON_MATCHING: only the copy of the three resource words differs: retail loads the pair and the third word before storing the third word and then the pair; the build stores the pair first. */
#include <new>
#include "classes/Obj55b5a8.h"

extern "C" {
Obj55b5a8Res *FUN_0018cb5c(AsdAllocatorObject *allocator, u32 unk);
}

Obj55b5a8::Obj55b5a8(AsdAllocatorObject *allocator, Obj55b680ResHandle<Obj55b5a8Res> handle, void *owner)
    : Obj55b680Light(allocator, handle.res, owner), handle(handle)
{
    const Obj55b5a8Words &source = static_cast<const Obj55b5a8Res *>(res)->unk10c;
    unk17c.head = source.head;
    unk17c.tail = source.tail;
}

/* Builds a light from a default resource; the resource is destroyed here only if the light
 * could not take ownership of it. */
Obj55b5a8 *Obj55b5a8::create(void *owner, AsdAllocatorObject *allocator)
{
    Obj55b680ResHandle<Obj55b5a8Res> res(FUN_0018cb5c(allocator, 0), allocator);
    void *memory = allocator->allocate(sizeof(Obj55b5a8), 4);
    Obj55b5a8 *light = new (memory) Obj55b5a8(allocator, res, owner);
    light->initialize(allocator);
    return light;
}

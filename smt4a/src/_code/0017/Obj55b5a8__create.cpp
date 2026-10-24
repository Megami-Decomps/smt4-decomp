/* NON_MATCHING: register allocation only: retail shares one zero register (r9) for the null result, the moved resource and the zeroed fields, and copies the allocator at the constructor call; built uses separate registers */
#include <new>
#include "classes/Obj55b5a8.h"

extern "C" {
Obj55b5a8Res *FUN_0018cb5c(AsdAllocatorObject *allocator, u32 unk);
void nw_gfx_FragmentLight_DestroyResFragmentLight(AsdAllocatorObject *allocator, Obj55b5a8Res *res);
}

Obj55b5a8::Obj55b5a8(void *owner, Obj55b680ResHandle<Obj55b5a8Res> handle)
    : Obj55b680(handle.allocator, handle.res, owner), unk148(0), handle(handle)
{
    unk170 = 0;
    const Obj55b5a8Words &source = static_cast<const Obj55b5a8Res *>(res)->unk10c;
    unk17c.head = source.head;
    unk17c.tail = source.tail;
}

/* Builds a light from a default resource; the resource is destroyed here only if the light
 * could not take ownership of it. */
Obj55b5a8 *Obj55b5a8::create(void *owner, AsdAllocatorObject *allocator)
{
    Obj55b680ResHandle<Obj55b5a8Res> res = {FUN_0018cb5c(allocator, 0), allocator};
    void *memory = allocator->allocate(sizeof(Obj55b5a8), 4);
    Obj55b5a8 *light = NULL;
    if (memory != NULL) {
        light = new (memory) Obj55b5a8(owner, res.take());
    }
    light->initialize(allocator);
    if (res.res != NULL) {
        nw_gfx_FragmentLight_DestroyResFragmentLight(allocator, res.res);
    }
    return light;
}

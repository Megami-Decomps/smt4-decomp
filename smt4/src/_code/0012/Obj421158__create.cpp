/* NON_MATCHING: register allocation only: retail copies the allocator word of the handle at the constructor call (a copy of the argument register r1) and numbers the owner/allocator r5/r6; the zero register is shared as in retail. */
#include <new>
#include "classes/Obj421158.h"

extern "C" {
Obj421158Res *FUN_0013d7a0(AsdAllocatorObject *allocator, u32 unk);
void nw_gfx_FragmentLight_DestroyResFragmentLight(AsdAllocatorObject *allocator, Obj421158Res *res);
}

Obj421158::Obj421158(void *owner, Obj421230ResHandle<Obj421158Res> handle)
    : Obj421230(handle.allocator, handle.res, owner), unk148(0), handle(handle)
{
    unk170 = 0;
    const Obj421158Words &source = static_cast<const Obj421158Res *>(res)->unk10c;
    unk17c.head = source.head;
    unk17c.tail = source.tail;
}

/* Builds a light from a default resource; the resource is destroyed here only if the light
 * could not take ownership of it. */
Obj421158 *Obj421158::create(void *owner, AsdAllocatorObject *allocator)
{
    Obj421230ResHandle<Obj421158Res> res = {FUN_0013d7a0(allocator, 0), allocator};
    void *memory = allocator->allocate(sizeof(Obj421158), 4);
    Obj421158 *light = memory != NULL ? new (memory) Obj421158(owner, res.take()) : NULL;
    light->initialize(allocator);
    if (res.res != NULL) {
        nw_gfx_FragmentLight_DestroyResFragmentLight(allocator, res.res);
    }
    return light;
}

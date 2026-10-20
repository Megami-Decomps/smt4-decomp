/* NON_MATCHING: same stores; the scheduler writes the resource word (str r5, [r0, #28]) before the float stores, retail writes it last. */
#include "classes/Obj4216b4.h"

extern "C" {

extern u8 DAT_004216bc;   /* the vtable's address point */

/* Makes an Obj4216b4 from the allocator, holding the resource; NULL if the allocation failed. */
Obj4216b4 *FUN_0013f3bc(AsdAllocatorObject *allocator, void *resource)
{
    Obj4216b4 *obj = (Obj4216b4 *)allocator->allocate(sizeof(Obj4216b4), 4);

    if (obj != NULL) {
        obj->owner = allocator;
        obj->resource = resource;
        obj->unk08 = 0;
        obj->ownsResource = 0;
        obj->param[0] = 0.5f;
        obj->param[1] = 0.5f;
        obj->param[2] = 0.5f;
        obj->param[3] = 0.5f;
        *(const void **)obj = &DAT_004216bc;
    }
    return obj;
}

} /* extern "C" */

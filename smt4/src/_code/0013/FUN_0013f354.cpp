/* NON_MATCHING: same stores; the scheduler writes the resource word (str r5, [r0, #28]) before the float stores, retail writes it last. */
#include "classes/Obj4215f4.h"

extern "C" {

extern u8 DAT_004215fc;   /* the vtable's address point */

/* Makes an Obj4215f4 from the allocator, holding the resource; NULL if the allocation failed. */
Obj4215f4 *FUN_0013f354(AsdAllocatorObject *allocator, void *resource)
{
    Obj4215f4 *obj = (Obj4215f4 *)allocator->allocate(sizeof(Obj4215f4), 4);

    if (obj != NULL) {
        obj->owner = allocator;
        obj->resource = resource;
        obj->unk08 = 0;
        obj->ownsResource = 0;
        obj->param[0] = 0.5f;
        obj->param[1] = 0.5f;
        obj->param[2] = 0.5f;
        obj->param[3] = 0.5f;
        *(const void **)obj = &DAT_004215fc;
    }
    return obj;
}

} /* extern "C" */

#include "shard/Shard0041.h"
#include "classes/Obj42083c.h"

extern "C" {
extern u8 _ZTV9Obj420794[];
extern u8 _ZTV9Obj42083c[];
void textureOwnerReset(u32 handle);
void asdOperatorDeleteB(u32 ptr);

/* Retail inlines the filter teardown and uses a different deallocator from the base class. */
void _ZN9Obj42083cD0Ev(FilterObj *obj)
{
    obj->vtbl = _ZTV9Obj42083c + 8;
    if (obj->extra != 0) {
        asdOperatorDeleteB(obj->extra);
        obj->extra = 0;
    }
    obj->vtbl = _ZTV9Obj420794 + 8;
    if (obj->handle != 0) {
        textureOwnerReset(obj->handle);
        obj->handle = 0;
    }
    if (obj->buffer != 0) {
        asdMemFree((void *)obj->buffer);
        obj->buffer = 0;
    }
    if (obj->child != NULL) {
        obj->child->vtbl->release(obj->child);
        obj->child = NULL;
    }
    asdOperatorDelete(obj);
}
} /* extern "C" */

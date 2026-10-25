#include "classes/Obj420794.h"
#include "shard/Shard0040.h"

extern "C" {

extern u8 _ZTV9Obj420794[];
extern void textureOwnerReset(u32 handle);

/* Destroys the filter object: restores the base vtable, releases its resources and frees it. */
void _ZN9Obj420794D0Ev(FilterObj *obj)
{
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

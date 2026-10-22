#include "shard/Shard0041.h"
#include "classes/Obj42080c.h"

extern "C" {
extern u8 _ZTV9Obj420794[];
void textureOwnerReset(u32 handle);
void asdOperatorDelete(FilterObj *object);

/* C entry retained: generated D0 selects the shared base's SMT IV release/delete names. */
void _ZN9Obj42080cD0Ev(FilterObj *object)
{
    object->vtbl = _ZTV9Obj420794 + 8;
    if (object->handle != 0) {
        textureOwnerReset(object->handle);
        object->handle = 0;
    }
    if (object->buffer != 0) {
        asdMemFree((void *)object->buffer);
        object->buffer = 0;
    }
    if (object->child != NULL) {
        object->child->vtbl->release(object->child);
        object->child = NULL;
    }
    asdOperatorDelete(object);
}
}

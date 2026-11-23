#include "shard/Shard0041.h"
#include "classes/Obj42080c.h"
#include "classes/Obj420794Resources.h"

extern "C" {
extern u8 _ZTV9Obj420794[];

void _ZN9Obj42080cD0Ev(FilterObj *object)
{
    object->vtbl = _ZTV9Obj420794 + 8;
    if (object->handle != 0) {
        bufferHandleRelease(object->handle);
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

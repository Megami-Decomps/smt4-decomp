#include "shard/Shard0040.h"

extern "C" {

extern u8 g_filter4PolyBaseVtable;
extern void textureOwnerReset(u32 handle);
extern void asdMemFree(u32 ptr);
extern void asdOperatorDelete(FilterObj *obj);

/* Destroys the filter object: restores the base vtable, releases its resources and frees it. */
void _ZN9Obj420794D0Ev(FilterObj *obj)
{
    obj->vtbl = &g_filter4PolyBaseVtable;
    if (obj->handle != 0) {
        textureOwnerReset(obj->handle);
        obj->handle = 0;
    }
    if (obj->buffer != 0) {
        asdMemFree(obj->buffer);
        obj->buffer = 0;
    }
    if (obj->child != NULL) {
        obj->child->vtbl->release(obj->child);
        obj->child = NULL;
    }
    asdOperatorDelete(obj);
}

} /* extern "C" */

#include "shard/Shard0041.h"

extern "C" {

extern u8 g_filter4PolyBaseVtable;
extern void FUN_002a1ca0(u32 handle);
extern void asdMemFree(u32 ptr);
extern void FUN_002e3328(FilterObj *obj);

/* Destroys the filter object: restores the base vtable, releases its resources and frees it. */
void filter4PolyBaseDestroy2(FilterObj *obj)
{
    obj->vtbl = &g_filter4PolyBaseVtable;
    if (obj->handle != 0) {
        FUN_002a1ca0(obj->handle);
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
    FUN_002e3328(obj);
}

} /* extern "C" */
